#ifndef KING_H
#define KING_H

#include "ChessPieceBase.h"

class King : public ChessPieceBase
{
public:
	King( );

	virtual std::vector<position> GetAvailableMoves(ChessBoard * board);
};
#endif // !KING_H