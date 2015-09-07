#pragma once
#include <vector>

class VertexBufferObject
{
protected:
	GLenum m_ArrayId;
public:
	VertexBufferObject();
	~VertexBufferObject();

	void InitBuffer(const std::vector<float>& vertices, GLenum drawHint);

	GLenum GetArrayId() const;
};

