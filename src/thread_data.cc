//
//  thread_data.cc
//  Noise3D
//
//  Created by Yota Odaka on 5/31/16.
//
//

#include "thread_data.h"

ThreadData::ThreadData(const ofPoint& begin) : anchor_size_(200) {
  Anchor start(*new ofPoint(begin.x, begin.y, begin.z));
  anchors_.emplace_back(start);
  for (size_t i = 0; i < anchor_size_; i++) {
    anchors_.emplace_back(anchors_.back().generateNext());
  }
}

//
//ThreadData::ThreadData(const ThreadData& other) {
//  
//}
//
//ThreadData& ThreadData::operator=(const ThreadData& other) {
//  
//}