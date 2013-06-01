#pragma once
#include "State.h"
#include "StateEnum.h"
#include "Referenced.h"
class StateMachine : public Referenced
{
    private:
        State* currentState;
        State* pausedState;
        State* CreateState(StateEnum state);
    public:
        StateMachine();
 	void SwitchState(StateEnum state); 
	void SuspendSwitchState(StateEnum state); 
	void RevertState(); 
	void Initialize(); 
        void Update();
        void Draw(); 
	void CleanUp();
};