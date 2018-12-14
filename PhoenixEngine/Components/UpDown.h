#pragma once

/* Start Header -------------------------------------------------------
Copyright (C) 2018 DigiPen Institute of Technology.
Reproduction or disclosure of this file or its contents without the prior
written consent of DigiPen Institute of Technology is prohibited.
File Name: UpDown.h
Purpose: UpDown Component
Language: C++ language
Platform: Visual Studio 2017 - Visual C++ 14.1, Windows 10 Home
Project: Game Engine
Author: Fenil Shingala, fenil.shingala, 60003118
Creation date: 12/07/2018
- End Header --------------------------------------------------------*/

#include "Component.h"

class UpDown : public Component
{
public:
	UpDown();
	inline ~UpDown() {}
	void update();
	void Serialize(GenericObject<false, Value::ValueType>);
public:
	bool mGoingUp;
	int mTimer, mTimerLimit;
};