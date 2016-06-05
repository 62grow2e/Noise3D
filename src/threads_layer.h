//
//  threads_layer.h
//  Noise3D
//
//  Created by Yota Odaka on 6/3/16.
//
//

#pragma once

#include "base_layer.h"
#include "thread_data.h"
#include "status.h"

class ThreadsLayer : public BaseLayer {
 public:
  enum ThreadMode {
    LINES,
    DOTS
  };
  // Constructor and destructor
  ThreadsLayer();
  ~ThreadsLayer() = default;
  
  // Accessors
  const size_t& getThreadSize() const { return thread_size_; }
  void setZoomScale(float scale) { zoom_scale_ = scale; }
  const float& getZoomScale() const { return zoom_scale_; }
  
  // Framework methods
  void update() override;
  void draw() override;
  
  void updateFromStatus(const Status& status);
  
 private:
  
  // Properties
  size_t thread_size_;
  float zoom_scale_;
  size_t head_index_, end_index_;
  // Models
  vector<ThreadData> threads_;
  ofEasyCam camera_;
};