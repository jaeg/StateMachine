// StateMachineTester.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include "StateMachine.h"

int main()
{
	StateMachine* stateMachine = new StateMachine;
	stateMachine->Add();
	stateMachine->Initialize();

	//Need a way yet to tell when the statemachine has decided to stop.
	int option = 0;
	do
	{
		stateMachine->Update();
		stateMachine->Draw();

		std::cout<<"Do you want to switch states? 0 - No, 1 - Menu, 2 - Play, 3 - Credits,  4 - Cutcene, 5 - Quit\n";
		std::cin>>option;

		switch (option)
		{
		case 0:break;
		case 1:stateMachine->SwitchState(MENU);break;
		case 2:stateMachine->SwitchState(PLAY);break;
		case 3:stateMachine->SwitchState(CREDITS);break;
		case 4:stateMachine->SwitchState(CUTSCENE);break;
		}
	}while (option != 5);

	stateMachine->CleanUp();
	return 0;
}

