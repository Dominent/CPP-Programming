#ifndef CHESS_SET_H
#define CHESS_SET_H

class IChessPiece;
class ChessPieceFactory;

typedef IChessPiece * IChessPiecePtr;

#include "ColorType.h"

typedef class ChessSet
{
#define PIECE_COUNT 16
#define PAWN_COUNT 8
#define BISHOP_COUNT 2
#define KNIGHT_COUNT 2
#define ROOK_COUNT 2
public:
	ChessSet(ChessPieceFactory factory, ColorType color);

	IChessPiecePtr * GetFullSet(void) const;
	IChessPiecePtr * GetPawns(void) const;
	IChessPiecePtr GetKing(void) const;
private:
	void Init(ChessPieceFactory & factory);

	ColorType m_color;

	IChessPiecePtr * m_set;

	IChessPiecePtr * m_pawns;
	IChessPiecePtr * m_bishops;
	IChessPiecePtr * m_rooks;
	IChessPiecePtr * m_knights;
	IChessPiecePtr m_king;
	IChessPiecePtr m_queen;
} *ChessSetPtr;

#endif // !CHESS_SET_H