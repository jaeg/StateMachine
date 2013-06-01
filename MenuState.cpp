#include "MenuState.h"

#include <iostream>

MenuState::MenuState(void)
{
}


MenuState::~MenuState(void)
{
	std::cout<<"Destroyed\n";
}

void MenuState::CleanUp()
{
	std::cout<<"Menu state cleaned up\n";
}

void MenuState::Draw()
{
	std::cout<<"Menu state drawn\n";
}

void MenuState::Init()
{
	std::cout<<"Menu state initialized\n";
}

void MenuState::Update()
{
	std::cout<<"Menu state updated\n";
}