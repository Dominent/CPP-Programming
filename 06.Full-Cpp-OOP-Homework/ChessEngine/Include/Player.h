#ifndef PLAYER_H
#define PLAYER_H

class IChessPiece;
typedef IChessPiece* IChessPiecePtr;

#include <string>

typedef class Player
{
public:
	Player(std::string name);

	IChessPiecePtr * GetPieceSet(void) const;
	std::string GetName(void)const;
private:
	std::string m_name;
	IChessPiecePtr * m_pieceSet;
} * PlayerPtr;
#endif // !PLAYER_H

