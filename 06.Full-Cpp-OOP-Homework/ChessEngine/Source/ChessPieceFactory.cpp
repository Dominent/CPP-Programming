#include "../Includes/ChessPieceFactory.h"
					
#include "../Includes/Pawn.h"
#include "../Includes/Bishop.h"
#include "../Includes/Knight.h"
#include "../Includes/Rook.h"
#include "../Includes/King.h"
#include "../Includes/Queen.h"

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
