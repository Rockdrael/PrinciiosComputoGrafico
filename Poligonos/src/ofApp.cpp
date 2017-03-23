#include "ofApp.h"
#include "MidPoint.h"
#include "ofMain.h"
#include "PutPixel.h"

//--------------------------------------------------------------
void ofApp::setup() {

	line.NewClear();

	centroEnX = 1024 / 2; //ofgetwight
	centroEnY = 768 / 2; //ofgetheight


}

//--------------------------------------------------------------
void ofApp::update() {


}

//--------------------------------------------------------------
void ofApp::draw() {


	poligon(centroEnX, centroEnY, 100, 5);

}



//--------------------------------------------------------------
void ofApp::keyPressed(int key) {

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}

//--------------------------------------------------------------
void ofApp::moveTo(const int x, const int y) {
	puntoCentral.set(x, y);
}

//--------------------------------------------------------------
void ofApp::lineTo(const int x, const int y) {
	line.dibujaLinea(puntoCentral.x, puntoCentral.y, x, y);
	puntoCentral.set(x, y);

}

//--------------------------------------------------------------
void ofApp::poligon(const float cX, const float cY, const int radius, const int sides) {
	puntoCentral.set(cX, cY);
	float alfa = PI * 2 / sides;
	float angle = 360 / sides;

	moveTo(puntoCentral.x + (radius * cos(alfa + angle)), puntoCentral.y + (radius * sin(alfa + angle)));

	for (int i = 1; i <= sides + 1; i++) {
		lineTo(puntoCentral.x + (radius * cos(i*alfa + angle)), puntoCentral.y + (radius * sin(i*alfa + angle)));
	}
}