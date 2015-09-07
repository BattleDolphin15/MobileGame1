#include "Renderable.h"
#include "VertexData.h"
#include "RenderOperation.h"
#include <memory>

Renderable::Renderable()
{
}


Renderable::~Renderable()
{
}

void Renderable::SetVertexData(std::shared_ptr<VertexData> vertexData)
{
}

std::shared_ptr<VertexData> Renderable::GetVertexData()
{
	return std::shared_ptr<VertexData>();
}

const std::shared_ptr<VertexData> Renderable::GetVertexData() const
{
	return std::shared_ptr<VertexData>();
}

const std::shared_ptr<RenderOperation> Renderable::GetOrCreateRenderOperation()
{
	if (!m_RenderOperation)
	{
		m_RenderOperation = std::shared_ptr<RenderOperation>(new RenderOperation());
		m_RenderOperation->SetFirst(0);
		m_RenderOperation->SetArrayId(m_VertexData->GetVBO()->GetArrayId());
		m_RenderOperation->SetDrawSize(m_VertexData->GetVertices().size());
		m_RenderOperation->SetPrimitive(TRIANGLES);
	}

	return m_RenderOperation;
}
