#ifndef __PLAYER_H__
#define __PLAYER_H__

/**
 * The header file of Player that inherits GameEntity
 */
#include "GameEntity.h"
#include <iostream>
#include <string>

class Player: public GameEntity{

/**
 * A private variable connectionID_ that stores the connection id of the player
 */
private:
    int connectionID_;

/**
 * The public functions include a default constructor, a standard constructor, a destructor, and a print function for displaying the information of the player
 * Also GetConnectionID provides the connection id of the player for other classes
 */
public:
    Player(int id, std::string name);
	Player(int id, std::string name, int connectionID_);
    ~Player();
	void PrintPlayer();

	int GetConnectionID();
};

#endif 