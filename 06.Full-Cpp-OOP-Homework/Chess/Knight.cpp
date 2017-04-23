#include "Knight.h"

Knight::Knight( )
	:ChessPieceBase( )
{
	this->m_symbol = 'H';
}

std::vector<position> Knight::GetAvailableMoves(ChessBoard * board)
{
	// TODO(Domi): Only list moves here, no checking!
	// TODO(Domi): Rewrite and remove vector!
	return std::vector<position> {
		position{ this->m_position.x + 1,  this->m_position.y + 2 },
		position{ this->m_position.x + 2,  this->m_position.y + 1 },
		position{ this->m_position.x + 2,  this->m_position.y - 1 },
		position{ this->m_position.x + 1,  this->m_position.y - 2 },

		position{ this->m_position.x - 1,  this->m_position.y - 2 },
		position{ this->m_position.x - 2,  this->m_position.y - 1 },
		position{ this->m_position.x - 2,  this->m_position.y + 1 },
		position{ this->m_position.x - 1,  this->m_position.y + 2 }
	};
}