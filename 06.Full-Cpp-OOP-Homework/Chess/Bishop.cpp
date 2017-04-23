#include "Bishop.h"
#include <algorithm>

Bishop::Bishop( )
	:ChessPieceBase( )
{
	this->m_symbol = 'B';
}

std::vector<position> Bishop::GetAvailableMoves(ChessBoard * board)
{
	std::vector<position> moves;

	for (int i = 0; i < std::max(this->m_position.x, this->m_position.y); ++i)
	{
		moves.push_back(position{ ( this->m_position.x + i ) + 1, ( this->m_position.y + i ) + 1 });
		moves.push_back(position{ ( this->m_position.x + i ) - 1,  ( this->m_position.y + i ) - 1 });
		moves.push_back(position{ ( this->m_position.x + i ) + 1, ( this->m_position.y + i ) - 1 });
		moves.push_back(position{ ( this->m_position.x + i ) - 1,  ( this->m_position.y + i ) + 1 });
	}

	return moves;
}
