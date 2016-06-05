//
//  thread_data.h
//  Noise3D
//
//  Created by Yota Odaka on 5/31/16.
//
//


#pragma once

#include "ofMain.h"
#include "anchor.h"

class ThreadData {
 public:
  using AnchorGroup = vector<Anchor>;
  // Constructor and destructor
  ThreadData(const ofPoint& begin);
  ~ThreadData() {}
  
  // Copy and assign
  ThreadData(const ThreadData& other) = default;
  ThreadData& operator=(const ThreadData& other) = default;
  
  // Accessors
  const AnchorGroup& getAnchorGroup() const { return anchors_; }
  
 private:
  // Properties
  size_t anchor_size_;
  
  // Data
  AnchorGroup anchors_;
  
};
