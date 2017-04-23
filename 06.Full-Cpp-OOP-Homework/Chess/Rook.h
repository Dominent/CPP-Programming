#ifndef ROOK_H
#define ROOK_H

#include "ChessPieceBase.h"

class Rook : public ChessPieceBase
{
public:
	Rook( );

	virtual std::vector<position> GetAvailableMoves(ChessBoard * board);
};
#endif // !ROOK_H