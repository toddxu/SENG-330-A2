/**
* Main.cpp
*/
#include "./GameEntity.h"
#include "./Factory.h"

#include <iostream>
#include <vector>

//#include "GameEntity.pb.h"
//#include <fstream>

int main(int argc, char* argv[]){

	/**
	* setup variables
	*/
	std::vector<GameEntity*> entities;
	int choice;
	std::string name;

	/**
	* get user input and create clones
	*/
	while (true) {
		std::cout << "\nChoose GameEntity type to create, Player(1) Room(2) Go(0): ";
		std::cin >> choice;
		if (choice == 0)
			break;

		std::cout << "Enter name of GameEntity: ";
		std::getline(std::cin, name); // clears cin from int grabbing above
		std::getline(std::cin, name);
		//std::cin >> name;

		GameEntity* Entity = Factory::makeGameEntity(choice);
		Entity->SetName(name);

		entities.push_back(Entity);	
	}

	/**
	* print out all clones created before exiting
	*/
	std::cout << "Objects created: ";
	for (int i = 0; i < entities.size(); ++i)
		entities[i]->PrintName();

	/**
	* delete all the created clones
	*/
	for (int i = 0; i < entities.size(); ++i)
		delete entities[i];

	/**
	* allow user to see output before exiting
	*/
	std::cout << "Press enter to exit...";
	std::cin.get();
	std::cin.get();
}