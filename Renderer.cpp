#include "Renderer.h"


Renderer::Renderer()
{
}


Renderer::~Renderer()
{
}

void Renderer::AddRenderOperation(std::shared_ptr<RenderOperation> op)
{
}

void Renderer::RemoveRenderOperation(std::shared_ptr<RenderOperation> op)
{
}

void Renderer::Render()
{
	for (auto iter = m_RenderOperations.begin(); iter != m_RenderOperations.end(); iter++)
	{
		GLenum id = (*iter)->GetArrayId();
		Primitive primitive = (*iter)->GetPrimitive();
		RenderOperationType type = (*iter)->GetRenderOperationType();
		int first = (*iter)->GetFirst();
		int size = (*iter)->GetDrawSize();

		GLenum primitiveGL;

		switch (primitive)
		{
		case TRIANGLES:
			primitiveGL = GL_TRIANGLES;
			break;
		case TRIANGLE_STRIP:
			primitiveGL = GL_TRIANGLE_STRIP;
			break;
		case LINE:
			break;
		case POINT:
			break;
		}

		glBindBuffer(GL_ARRAY_BUFFER, id);
		glDrawArrays(primitiveGL, (GLint)first, (GLsizei)size);
		glBindBuffer(GL_ARRAY_BUFFER, id);
	}
}
