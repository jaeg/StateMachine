#pragma once
#include "State.h"
class MenuState :
	public State
{
public:
	MenuState(void);
	virtual ~MenuState(void);
	virtual void Update();
	virtual void Draw();
	virtual void Init();
	virtual void CleanUp();
};

