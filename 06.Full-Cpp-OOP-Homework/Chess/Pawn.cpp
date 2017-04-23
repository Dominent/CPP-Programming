#include "Pawn.h"

#include <cstdlib>

Pawn::Pawn(position position, ColorType color)
	:ChessPieceBase(position, 'P', color)
{
}

std::vector<position> Pawn::GetAvailableMoves(ChessBoard * board)
{
	// TODO(Domi): Only list moves here, no checking!
	// TODO(Domi): Rewrite and remove vector!
	return std::vector<position> {
		position{ this->m_position.x + 1,  this->m_position.y },
		position{ this->m_position.x - 1,  this->m_position.y },
		position{ this->m_position.x,  this->m_position.y + 1 }
	};
}