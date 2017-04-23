#include "Rook.h"

#include <algorithm>

Rook::Rook( )
	:ChessPieceBase( )
{
	this->m_symbol = 'R';
}

std::vector<position> Rook::GetAvailableMoves(ChessBoard * board)
{
	std::vector<position> moves;

	for (int i = 0; i < std::max(this->m_position.x, this->m_position.y); ++i)
	{
		moves.push_back(position{ ( this->m_position.x + i ) + 1, ( this->m_position.y + i ) });
		moves.push_back(position{ ( this->m_position.x + i ) - 1,  ( this->m_position.y + i ) });
		moves.push_back(position{ ( this->m_position.x + i ), ( this->m_position.y + i ) + 1 });
		moves.push_back(position{ ( this->m_position.x + i ),  ( this->m_position.y + i ) - 1 });
	}

	return moves;
}