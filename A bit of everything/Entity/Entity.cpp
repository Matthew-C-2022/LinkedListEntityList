#include "Entity.hpp"
#include "../EntityList/EntityList.hpp"
void CBaseEntity::InitEnt()
{
	EntList::AddEntToGList(this);
}
