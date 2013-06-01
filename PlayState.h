#pragma once
#include "State.h"
class PlayState :
	public State
{
public:
	PlayState(void);
	virtual ~PlayState(void);
	virtual void Update();
	virtual void Draw();
	virtual void Init();
	virtual void CleanUp();
};

