#ifndef QUEEN_H
#define QUEEN_H

#include "ChessPieceBase.h"

class Queen : public ChessPieceBase
{
public:
	Queen( );

	virtual std::vector<position> GetAvailableMoves(ChessBoard * board);
};
#endif // !QUEEN_H