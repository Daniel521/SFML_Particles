// How's life?
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <ctime>

#include "particle.h"

using namespace std;

#define particle_count 2000

int main()
{

	// Make new window
	sf::RenderWindow window(sf::VideoMode(400, 400), "Heyo");
	
	//string mus_add = "back.flac";
	//sf::Music mus;
	//mus.openFromFile(mus_add);
	//mus.play();
	srand(time(NULL));
	Particle * party = new Particle[particle_count];
	while (window.isOpen())
	{
        	sf::Event event;
        	while (window.pollEvent(event))
        	{
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
			{
				delete[] party;
				party = new Particle[particle_count];
			}
            		if (event.type == sf::Event::Closed)
	                	window.close();
		}
	        window.clear();
		for (int i = 0; i < particle_count; i++)
		{
			party[i].move();
			window.draw(party[i].shape);
		}
        	window.display();
	}
	//mus.stop();
	
	return 0;
}
