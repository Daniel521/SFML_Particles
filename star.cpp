#include "star.h"

#include <time.h>
#include <stdlib.h>
#include <cmath>

Star::Star()
{
	init();
}

Star::~Star()
{

}

void init()
{
	speed = rand() % 20 + 5;
	angle = ((rand() % 1000) / 360.0f);

	
}
