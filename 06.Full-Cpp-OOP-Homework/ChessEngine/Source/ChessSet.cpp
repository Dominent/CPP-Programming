#include "../Includes/ChessSet.h"
#include "../Includes/ChessPieceType.h"
#include "../Includes/ChessPieceFactory.h"

#include <stdlib.h> 

ChessSet::ChessSet(ChessPieceFactory factory, ColorType color)
	: m_color(color)
{
	Init(factory);
}

void ChessSet::Init(ChessPieceFactory & factory)
{
	int index = 0;
	this->m_set = new IChessPiecePtr[PIECE_COUNT];

	int offset = ( this->m_color == ColorType::BLACK ? 0 : -7 );

	this->m_pawns = m_set;
	for (int i = 0; i < PAWN_COUNT; ++i)
		this->m_set[i] = factory.Make(ChessPieceType::PAWN, position{ abs(offset + 1) , i }, this->m_color);
	index += PAWN_COUNT;

	this->m_bishops = m_set + index;
	this->m_set[index] = factory.Make(ChessPieceType::BISHOP, position{ abs(offset), 2 }, this->m_color);
	this->m_set[index + 1] = factory.Make(ChessPieceType::BISHOP, position{ abs(offset), 5 }, this->m_color);
	index += BISHOP_COUNT;

	this->m_rooks = this->m_set + index;
	this->m_set[index] = factory.Make(ChessPieceType::ROOK, position{ abs(offset), 0 }, this->m_color);
	this->m_set[index + 1] = factory.Make(ChessPieceType::ROOK, position{ abs(offset), 7 }, this->m_color);
	index += ROOK_COUNT;

	this->m_knights = this->m_set + index;
	this->m_set[index] = factory.Make(ChessPieceType::KNIGHT, position{ abs(offset), 1 }, this->m_color);
	this->m_set[index + 1] = factory.Make(ChessPieceType::KNIGHT, position{ abs(offset), 6 }, this->m_color);
	index += KNIGHT_COUNT;

	this->m_queen = m_set[index];
	this->m_set[index] = factory.Make(ChessPieceType::QUEEN, position{ abs(offset), 3 }, this->m_color);
	index += 1;

	this->m_king = m_set[index];
	this->m_set[index] = factory.Make(ChessPieceType::KING, position{ abs(offset), 4 }, this->m_color);
	index += 1;
}

IChessPiecePtr ChessSet::GetKing(void) const
{
	return this->m_king;
}

IChessPiecePtr * ChessSet::GetFullSet(void) const
{
	return this->m_set;
}

IChessPiecePtr * ChessSet::GetPawns(void) const
{
	return this->m_pawns;
}