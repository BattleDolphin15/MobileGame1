#pragma once
#include <memory>
#include <vector>
#include <list>

class VertexData;

class VertexDataManager
{
protected:
	std::list<std::shared_ptr<VertexData>> m_VertexData;
public:
	VertexDataManager();
	~VertexDataManager();

	std::shared_ptr<VertexData> CreateVertexData(const char* name);
	std::shared_ptr<VertexData> CreateVertexData(const char* name, const std::vector<float>& vertices);

	std::shared_ptr<VertexData> GetVertexData(const char* name);
	const std::shared_ptr<VertexData> GetVertexData(const char* name) const;

	void RemoveVertexData(std::shared_ptr<VertexData> vertexData);
	void RemoveVertexData(const char* name);
};

