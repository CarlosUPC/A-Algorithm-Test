#ifndef __ModuleWindow_H__
#define __ModuleWindow_H__

#include "../SDL2_Handout/SDL/include/SDL.h"
//También puedes declarar la struct SDL_Window aqui. Puedes declarar variables miles de vees pero solo definir una vez. Solo cuelo como punteros
//struct SDL_WIndow;

// TODO 1: Create the declaration of ModuleWindow class

class ModuleWindow : public Module {
private:
	SDL_Window* win = nullptr;
public:
	bool Init();
	update_status PreUpdate();
	update_status Update();
	update_status PostUpdate();
	bool CleanUp();


};
#endif // __ModuleWindow_H__