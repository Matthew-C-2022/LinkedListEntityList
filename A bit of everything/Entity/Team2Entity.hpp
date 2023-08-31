#pragma once
#include "Entity.hpp"
#include <iostream>

class Team2Ent : public CBaseEntity
{
public:
	virtual void ShootEnemy()
	{
		printf("Shooting at Team1!\n");
	}

	virtual EntTypes ReturnEnemyType()
	{
		return Team2;
	}

	virtual void InitEnt();

	Team2Ent()
	{
		strcpy_s(ClassName, 10, "Team2Ent");

		InitEnt();
	}


};
