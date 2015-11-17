#include "Factory.h"


GameEntity* Factory::MakeGameEntity(int choice) {
	return Prototypes[choice]->Clone();
}

GameEntity* Factory::Prototypes[ ] = {
	5, new Player, new Room, new Item;
};


