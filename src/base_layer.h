//
//  base_layer.h
//  Noise3D
//
//  Created by Yota Odaka on 6/3/16.
//
//

#pragma once

#include "ofMain.h"

class BaseLayer {
public:
  // Constructor and destructor
  BaseLayer() {};
  virtual ~BaseLayer() = default;
  
  // Disallow copy, assign and move
  BaseLayer(const BaseLayer&) {};
  BaseLayer& operator=(const BaseLayer&) {};
  
  // Accessors
  
  // Framework methods
  virtual void update() = 0;
  virtual void draw() = 0;
  
  // Status
//  virtual bool shouldDraw();
  
private:
};