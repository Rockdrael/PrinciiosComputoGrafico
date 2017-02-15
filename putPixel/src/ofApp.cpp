#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	_img.allocate(1024, 768,ofImageType::OF_IMAGE_COLOR);
	clear(ofColor::black);


}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	
	for (int x = 0; x, 1024;++x)
	putPixel(512, 768 / 2, ofColor::red);


}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
//--------------------------------------------------------------
void ofApp::putPixel(const int & x, const int & y, const ofColor & color){
	
	_img.setColor(x, y, color);
	_img.update();
	_img.draw(ofPoint(0, 0, 0));

}
//--------------------------------------------------------------
void ofApp::FASTputPixel(const int & x, const int & y, const ofColor & color) {
	
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