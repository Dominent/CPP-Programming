#ifndef I_REMOVABLE_H
#define I_REMOVABLE_H

class IRemovable
{
public:
	virtual bool IsRemoved(void) const = 0;

	virtual void Remove(void) = 0;
};
#endif // !I_REMOVABLE_H

