#pragma once
#include "../Includes.hpp"
#include "../BaseTypes/Vector3.h"
enum EntTypes;

class CBaseEntity
{
public:

	int health;
	char name[25];
	CBaseEntity* NextEntity;
	Vector3 Position;
	char ClassName[25];



	CBaseEntity()
	{
		strcpy_s(ClassName,12, "BaseEntity");
	}

	virtual void ShootEnemy() = 0;
	virtual EntTypes ReturnEnemyType() = 0;
	virtual void InitEnt();
	

};



enum EntTypes
{
	Base = 0,
	Team1,
	Team2,
	UNK
};
