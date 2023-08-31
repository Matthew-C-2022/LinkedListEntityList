#pragma once
#include "../Entity/Entity.hpp"

namespace EntList
{
	inline CBaseEntity* StartingEnt{ nullptr };

	inline void InitializeEntList(CBaseEntity* Ent)
	{
		StartingEnt = Ent;
		Ent->NextEntity = nullptr;
	}


	inline void AddEntToGList(CBaseEntity* Ent)
	{
        if (StartingEnt == nullptr)
        {
            InitializeEntList(Ent);
            return; 
        }

        CBaseEntity* TempEnt = StartingEnt;

        while (TempEnt->NextEntity != nullptr)
        {
            if (TempEnt->NextEntity == Ent || TempEnt == Ent)
            {
                return; 
            }
            TempEnt = TempEnt->NextEntity;
        }

        TempEnt->NextEntity = Ent; 
        Ent->NextEntity = nullptr; 


	}
	

}