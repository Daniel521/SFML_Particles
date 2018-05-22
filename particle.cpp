
#include "particle.h"
#include <ctime>
#include <cstdlib>
#include <cmath>

#define PI 3.14159

Particle::Particle() : shape(2)
{
	shape.setFillColor(sf::Color(220, rand() % 56 + 200, rand() % 56 + 200));
	shape.setPosition(200,200);
	//x_vel = (rand() % 100)/10.0f - 4.5;
	//y_vel = (rand() % 100)/10.0f - 4.5;
	speed = pow((rand()% 100) /40.0f,2);
	angle = rand() % 360;
}


void Particle::move()
{
	sf::Vector2<float> pos = shape.getPosition();

	if (pos.x < 0 || pos.x > 400 || pos.y < 0 || pos.y > 400)
	{
		pos = { 200, 200 };
		angle = rand() % 360;
		speed = pow((rand() % 100) /  40.0f, 2) + 1;
	}

	pos.x += speed * cos(angle * PI / 180);
	pos.y += speed * sin(angle * PI / 180);
	//speed /= (1.00f + (rand() % 1000)/90000.0f);
	shape.setPosition(pos);
}


Particle::~Particle()
{
	// Nothing
}
