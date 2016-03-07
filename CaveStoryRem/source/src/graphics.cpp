#include <SDL2/SDL.h>

#include <graphics.h>

/* Graphics Class
 * Holds all information dealing with graphics from the game
 */

Graphics::Graphics() {
	SDL_CreateWindowAndRenderer(640, 480, 0, &this->_window, &this->_renderer);
	SDL_SetWindowTitle(this->_window, "Cavestory");
}

Graphics::~Graphics() {
	SDL_DestroyWindow(this->_window);
}
