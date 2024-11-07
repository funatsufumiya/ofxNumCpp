#include "ofApp.h"

#define NUMCPP_NO_USE_BOOST 1

#include "NumCpp.hpp"

//--------------------------------------------------------------
void ofApp::setup(){
    ofLogToConsole();

    nc::NdArray<int> a = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    vector<int> a_as_vector = a.toStlVector();
    auto sum = nc::sum(a);
    float sum_as_float = sum.item();
    ofLogNotice("ofApp") << "a = " << a;
    ofLogNotice("ofApp") << "a_as_vector = " << ofToString(a_as_vector);
    ofLogNotice("ofApp") << "sum = " << sum;
    ofLogNotice("ofApp") << "sum_as_float = " << sum_as_float;

    // matrix multiplication
    nc::NdArray<int> a1 = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
    nc::NdArray<int> a2 = { { 9, 8, 7 }, { 6, 5, 4 }, { 3, 2, 1 } };
    auto dotted = nc::dot(a1, a2);
    ofLogNotice("ofApp") << "a1 = " << endl <<  a1;
    ofLogNotice("ofApp") << "a2 = " << endl <<  a2;
    ofLogNotice("ofApp") << "dot(a1, a2) = " << endl << dotted;
}

//--------------------------------------------------------------
void ofApp::update(){
}

//--------------------------------------------------------------
void ofApp::draw(){
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
