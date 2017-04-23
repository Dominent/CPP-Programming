#include "../Includes/PlayerMove.h"

PlayerMove::PlayerMove(position start, position end)
	:m_start(start), m_end(end)
{
}

position PlayerMove::GetStartPosition(void) const
{
	return this->m_start;
}

position PlayerMove::GetEndPosition(void) const
{
	return this->m_end;
}
