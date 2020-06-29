#pragma once
#ifndef _STATES_H_
#define _STATES_H_

#include <SDL.h>
#include "Engine.h"
#include "Button.h"
#include "Sprite.h"

class State // This is the abstract base class for all specific states.
{
public: // Public methods.
	virtual void Update() = 0; // Having at least one 'pure virtual' method like this, makes a class abtract.
	virtual void Render();     // Meaning we cannot create objects of the class.
	virtual void Enter() = 0;  // Virtual keyword means we can override in derived class.
	virtual void Exit() = 0;
	virtual void Resume();

protected: // Private but inherited.
	State() {}
};

// state subclasses

class TitleState : public State
{
public:
	TitleState();
	void Update();
	void Render();
	void Enter();
	void Exit();
private:
	Label* name;
	Button* m_playBtn;

};

// ===================

class GameState : public State
{
private:


public:
	GameState();

	void Update();
	void Render();
	void Enter();
	void Exit();

};


#endif