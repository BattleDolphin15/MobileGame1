#pragma once

class Renderer;

class Game
{
protected:
	Renderer* m_Renderer;
public:
	Game();
	~Game();

	void Init();
	void Update();
	void Render();
	void Shutdown();
};

