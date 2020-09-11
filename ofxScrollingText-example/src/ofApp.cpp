#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    scroll.setup("iAWriterDuospace-Bold.ttf", 100);
    scroll.showText("spywarez spywarez spywarez spywarez spywarez spywarez spywarez spywarez spywarez spywarez spywarez spywarez 4 spywarez 3 spywarez 2 spywarez 1 spywarez 0");
    scroll.setSpeed(10);
}

//--------------------------------------------------------------
void ofApp::update(){
    scroll.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    scroll.draw();
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
