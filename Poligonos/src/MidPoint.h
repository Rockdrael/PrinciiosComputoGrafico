#pragma once
#include "ofGraphics.h"									 
#include "PutPixel.h"	


using namespace std;

class MidPoint {
public:

	PutPixel pixel; /**/

	int deltaX, deltaY, y, x;/**/
	int dOld;/**/
	void dibujaLinea(int xInicial, int yInicial, int xFinal, int yFinal);/**/

	void NewClear();

};
