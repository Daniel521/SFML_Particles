#ifndef star_h
#define star_h

#include <SFML/Graphics.hpp>

class Star
{
public:

private:
	sf::CircleShape shape;
	float speed;
	float angle;

public:
	Star();
	~Star();

	void init();
	void update();

private:
	//void close();

};

#endif /* star_h */
