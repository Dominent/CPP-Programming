#ifndef CHESS_BOARD_H
#define CHESS_BOARD_H

class IChessPiece;

#include <string>

#include "ColorType.h"
#include "Position.h"
#include "ChessSet.h"

class ChessBoard
{
#define COLS 8
#define ROWS 8

public:
	static ChessBoard * Instance(void);
	void Init(ChessPieceFactory factory);

	ChessSetPtr GetSet(ColorType color);
	IChessPiece * Find(position position);
	IChessPiece * Find(position position, ColorType color);

	bool ChangePosition(IChessPiecePtr piece, position currentPosition, position newPosition);
	bool SetPosition(IChessPiecePtr piece, position position);
	bool CheckPosition(position position);
	void ClearPosition(position position);

	std::string ToString( );
private:
	ChessBoard( );

	void Set(char symbol, position position);
	bool Check(position position);
	char Get(position position);

	char Board[ROWS][COLS];

	ChessSetPtr White;
	ChessSetPtr Black;
};
#endif // !CHESS_BOARD_H