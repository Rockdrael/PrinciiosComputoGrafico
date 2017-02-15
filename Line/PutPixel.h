#pragma once
#include "ofMain.h"

class PutPixel
{
public:
	void putPixel(const int& x, const int& y, const ofColor& color);
	void clear(const ofColor& color);


	ofImage _img;
	void FASTputPixel(const int & x, const int & y, const ofColor & color);



};
