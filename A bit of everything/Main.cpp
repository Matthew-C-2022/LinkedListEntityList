#include <iostream>
#include <Windows.h>
#include "Entity/Team1Entity.hpp"
#include "Entity/Team2Entity.hpp"
#include "EntityList/EntityList.hpp"


int main()
{
	Team1Ent Ent1;
	Team1Ent Ent2;
	Team2Ent Ent3;
	Team2Ent Ent4;
	Team1Ent Ent5;
	Team2Ent Ent6;

	Ent1.ShootEnemy();
	Ent4.ShootEnemy();
	printf("EntType! %s\n", Ent1.ClassName);
	printf("EntType2! %s\n", Ent4.ClassName);

	CBaseEntity* EntStorage = EntList::StartingEnt;


	while (EntStorage != nullptr)
	{
		printf("EntType! %s\n", EntStorage->ClassName);

		EntStorage->ShootEnemy();

		EntStorage = EntStorage->NextEntity;
	}


}