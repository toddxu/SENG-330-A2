#ifndef __ENTITYLIST_H__
#define __ENTITYLIST_H__

#include "GameEntity.h"

#include <map>

/*Header file for EntityList*/
class EntityList {                          

/* Private variable uses a map to implement the list of entities */
private:
    std::map<int, GameEntity*> map_;

/* Public functions have a default constructor for the class, a destructor
 * Other functions include AddEntity which takes a pointer of game entity and adds the entity to the list
 * RemoveEntity takes the ID of the entity and removes it from the list
 * GetEntity takes the ID of the entity and locates the item on the list
 * GetEntityCount returns the the current size of the list containing entities
*/
public:
    EntityList();
    ~EntityList();

    void AddEntity(GameEntity* game_entity);
    void RemoveEntity(int id);
    GameEntity* GetEntity( int id);
    int GetEntityCount();

};

#endif // __ENTITYLIST_H__