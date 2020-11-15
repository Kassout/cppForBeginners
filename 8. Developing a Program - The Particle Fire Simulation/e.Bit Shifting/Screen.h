
#ifndef SCREEN_H_
#define SCREEN_H_

#include <SDL.h>

namespace caveofprogramming {

	class Screen {
	private:
		SDL_Window* m_window;
		SDL_Renderer* m_renderer;
		SDL_Texture* m_texture;
		Uint32* m_buffer;

	public:
		const static int SCREEN_WIDTH = 800;
		const static int SCREEN_HEIGHT = 600;

		Screen();
		bool init();
		bool processEvents();
		void close();
	};

} /* namespace caveofprogramming */

#endif /* SCREEN_H_ */

