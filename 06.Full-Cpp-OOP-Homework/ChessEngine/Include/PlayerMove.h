#ifndef PLAYER_MOVE_H
#define PLAYER_MOVE_H

#include "Position.h"

class PlayerMove
{
public:
	PlayerMove(position start, position end);

	position GetStartPosition( void ) const;
	position GetEndPosition(void) const;
private:
	position m_start;
	position m_end;
};
#endif // !PLAYER_MOVE_H

