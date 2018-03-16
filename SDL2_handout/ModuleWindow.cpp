#include "Globals.h"
#include "Application.h"
#include "ModuleWindow.h"


// TODO 2: Init the library and check for possible error
// using SDL_GetError()

// TODO 3: pick the width and height and experiment with flags: borderless / fullscreen / resizable,
// then create the window and check for errors

// TODO 4: Finally create a screen surface and keep it as a public variable

// TODO 5: Fill with code CleanUp() method :)

bool ModuleWindow::Init()
{

	int ok = SDL_Init(SDL_INIT_VIDEO);
	if (ok < 0)
	{
		LOG(SDL_GetError());
		return false;
	}

	win = SDL_CreateWindow(
		WIN_TITLE,                  // window title
		SDL_WINDOWPOS_UNDEFINED,           // initial x position
		SDL_WINDOWPOS_UNDEFINED,           // initial y position
		640,                               // width, in pixels
		480,                               // height, in pixels
		SDL_WINDOW_OPENGL                  // flags - see below
	);



}

bool ModuleWindow::CleanUp()
{
	SDL_DestroyWindow(win);
	SDL_Quit;
	return true;
}