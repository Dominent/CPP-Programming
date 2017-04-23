#include "../Includes/King.h"

King::King( )
	:ChessPieceBase( )
{
	this->m_symbol = 'K';
}

std::vector<position> King::GetAvailableMoves(ChessBoard * board)
{
	// TODO(Domi): Only list moves here, no checking!
	// TODO(Domi): Rewrite and remove vector!
	return std::vector<position> {
		position{ this->m_position.x + 1,  this->m_position.y },
		position{ this->m_position.x - 1,  this->m_position.y },
		position{ this->m_position.x,  this->m_position.y + 1 },
		position{ this->m_position.x,  this->m_position.y - 1 }
	};
}