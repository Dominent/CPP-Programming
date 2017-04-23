#ifndef CHESS_ENGINE_H
#define CHESS_ENGINE_H

class ChessBoard;
typedef ChessBoard * ChessBoardPtr;

#include "PlayerMove.h"
#include "Player.h"

#include <vector>
using std::vector;

typedef class ChessEngine
{
public:
	static ChessEnginePtr Init(vector<PlayerPtr> players);

	void Start(void);
	bool IsRunning(void) const;
	void Execute(PlayerMove playerMove);
	void SwitchPlayer(void);
private:
	ChessEngine(ChessBoardPtr board, vector<PlayerPtr> players);

	ChessBoardPtr m_board;
	bool m_isRunning;
	vector<PlayerPtr> m_players;
	PlayerPtr m_currentPlayer;
} *ChessEnginePtr;
#endif // !CHESS_ENGINE_H

