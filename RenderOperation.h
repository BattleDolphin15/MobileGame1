#pragma once

enum Primitive
{
	TRIANGLES,
	TRIANGLE_STRIP,
	LINE,
	POINT
};

enum RenderOperationType
{
	DRAW_ARRAYS,
	DRAW_ELEMENTS,
	DRAW_ARRAYS_INSTANCED,
	DRAW_ELEMENTS_INSTANCED,
	DRAW_ARRAYS_INDIRECT,
	DRAW_ELEMENTS_INDIRECT
};

class RenderOperation
{
protected:
	int m_First;
	int m_DrawSize;

	GLenum m_ArrayId;
	
	Primitive m_Primitive;

	RenderOperationType m_Type;
public:
	RenderOperation();
	~RenderOperation();

	void SetFirst(int first);
	void SetDrawSize(int drawSize);

	int GetFirst() const;
	int GetDrawSize() const;

	void SetArrayId(GLenum id);
	GLenum GetArrayId() const;

	void SetPrimitive(Primitive primitive);
	Primitive GetPrimitive() const;

	void SetRenderOperationType(RenderOperationType type);
	RenderOperationType GetRenderOperationType() const;
};