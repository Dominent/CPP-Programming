#ifndef I_CHESS_PIECE_H
#define I_CHESS_PIECE_H

#include "IRemovable.h"

#include "ChessBoard.h"
#include "Position.h"
#include "ColorType.h"

#include <vector>

typedef class IChessPiece : public IRemovable
{
public:
	// TODO(Domi): GetAvailableMoves is used only inside children. Make it protected ?
	virtual std::vector<position> GetAvailableMoves(ChessBoard * board) = 0;

	virtual bool Move(position newPostion) = 0;

	virtual char GetSymbol( ) const = 0;

	virtual ColorType GetColor( ) const = 0;

	virtual position GetPosition( ) const = 0;
} *IChessPiecePtr;
#endif // !I_CHESS_PIECE_H
