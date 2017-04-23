#include "ChessPieceFactory.h"

#include "Pawn.h"
#include "Bishop.h"
#include "Knight.h"
#include "Rook.h"
#include "King.h"
#include "Queen.h"

ChessPieceFactory::ChessPieceFactory(ChessBoard * board)
	: Board(board)
{
}

IChessPiece * ChessPieceFactory::Make(ChessPieceType type, position position, ColorType color)
{
	IChessPiecePtr piece;

	switch (type)
	{
		case ChessPieceType::PAWN:
			piece = new Pawn(position, color);
			break;
		case ChessPieceType::BISHOP:
			piece = new Bishop( );
			break;
		case ChessPieceType::KNIGHT:
			piece = new Knight( );
			break;
		case ChessPieceType::ROOK:
			piece = new Rook( );
			break;
		case ChessPieceType::KING:
			piece = new King( );
			break;
		case ChessPieceType::QUEEN:
			piece = new Queen( );
			break;
		default:
			return 0;
	}

	this->Board->SetPosition(piece, position);

	return piece;
}
