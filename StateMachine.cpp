#include "StateMachine.h"
#include "MenuState.h"
#include "PlayState.h"

StateMachine::StateMachine()
{
    
}

State* StateMachine::CreateState(StateEnum state)
{
    State* newState = 0;
    switch (state)
    {
        case MENU: newState = new MenuState(); break;
		case PLAY: newState = new PlayState();break;
        case CREDITS: break;
        case CUTSCENE: break;
    }
    
	if (newState != 0)
	{
		newState->Add();
	}
    return newState;
}


void StateMachine::SwitchState(StateEnum state)
{
    if (currentState != 0)
    {
		currentState->CleanUp();
		currentState->Drop();
    }
    
    currentState = CreateState(state);
}

void StateMachine::SuspendSwitchState(StateEnum state)
{
    if (currentState != 0)
    {
        pausedState = currentState;
    }
    currentState = CreateState(state);

}

void StateMachine::RevertState()
{
    if (pausedState != 0)
    {
		currentState->CleanUp();
		currentState->Drop();
        currentState = pausedState;
        pausedState = 0;
    }
}

void StateMachine::Initialize()
{
    currentState = 0;
    pausedState = 0;
    SwitchState(MENU);
}

void StateMachine::Update()
{
    if (currentState != 0)
    {
        currentState->Update();
    }
}

void StateMachine::Draw()
{
     if (currentState != 0)
    {
        currentState->Draw();
    }   
}

void StateMachine::CleanUp()
{
    if (currentState != 0)
    {
        currentState->CleanUp();
		currentState->Drop();
    }
    
    if (pausedState != 0)
    {
        pausedState->CleanUp();
		pausedState->Drop();
    }
}