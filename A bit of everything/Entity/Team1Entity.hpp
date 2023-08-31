#pragma once
#include "Entity.hpp"
#include <iostream>

class Team1Ent : public CBaseEntity
{
public:
	virtual void ShootEnemy()
	{
		printf("Shooting at Team2!\n");
	}

	virtual EntTypes ReturnEnemyType()
	{
		return Team1;
	}

	virtual void InitEnt();

	Team1Ent()
	{
		strcpy_s(ClassName, 10, "Team1Ent");

		InitEnt();
	}


private:

};

