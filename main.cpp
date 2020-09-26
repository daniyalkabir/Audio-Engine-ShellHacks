/**
 * \file main.cpp
 *
 * \author Daniyal Kabir Dar
 */



#define SFML_STATIC
#include <SFML/Graphics.hpp>
#pragma comment(lib, "gdi32.lib")
#pragma comment(lib, "winmm.lib")
#pragma comment(lib, "opengl32.lib")
#ifdef _DEBUG
#pragma comment(lib, "sfml-system-s-d.lib")
#pragma comment(lib, "sfml-window-s-d.lib")
#pragma comment(lib, "sfml-graphics-s-d.lib")
#pragma comment(lib, "sfml-audio-s-d.lib")
#else
#pragma comment(lib, "sfml-system-s.lib")
#pragma comment(lib, "sfml-window-s.lib")
#pragma comment(lib, "sfml-graphics-s.lib")
#pragma comment(lib, "sfml-audio-s.lib")
#pragma comment(lib, "openal32.lib")
#pragma comment(lib, "flac.lib")
#pragma comment(lib, "vorbisenc.lib")
#pragma comment(lib, "vorbisfile.lib")
#pragma comment(lib, "vorbis.lib")
#endif


#include "SFML/Graphics.hpp"
#include "SFML/Audio.hpp"



int main(int argc, char** argv) {

	sf::RenderWindow renderWindow(sf::VideoMode(640, 480), "CoronaGame");
	sf::Event event;

	sf::Music music;

	music.openFromFile("audio/frogs-io.ogg");   // name of audio file available locally
	music.setVolume(50);

	music.play();


	while (renderWindow.isOpen())
	{
		while (renderWindow.pollEvent(event))
		{
			if (event.type == sf::Event::EventType::Closed)
				renderWindow.close();
		}
		renderWindow.clear();
		renderWindow.display();

	}

}


