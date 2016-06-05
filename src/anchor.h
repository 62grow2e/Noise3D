//
//  anchor.h
//  Noise3D
//
//  Created by Yota Odaka on 5/31/16.
//
//

#pragma once

#include "ofMain.h"

class Anchor {
 public:
  // Constructor and destructor
  Anchor(ofPoint& pos);
  ~Anchor();
  
  // Copy and assign
  Anchor(const Anchor& other);
  Anchor& operator=(const Anchor& other);
  
  // Accessors
  const ofPoint& getPos() const { return pos_; }
  void setPos(const ofPoint& pos) { pos_ = pos; }
  const ofColor& getColor() const { return color_; }
  void setColor(const ofColor& color) { color_ = color; }
  const float& getRadius() const { return radius_; }
  void setRadius(const float& radius) { radius_ = radius; }
  
  // Mothods
  Anchor generateNext();
  
 private:
  ofPoint pos_;
  ofColor color_;
  float radius_;
//  float theta_, phi_;
};

inline Anchor Anchor::generateNext() {
  ofPoint vel;
  float theta = ofNoise(pos_ * 0.005) * M_PI;
  float phi = ofNoise(pos_ * 0.005) * M_TWO_PI;
  vel.x = radius_ * sin(theta) * cos(phi);
  vel.y = radius_ * sin(theta) * sin(phi);
  vel.z = radius_ * cos(theta);
  ofPoint next_point(pos_ + vel);
  return Anchor(next_point);
}