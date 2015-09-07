#pragma once
#include <list>
#include <memory>

class Entity;

class EntityManager
{
protected:
	std::list<std::shared_ptr<Entity>> m_Entities;
public:
	EntityManager();
	~EntityManager();

	std::shared_ptr<Entity> CreateEntity(const char* name);

	void RemoveEntity(const char* name);
	void RemoveEntity(std::shared_ptr<Entity> entity);

	void Render();
};

