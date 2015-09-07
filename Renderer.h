#pragma once
#include <list>
#include <memory>
#include <GLES2/gl2.h>
#include <GLES2/gl2ext.h>
#include "Renderable.h"
#include "RenderOperation.h"

class Renderable;

class Renderer
{
protected:
	std::list<std::shared_ptr<RenderOperation>> m_RenderOperations;
public:
	Renderer();
	~Renderer();

	void AddRenderOperation(std::shared_ptr<RenderOperation> op);

	void RemoveRenderOperation(std::shared_ptr<RenderOperation> op);

	void Render();
};

