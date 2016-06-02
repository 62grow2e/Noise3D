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
  ThreadData();
  ~ThreadData() {}
  
  // Copy and assign
  ThreadData(const ThreadData& other);
  ThreadData(const ThreadData&& other);
  ThreadData& operator=(const ThreadData& other);
  ThreadData& operator=(const ThreadData&& other);
  
  // Accessors
  const AnchorGroup& getAnchorGroup() const { return anchors_; }
  
 private:
  AnchorGroup anchors_;
  
};
