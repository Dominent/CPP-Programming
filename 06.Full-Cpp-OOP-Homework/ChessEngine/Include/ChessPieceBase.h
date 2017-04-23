#ifndef CHEST_PIECE_BASE_H
#define CHEST_PIECE_BASE_H

#include "IChessPiece.h"

class ChessPieceBase : public IChessPiece
{
public:
	ChessPieceBase( );
	ChessPieceBase(ChessPieceBase * other);
	virtual ~ChessPieceBase( );

	ChessPieceBase(position position, char symbol, ColorType color);

	virtual bool IsRemoved(void) const;
	virtual void Remove(void);

	virtual ColorType GetColor( ) const;
	virtual char GetSymbol(void) const;
	virtual position GetPosition(void) const;

	virtual std::vector<position> GetAvailableMoves(ChessBoard * board) = 0;
	virtual bool Move(position newPosition);
protected:
	ColorType m_color;
	char m_symbol;
	position m_position;
	bool m_isRemoved;
};
#endif // !CHEST_PIECE_BASE_H
