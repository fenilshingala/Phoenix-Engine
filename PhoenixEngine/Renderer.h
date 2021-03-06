#pragma once

/* Start Header -------------------------------------------------------
Copyright (C) 2018 DigiPen Institute of Technology.
Reproduction or disclosure of this file or its contents without the prior
written consent of DigiPen Institute of Technology is prohibited.
File Name: Renderer.h
Purpose: Renderer
Language: C++ language
Platform: Visual Studio 2017 - Visual C++ 14.1, Windows 10 Home
Project: Game Engine
Author: Fenil Shingala, fenil.shingala, 60003118
Creation date: 12/07/2018
- End Header --------------------------------------------------------*/

#include <string>

class Transform;
class Sprite;
class Body;

class Renderer
{
public:
	Renderer();
	~Renderer();

	void update();

private:
	void Draw();
private:
	unsigned int shaderID;
	unsigned int VAO;
	int textureID;
	float textureOffsetX;
	float textureOffsetY;
	float sheetX;
	float sheetY;
	Transform* pTr;
	Sprite* pSpr;
	Body* pBody;
};