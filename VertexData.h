#pragma once
#include "VertexBufferObject.h"
#include <vector>

class VertexBufferObject;

class VertexData
{
protected:
	std::vector<float> m_Vertices;
	//internally created and filled by VertexData
	VertexBufferObject m_VertexBuffer; 
public:
	VertexData(const char* name);
	~VertexData();

	void SetVertices(const std::vector<float>& vertices);

	const std::vector<float>& GetVertices() const;

	const VertexBufferObject* GetVBO() const;
};

