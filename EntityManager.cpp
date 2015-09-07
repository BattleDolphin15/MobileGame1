#include "EntityManager.h"


EntityManager::EntityManager()
{
}


EntityManager::~EntityManager()
{
}

std::shared_ptr<Entity> EntityManager::CreateEntity(const char * name)
{
	return std::shared_ptr<Entity>();
}

void EntityManager::RemoveEntity(const char * name)
{
}

void EntityManager::RemoveEntity(std::shared_ptr<Entity> entity)
{
}

void EntityManager::RemoveAndDestroyEntity(const char * name)
{
}

void EntityManager::RemoveAndDestroyEntity(std::shared_ptr<Entity> entity)
{
}

void EntityManager::Render()
{
}
