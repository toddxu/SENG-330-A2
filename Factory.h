#ifndef __FACTORY_H__
#define __FACTORY_H__

#include "GameEntity.h"
#include "Room.h"
#include "Item.h"
#include "Player.h"

class Factory {

public:
	static GameEntity* makeGameEntity(int input);

private:
	static GameEntity* gameEntityPrototypes[5];

};

#endif // __FACTORY_H__