#ifndef PAWN_H
#define PAWN_H

#include "ChessPieceBase.h"

class Pawn : public ChessPieceBase
{
public:
	Pawn(position position, ColorType color);

	virtual std::vector<position> Pawn::GetAvailableMoves(ChessBoard * board);
};
#endif // !PAWN_H