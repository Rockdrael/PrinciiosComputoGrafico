#pragma once
#include "ofGraphics.h"									 
#include "PutPixel.h"	
using namespace std;

class Circle {
public:
	PutPixel pixelCirculo;

	void dibujaCirculo(int xCentral, int yCentral, int R, const ofColor & color);
};
