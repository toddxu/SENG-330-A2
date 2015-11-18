/**
 *Player.cpp inherits GameEntity implementing the header file Player.h
 */

#include "Player.h"

/**
 * A default constructor that creates a player by initial id, a name
 */
Player::Player(int id, std::string name) : GameEntity(id, name){
    std::cout << "Created a player..." << std::endl;
}

/**
 * A standard constructor that creates a player by initial id, a name, and a connection id
 */
Player::Player(int id, std::string name, int connectionID) : GameEntity( id, name ) {
    connectionID_ = connectionID;
    std::cout << "Created a player with connection ID..." << std::endl;
}

/**
 * A destructor that removes object player
 */
Player::~Player() {
    std::cout << "Removed a player..." << std::endl;
}

/**
 * A connection id getter that returns the connection id of the player
 */
int Player::GetConnectionID() {
    return connectionID_;
}

/**
 * Print the information of the player
 */
void Player::PrintPlayer(){
	Print();
    std::cout << connectionID_ << std::endl;
}