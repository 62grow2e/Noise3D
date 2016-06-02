//
//  anchor.cc
//  Noise3D
//
//  Created by Yota Odaka on 5/31/16.
//
//

#include "anchor.h"

Anchor::Anchor(ofPoint& pos) {
  pos_ = pos;
}

Anchor::~Anchor() {

}


Anchor::Anchor(const Anchor& other)
  : pos_(other.getPos()), radius_(other.getRadius()) {
  
}

Anchor& Anchor::operator=(const Anchor& other) {
  if (this == &other) { return *this; }
  this->pos_ = other.getPos();
  this->radius_ = other.getRadius();
  return *this;
}

