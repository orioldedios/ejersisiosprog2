#include "Globals.h"
#include "Application.h"
#include "ModuleWindow.h"
#include  "SDL/include/SDL.h"


// TODO 2: Init the library and check for possible error
// using SDL_GetError()

// TODO 3: pick the width and height and experiment with flags: borderless / fullscreen / resizable,
// then create the window and check for errors

// TODO 4: Finally create a screen surface and keep it as a public variable

// TODO 5: Fill with code CleanUp() method :)





bool ModuleWindow::Init() {
	Window = SDL_CreateWindow("Window", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, SDL_WINDOW_FULLSCREEN);
	bool return_value;
	if (Window == nullptr) {
		LOG("window init failed: %s\n", SDL_GetError());
		return_value= false;
	}
	else { 
		return_value = true;
		 }
	return return_value;
}
bool ModuleWindow::CleanUp() {
	SDL_DestroyWindow(Window);
	SDL_QUIT;
	return true;

}