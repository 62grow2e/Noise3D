//
//  anchor.cc
//  Noise3D
//
//  Created by Yota Odaka on 5/31/16.
//
//

#include "anchor.h"

Anchor::Anchor(ofPoint& pos) : radius_(10.0) {
  pos_ = pos;
  color_ = ofColor(20, 20, 20, 200);
}

Anchor::~Anchor() {

}


Anchor::Anchor(const Anchor& other)
  : pos_(other.getPos()),
    color_(other.getColor()),
    radius_(other.getRadius()) {
  
}

Anchor& Anchor::operator=(const Anchor& other) {
  if (this == &other) { return *this; }
  this->pos_ = other.getPos();
  this->radius_ = other.getRadius();
  this->color_ = other.getColor();
  return *this;
}

