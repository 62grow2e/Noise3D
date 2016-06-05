//
//  status.h
//  Noise3D
//
//  Created by Yota Odaka on 6/5/16.
//
//

#pragma once
#include <ofMain.h>

class Status {
 public:
  // Constructor and destructor
  Status();
  ~Status() = default;
  
  // Disallow copy and assign
  Status(const Status&) = delete;
  Status& operator=(const Status&) = delete;
  
  // Accessors
  const size_t& getTime() const { return time_; }
  const size_t& getLifeSpan() const { return life_span_; }
  void setLifeSpan(const size_t& life_span) { life_span_ = life_span; }
  const size_t& getInterval() const { return interval_; }
  void setInterval(const size_t& interval) { interval_ = interval; }
  const float& getSpeed() const { return speed_; }
  void setSpeed(const float& speed) { speed_ = speed; }
  const float& getHead() const { return head_; }
  const float& getEnd() const { return end_; }
  
  // Management
  void update();
  
  void initTime();
  void enableAnimation();
  void disableAnimation();
  void toggleAnimation();
  
  
 private:
  // Parameters
  size_t time_;
  size_t life_span_;
  size_t interval_;
  float speed_;
  float head_, end_;
  bool animation_;
  bool growing_, shrinking_;
};

inline void Status::initTime() {
  time_ = 0.0;
  head_ = 0.0;
  end_ = 0.0;
}

inline void Status::enableAnimation() {
  animation_ = true;
}

inline void Status::disableAnimation() {
  animation_ = false;
}

inline void Status::toggleAnimation() {
  animation_ ^= true;
}