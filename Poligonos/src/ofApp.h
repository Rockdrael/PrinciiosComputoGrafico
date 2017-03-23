#pragma once
#include "MidPoint.h"
#include "ofMain.h"
#include "PutPixel.h"
#include <vector>


class ofApp : public ofBaseApp {

public:

	MidPoint line;/**/

	void setup();
	void update();
	void draw();

	void keyPressed(int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y);
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void mouseEntered(int x, int y);
	void mouseExited(int x, int y);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);

	ofVec2f puntoCentral;/**/
	float centroEnX, centroEnY;/**/
	void moveTo(const int x, const int y);
	void lineTo(const int x, const int y);
	void poligon(const float centroEnX, const float centroEnY, const int radius, const int sides);/**/

};
