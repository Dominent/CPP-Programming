#include "../Includes/ChessPieceBase.h"
#include "../Includes/LoggerFactory.h"
#include "../Includes/ChessBoard.h"
#include "../Includes/String.h"
#include "../Includes/LogType.h"

ChessPieceBase::ChessPieceBase( )
{
}

ChessPieceBase::~ChessPieceBase( )
{
}

ChessPieceBase::ChessPieceBase(position position, char symbol, ColorType color)
	:m_position(position), m_symbol(symbol), m_color(color)
{
}

bool ChessPieceBase::IsRemoved(void) const
{
	return this->m_isRemoved;
}

void ChessPieceBase::Remove(void)
{
	ChessBoard * board = ChessBoard::Instance( );

	board->CheckPosition(this->m_position);

	this->m_isRemoved = true;
}

position ChessPieceBase::GetPosition(void) const
{
	return this->m_position;
}

ColorType ChessPieceBase::GetColor( ) const
{
	return this->m_color;
}

char ChessPieceBase::GetSymbol(void) const
{
	return this->m_symbol;
}

bool ChessPieceBase::Move(position newPosition)
{
	// TODO(Domi): Dependency is hidden !
	ChessBoard * board = ChessBoard::Instance( );
	ILogger * logger = LoggerFactory::Make( );

	for (auto position : this->GetAvailableMoves(board))
	{
		if (newPosition != position)
		{
			continue;
		}

		if (board->ChangePosition(this, this->m_position, newPosition))
		{
			this->m_position = newPosition;

			return true;
		}

		IChessPiecePtr piece = board->Find(position);
		if (piece->GetColor( ) != this->GetColor( ))
		{
			if (!piece->IsRemoved( ))
			{
				piece->Remove( );
			}

			return true;
		}

		if (piece->GetColor( ) == this->GetColor( ))
		{
			std::string message = String::Format("Cannot move Pawn to position %s",
												 position.ToString( ).c_str());

			logger->Log(message, LogType::ERROR);
		}
		else
		{
			logger->Log("Position out of bounds!", LogType::ERROR);
		}
	}
	return false;
}
