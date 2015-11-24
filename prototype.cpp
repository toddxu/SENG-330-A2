using namespace std;
#include <iostream>
#include <string>
#include <vector>

class GameEntity {

public:

	virtual void makeEntity() = 0;

};

class Item : public GameEntity {

public:

	void makeEntity() {
		cout << "Made Item\n";
	}
};

class Player : public GameEntity {

public:

	void makeEntity() {
		cout << "Made Player\n";
	}
};

int main() {


	int choice;

	while (true) {

		std::cout << "Make an item by pressing 1, make a player by pressing 2, exit by pressing 0";
		std::cin >> choice;

		if (choice == 1) {
			Item a;
			a.makeEntity();
		}
		else if (choice == 2) {
			Player b;
			b.makeEntity();
		}
		else {
			break;
		}

	}
}