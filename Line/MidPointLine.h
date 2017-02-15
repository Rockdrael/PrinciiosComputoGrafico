#pragma once
#include "ofGraphics.h"
#include "PutPixel.h"

class MidPoint
{
public:

	int x, dx, y, dy,d;
	int dOld, dNew;
	int deltaE;
	int deltaNE;
	void dibujaLinea(int xInicial, int yInicial, int xFinal,int yFinal);
	PutPixel pixel;



};


