#include <iostream>
#include <string>

#include "ChessBoard.h"
#include "IChessPiece.h"
#include "ChessPieceFactory.h"

// TODO(Domi): Implement missing available moves!
int main( )
{
	ChessBoard * board = ChessBoard::Instance( );

	// TODO(Domi): Board has factory, factory has board ?!
	ChessPieceFactory factory(board);

	board->Init(factory);

	std::cout << board->ToString( ) << std::endl;

	board->GetSet(ColorType::BLACK)->GetPawns( )[0]->Move(position{ 2, 0 });
	board->GetSet(ColorType::BLACK)->GetPawns( )[1]->Move(position{ 2, 1 });

	board->GetSet(ColorType::BLACK)->GetPawns( )[0]->Move(position{ 2, 1 });

	std::cout << board->ToString( ) << std::endl;

	return ( 0 );
}