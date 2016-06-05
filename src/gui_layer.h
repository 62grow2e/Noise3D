//
//  gui_layer.h
//  Noise3D
//
//  Created by Yota Odaka on 6/3/16.
//
//

#pragma once

#include "ofMain.h"
#include "base_layer.h"

class GUILayer : public BaseLayer {
 public:
  // Destructor
  ~GUILayer() = default;
  
  // Accessors
  
  // Framework methods
  void update() override;
  void draw() override;
  
 private:
};
