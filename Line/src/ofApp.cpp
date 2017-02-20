#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	int x = ofGetScreenWidth();
	int y = ofGetScreenHeight();

	_img.allocate(x, y, ofImageType::OF_IMAGE_COLOR);
	clear(ofColor::black);


}

//--------------------------------------------------------------
void ofApp::update() {

}

//--------------------------------------------------------------
void ofApp::draw() {
	ofColor red(255, 0, 0);

	for (int x = 0; x < 1024; ++x)
		putPixel(x, 768 / 2, red);


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
void ofApp::putPixel(const int & x, const int & y, const ofColor & color) {

	_img.setColor(x, y, color);
	_img.update();
	_img.draw(ofPoint(0, 0, 0));

}
//--------------------------------------------------------------
void ofApp::FASTputPixel( const int & x, const int & y, const ofColor & color) {
	

	_img.setColor(x, y, color);

}
//---------------------------------------------------------------
void ofApp::clear(const ofColor& color) {

	for (int y = 0; y < 768; ++y)
		for (int x = 0; x < 1024; ++x)
			FASTputPixel(x, y, color);

	_img.update();
	_img.draw(ofPoint(0, 0, 0));

}