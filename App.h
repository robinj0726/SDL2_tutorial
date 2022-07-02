#include <SDL2/SDL.h>

#ifndef __APP_H__
	#define __APP_H__

class App {
	private:
		static App Instance;

		bool Running = true;

		SDL_Window* Window = NULL;
		SDL_Renderer* Renderer = NULL;

		static const int WindowWidth = 800;
		static const int WindowHeight = 600;

	private:
		App();

		// Capture SDL Events
		void OnEvent(SDL_Event* Event);

		// Initialize our SDL game / app
		bool Init();

		// Logic loop
		void Loop();

		// Render loop (draw)
		void Render();

		// Free up resources
		void Cleanup();

	public:
		int Execute(int argc, char* argv[]);

	public:
		static App* GetInstance();

		static int GetWindowWidth();
		static int GetWindowHeight();
};

#endif