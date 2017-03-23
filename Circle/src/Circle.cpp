#include "Circle.h"

void Circle::dibujaCirculo(int xCentral, int yCentral, int R, const ofColor & color)
{
	int x = 0;
	int y = R;
	float d = 5 / 4 - R;

	
	pixelCirculo.putpixel(x + xCentral, y + yCentral, color);
	
	if (d < 0)
	{
		++x;
		d = d + 2 * x + 3;
	}
	else
	{
		++x;
		--y;
		d = d + 2 * x - 2 * y + 5;
		//	}

	}

}
