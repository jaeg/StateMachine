#include "PlayState.h"

#include <iostream>
PlayState::PlayState(void)
{
}


PlayState::~PlayState(void)
{

}

void PlayState::CleanUp()
{
	std::cout<<"Play state cleaned up\n";
}

void PlayState::Draw()
{
	std::cout<<"Play state draw\n";
}

void PlayState::Init()
{
	std::cout<<"Play state initialized\n";
}

void PlayState::Update()
{
	std::cout<<"Play state updated\n";
}