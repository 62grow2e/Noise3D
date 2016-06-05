#include "application.h"

void Application::setup(){
  scene_ = make_unique<Scene>();
}

void Application::update(){
  if (scene_ != nullptr) {
    scene_->update();
  }
}

void Application::draw(){
  if (scene_ != nullptr) {
    scene_->draw();
  }
}

void Application::keyPressed(int key){
  if (scene_ != nullptr) {
    scene_->keyPressed(key);
  }
}

void Application::keyReleased(int key){
  if (scene_ != nullptr) {
    scene_->keyReleased(key);
  }
}

void Application::mouseMoved(int x, int y ){
  if (scene_ != nullptr) {
    scene_->mouseMoved(x, y);
  }
}

void Application::mouseDragged(int x, int y, int button){
  if (scene_ != nullptr) {
    scene_->mouseDragged(x, y, button);
  }
}

void Application::mousePressed(int x, int y, int button){
  if (scene_ != nullptr) {
    scene_->mousePressed(x, y, button);
  }
}

void Application::mouseReleased(int x, int y, int button){
  if (scene_ != nullptr) {
    scene_->mouseReleased(x, y, button);
  }
}

void Application::mouseScrolled(int x, int y, int scrollX, int scrollY) {
  if (scene_ != nullptr) {
    scene_->mouseScrolled(x, y, scrollX, scrollY);
  }
}

void Application::mouseEntered(int x, int y){
  if (scene_ != nullptr) {
    scene_->mouseEntered(x, y);
  }
}

void Application::mouseExited(int x, int y){
  if (scene_ != nullptr) {
    scene_->mouseExited(x, y);
  }
}

void Application::windowResized(int w, int h){
  if (scene_ != nullptr) {
    scene_->windowResized(w, h);
  }
}

void Application::gotMessage(ofMessage msg){
  if (scene_ != nullptr) {
    scene_->gotMessage(msg);
  }
}

void Application::dragEvent(ofDragInfo dragInfo){ 
  if (scene_ != nullptr) {
    scene_->dragEvent(dragInfo);
  }
}
