#include "VertexDataManager.h"


VertexDataManager::VertexDataManager()
{
}


VertexDataManager::~VertexDataManager()
{
}

std::shared_ptr<VertexData> VertexDataManager::CreateVertexData(const char * name)
{
	return std::shared_ptr<VertexData>();
}

std::shared_ptr<VertexData> VertexDataManager::CreateVertexData(const char * name, const std::vector<float>& vertices)
{
	return std::shared_ptr<VertexData>();
}

std::shared_ptr<VertexData> VertexDataManager::GetVertexData(const char * name)
{
	return std::shared_ptr<VertexData>();
}

const std::shared_ptr<VertexData> VertexDataManager::GetVertexData(const char * name) const
{
	return std::shared_ptr<VertexData>();
}

void VertexDataManager::RemoveVertexData(std::shared_ptr<VertexData> vertexData)
{
}

void VertexDataManager::RemoveVertexData(const char * name)
{
}

void VertexDataManager::RemoveAndDestroyVertexData(std::shared_ptr<VertexData> vertexData)
{
}

void VertexDataManager::RemoveAndDestroyVertexData(const char * name)
{
}
