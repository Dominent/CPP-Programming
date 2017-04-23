#include "Includes\IChessPiece.h"
#include "Includes\ChessBoard.h"
#include "Includes\ChessPieceFactory.h"
#include "Includes\Player.h"
#include "Includes\InputParser.h"
#include "Includes\ChessEngine.h"
#include "Includes\PlayerMove.h"

#include <iostream>
#include <string>

// TODO(Domi): Implement missing available moves!
int main( )
{
	std::string input;
	std::cin >> input;

	InputParser * parser = new InputParser( );
	PlayerMove move = parser->Parse(input);

	/*PlayerPtr White = new Player( "Ivan" );
	PlayerPtr Black = new Player("Petar");

	InputParser * parser = new InputParser();
	ChessEnginePtr chess = ChessEngine::Init(
		std::vector<PlayerPtr>{
			White,
			Black
		});

	chess->Start( );
	while (chess->IsRunning( ))
	{
		std::string input;

		std::cin >> input;

		PlayerMove move = parser->Parse(input);

		chess->Execute(move);

		chess->SwitchPlayer();
	}*/
	

	//ChessBoard * board = ChessBoard::Instance( );

	//// TODO(Domi): Board has factory, factory has board ?!
	//ChessPieceFactory factory(board);

	//board->Init(factory);

	//std::cout << board->ToString( ) << std::endl;

	//board->GetSet(ColorType::BLACK)->GetPawns( )[0]->Move(position{ 2, 0 });
	//board->GetSet(ColorType::BLACK)->GetPawns( )[1]->Move(position{ 2, 1 });

	//board->GetSet(ColorType::BLACK)->GetPawns( )[0]->Move(position{ 2, 1 });

	//std::cout << board->ToString( ) << std::endl;

	//intialize board;
	//currentPlayer = white;
	//while (no winner)
	//{
	//	print board;
	//	read player input to select figure
	//		//optional: show positions to which selected figure can go
	//		read player input to move figure //should check for validity
	//		update board; //move the figure, remove any destroyed figures, etc.
	//	change currentPlayer;
	//}

	//print end game board and winner;

	return ( 0 );
}