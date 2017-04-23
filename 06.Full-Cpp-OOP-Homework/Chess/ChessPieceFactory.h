#ifndef CHESS_PIECE_FACTORY_H
#define CHESS_PIECE_FACTORY_H

#include "ChessPieceType.h"
#include "IChessPiece.h"

class ChessPieceFactory
{
public:
	ChessPieceFactory(ChessBoard * board);

	IChessPiece * Make(ChessPieceType type, position position, ColorType color);
private:
	ChessBoard * Board;
};

#endif // !CHESS_PIECE_FACTORY_H