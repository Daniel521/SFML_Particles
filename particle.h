#ifndef particle_h
#define particle_h

#include <SFML/Graphics.hpp>

class Particle 
{
public:
	float speed;
	float angle;
	sf::CircleShape shape;

public:

	Particle();
	~Particle();

	void move();
	

};

#endif /* particle_h */
