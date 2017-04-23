#ifndef BISHOP_H
#define BISHOP_H

#include "ChessPieceBase.h"

class Bishop : public ChessPieceBase
{
public:
	Bishop( );

	virtual std::vector<position> GetAvailableMoves(ChessBoard * board);
};
#endif // !BISHOP_H