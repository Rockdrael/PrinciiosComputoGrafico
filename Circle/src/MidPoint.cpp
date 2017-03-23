#include "MidPoint.h"

void MidPoint::NewClear()
{

	pixel._img.allocate(1024, 768, ofImageType::OF_IMAGE_COLOR_ALPHA);

	pixel.clear(ofColor::black);
}



void MidPoint::dibujaLinea(int xInicial, int yInicial, int xFinal, int yFinal) {


	deltaX = xFinal - xInicial;
	deltaY = yFinal - yInicial;

	dOld = 0;

	y = yInicial;
	x = xInicial;



	if (yFinal >= yInicial && xFinal >= xInicial)
	{

		if (deltaX> deltaY)
		{
			for (int x = xInicial; x <= xFinal; x++)
			{
				pixel.putpixel(x, y, ofColor::red);

				if (dOld > 0) {
					dOld = dOld + deltaY - deltaX;
					y++;
				}
				else (dOld = dOld + deltaY);
			}
		}

		else if (deltaX <= deltaY)
		{
			for (int y = yInicial; y <= yFinal; y++)
			{
				pixel.putpixel(x, y, ofColor::red);

				if (dOld > 0)
				{
					dOld = dOld + deltaX - deltaY;
					x++;
				}
				else dOld = dOld + deltaX;
			}
		}
	}
	else if (yFinal >= yInicial && xFinal < xInicial)
	{

		if (deltaX > deltaY *-1)
		{
			for (int y = yInicial; y <= yFinal; y++)
			{
				pixel.putpixel(x, y, ofColor::red);

				if (dOld < 0)
				{
					dOld = dOld + deltaX - deltaY * -1;
					x--;
				}
				else dOld = dOld + deltaX;
			}
		}
		else if (deltaX <= deltaY *-1)
		{

			for (int x = xInicial; x >= xFinal; x--)
			{
				pixel.putpixel(x, y, ofColor::red);
			
				if (dOld < 0)

				{
					dOld = dOld - deltaY - deltaX;
					y++;
				}
				else (dOld = dOld - deltaY);
			}
		}
	}
	else if (yFinal < yInicial && xFinal <= xInicial)
	{

		if (deltaX < deltaY) {
			for (int x = xInicial; x >= xFinal; x--)
			{
				pixel.putpixel(x, y, ofColor::red);

				if (dOld < 0)
				{
					dOld = dOld + deltaY - deltaX;
					y--;
				}
				else dOld = dOld + deltaY;
			}
		}

		else if (deltaX >= deltaY)
		{
			for (int y = yInicial; y >= yFinal; y--)
			{
				pixel.putpixel(x, y, ofColor::red);

				if (dOld < 0)
				{
					dOld = dOld + deltaX - deltaY;
					x--;
				}
				else (dOld = dOld + deltaX);
			}
		}
	}
	else if (yFinal < yInicial && xFinal > xInicial)
	{

		if (deltaX *-1 > deltaY)
		{
			for (int y = yInicial; y >= yFinal; y--)
			{
				pixel.putpixel(x, y, ofColor::red);

				if (dOld > 0)
				{
					dOld = dOld + deltaX - deltaY*-1;
					x++;
				}
				else dOld = dOld + deltaX;
			}
		}

		else if (deltaX *-1 <= deltaY)
		{
			for (int x = xInicial; x <= xFinal; x++)
			{
				pixel.putpixel(x, y, ofColor::red);

				if (dOld > 0)
				{
					dOld = dOld - deltaY - deltaX;
					y--;
				}
				else (dOld = dOld - deltaY);
			}
		}
	}
}
