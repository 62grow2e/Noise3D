//
//  status.cc
//  Noise3D
//
//  Created by Yota Odaka on 6/5/16.
//
//

#include "status.h"

Status::Status()
  : time_(0), life_span_(200), interval_(300),
    speed_(0.01), head_(0.0), end_(0.0),
    animation_(true), growing_(true), shrinking_(false) {
}

void Status::update() {
  // Validation params
  interval_ = (life_span_ > interval_)? life_span_: interval_;
  
  // Updating params
  if (animation_) {
    time_++;
    // Update status
    if (time_ > interval_) {
      initTime();
      growing_ = true;
      shrinking_ = false;
      
    }
    else if (!shrinking_ && time_ >= life_span_) {
      growing_ = false;
      shrinking_ = true;
    }
    // Update length
    if (growing_) {
      head_ += speed_;
      if (head_ >= 1.0) {
        head_ = 1.0;
        growing_ = false;
      }
    }
    if (shrinking_) {
      end_ += speed_;
      if (end_ >= 1.0) {
        end_ = 1.0;
        shrinking_ = false;
      }
    }
  }
}