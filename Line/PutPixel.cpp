#include "PutPixel.h"

void PutPixel::putPixel(const int & x, const int & y, const ofColor & color)
{
	_img.setColor(x, y, color);
	_img.update();
	_img.draw(ofPoint(0, 0, 0));
}

void PutPixel::clear(const ofColor & color)
{
	for (int y = 0; y < 768; ++y)
		for (int x = 0; x < 1024; ++x)
			FASTputPixel(x, y, color);

	_img.update();
	_img.draw(ofPoint(0, 0, 0));
}

void PutPixel::FASTputPixel(const int & x, const int & y, const ofColor & color)
{
	_img.setColor(x, y, color);
}
