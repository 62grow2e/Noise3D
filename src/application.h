#pragma once

#include "ofMain.h"
//#include "anchor.h"
#include "thread_data.h"
#include "base_layer.h"
#include "gui_layer.h"
#include "threads_layer.h"

#include "scene.h"

class Application : public ofBaseApp {

 public:
  void setup();
  void update();
  void draw();

  void keyPressed(int key);
  void keyReleased(int key);
  void mouseMoved(int x, int y );
  void mouseDragged(int x, int y, int button);
  void mousePressed(int x, int y, int button);
  void mouseReleased(int x, int y, int button);
  void mouseScrolled(int x, int y, int scrollX, int scrollY);
  void mouseEntered(int x, int y);
  void mouseExited(int x, int y);
  void windowResized(int w, int h);
  void dragEvent(ofDragInfo dragInfo);
  void gotMessage(ofMessage msg);
 
 private:
  unique_ptr<Scene> scene_;
  
  
};
