//
//  scene.h
//  Noise3D
//
//  Created by Yota Odaka on 6/3/16.
//
//

#pragma once

#include "ofMain.h"

#include "threads_layer.h"
#include "gui_layer.h"
#include "status.h"

class Scene {
 public:
  // Constructor and destructor
  Scene();
  ~Scene() = default;
  
  // Disallow copy and assign
  Scene(const Scene&) = delete;
  Scene& operator=(const Scene&) = delete;
  
  // Accessors
  
  // Framework methods
  void update();
  void draw();
  void keyPressed(int& key) {};
  void keyReleased(int& key) {};
  void mouseMoved(int& x, int& y) {};
  void mouseDragged(int& x, int& y, int& button) {};
  void mousePressed(int& x, int& y, int& button) {};
  void mouseReleased(int& x, int& y, int& button) {};
  void mouseScrolled(int& x, int& y, int& scrollX, int& scrollY);
  void mouseEntered(int& x, int& y) {};
  void mouseExited(int& x, int& y) {};
  void windowResized(int& w, int& h) {};
  void dragEvent(ofDragInfo& dragInfo) {};
  void gotMessage(ofMessage& msg) {};
  
 private:
  // Status
  float head_percent_, end_percent_;
  float animation_vel_;
  float life_span_;
  float time_;
  bool animation_;
  
  
  // Models
  unique_ptr<Status> status_;
  
  // Layers
  unique_ptr<ThreadsLayer> thread_layer_;
  
};
