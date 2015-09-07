#pragma once

class RenderOperation;
class VertexData;

class Renderable
{
protected:
	std::shared_ptr<RenderOperation> m_RenderOperation;

	std::shared_ptr<VertexData> m_VertexData;
public:
	Renderable();
	~Renderable();

	virtual void SetVertexData(std::shared_ptr<VertexData> vertexData);

	virtual std::shared_ptr<VertexData> GetVertexData();
	virtual const std::shared_ptr<VertexData> GetVertexData() const;

	virtual const std::shared_ptr<RenderOperation> GetOrCreateRenderOperation();
};

