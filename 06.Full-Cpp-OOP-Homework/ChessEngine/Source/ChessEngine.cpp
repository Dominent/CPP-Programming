#include "../Includes/ChessEngine.h"
#include "../Includes/ChessPieceFactory.h"

ChessEnginePtr ChessEngine::Init(vector<PlayerPtr> players)
{
	ChessBoard * board = ChessBoard::Instance( );

	// TODO(Domi): Board has factory, factory has board ?!
	ChessPieceFactory factory(board);

	board->Init(factory);

	ChessEnginePtr engine = new ChessEngine(board, players);

	return engine;
}

void ChessEngine::Start(void)
{
	this->m_isRunning = true;
}

bool ChessEngine::IsRunning(void) const
{
	return this->m_isRunning;
}

void ChessEngine::Execute(PlayerMove playerMove)
{
	this->m_board->Find(playerMove.GetStartPosition( ))->Move(playerMove.GetEndPosition( ));
}

void ChessEngine::SwitchPlayer(void)
{
	for (auto player : m_players)
	{
		if (player != this->m_currentPlayer)
		{
			this->m_currentPlayer = player;
		}
	}
}

ChessEngine::ChessEngine(ChessBoardPtr board, std::vector<PlayerPtr> players)
	: m_board(board), m_players(players)
{
}
