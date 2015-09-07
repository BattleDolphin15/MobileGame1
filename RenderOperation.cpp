#include "RenderOperation.h"

RenderOperation::RenderOperation()
{
}

RenderOperation::~RenderOperation()
{
}

void RenderOperation::SetFirst(int first)
{
}

void RenderOperation::SetDrawSize(int drawSize)
{
}

int RenderOperation::GetFirst() const
{
	return 0;
}

int RenderOperation::GetDrawSize() const
{
	return 0;
}

void RenderOperation::SetArrayId(GLenum id)
{
}

GLenum RenderOperation::GetArrayId() const
{
	return GLenum();
}

void RenderOperation::SetPrimitive(Primitive primitive)
{
}

Primitive RenderOperation::GetPrimitive() const
{
	return Primitive();
}

void RenderOperation::SetRenderOperationType(RenderOperationType type)
{
}

RenderOperationType RenderOperation::GetRenderOperationType() const
{
	return RenderOperationType();
}
