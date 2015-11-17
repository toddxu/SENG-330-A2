
#include "gtest\gtest.h"
#include "..\Player.h"
#include "..\Room.h"

#include <string>

using std::string;

int Factorial(int n) {
	if (n <= 0)
		return 1;
	return n * Factorial(n - 1);
}

TEST(FactorialTest, HandlesZeroInput) {
	EXPECT_EQ(1, Factorial(0));
}


TEST(FactorialTest, HandlesPositiveInput) {
	EXPECT_EQ(1, Factorial(1));
	EXPECT_EQ(2, Factorial(2));
	EXPECT_EQ(6, Factorial(3));
	EXPECT_EQ(40320, Factorial(8));
}

TEST(FactorialTest, HandlesNegativeInput) {
	EXPECT_EQ(1, Factorial(-5));
	EXPECT_EQ(1, Factorial(-1));
	EXPECT_GT(Factorial(-10), 0);
}

class PlayerTest : public ::testing::Test {
	protected:
		virtual void SetUp() {
			player = new Player(0, "Greg", "Has name Greg");
		}
		Player* player;
};

TEST_F(PlayerTest, GregIsReal) {
	EXPECT_EQ(0, player->GetId());
	EXPECT_STREQ("Greg", player->GetName().c_str());
	EXPECT_STREQ("Has name Greg", player->GetDescription().c_str());
}

TEST_F(PlayerTest, GregChangeToLana) {
	player->SetId(1);
	player->SetName("Lana");
	player->SetDescription("Has name Lana");

	EXPECT_EQ(1, player->GetId());
	EXPECT_STREQ("Lana", player->GetName().c_str());
	EXPECT_STREQ("Has name Lana", player->GetDescription().c_str());
}

class RoomTest : public ::testing::Test {
protected:
	virtual void SetUp() {
		room = new Room(0, "Dungeon", "Looks dark");
	}
	Room* room;
};

TEST_F(RoomTest, DungeonIsReal) {
	EXPECT_EQ(0, room->GetId());
	EXPECT_STREQ("Dungeon", room->GetName().c_str());
	EXPECT_STREQ("Looks dark", room->GetDescription().c_str());
}

TEST_F(RoomTest, DungeonChangeToSunnyField) {
	room->SetId(1);
	room->SetName("Sunny Field");
	room->SetDescription("Looks beautiful!");

	EXPECT_EQ(1, room->GetId());
	EXPECT_STREQ("Sunny Field", room->GetName().c_str());
	EXPECT_STREQ("Looks beautiful!", room->GetDescription().c_str());
}