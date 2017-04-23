#ifndef KNIGHT_H
#define KNIGHT_H

#include "ChessPieceBase.h"

class Knight : public ChessPieceBase
{
public:
	Knight( );

	virtual std::vector<position> GetAvailableMoves(ChessBoard * board);
};
#endif // !KNIGHT_H