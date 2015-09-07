#pragma once
#include <memory>
#include "Renderable.h"

class VertexData;

class Entity :
	public Renderable
{
protected:
	float m_PositionX;
	float m_PositionY;

	float m_Rotation;
public:
	Entity();
	~Entity();

	virtual void SetPosition(float posX, float posY);

	virtual void Move(float posX, float posY);
	virtual void Scale(float factor);
	virtual void Rotate(float angle); //rotates around Z axis;

	virtual float GetPositionX() const;
	virtual float GetPositionY() const;
	virtual void GetPosition(float& x, float& y) const;

	virtual float GetRotation() const;
};

