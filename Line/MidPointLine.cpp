#include "MidPointLine.h"

void MidPoint::dibujaLinea(int xInicial, int yInicial, int xFinal, int yFinal)
{
	dy = yInicial - yFinal;
	dx = xInicial - xFinal;

	deltaE = 2 * dy - 2 * dx;
	deltaNE = 2 * dy;
	
	d = 2 * dy;
	x = xInicial + 1;
	y = yInicial;

	pixel.putPixel(xInicial, yFinal, ofColor::green);

	while (x < xInicial)
		if (d <= 0){
			x = x + 1;
		}else{
			d = d + deltaNE;
			y = y + 1;
		}

	pixel.putPixel(x, y,ofColor::green);

		
		
		
}

