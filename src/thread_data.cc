//
//  thread_data.cc
//  Noise3D
//
//  Created by Yota Odaka on 5/31/16.
//
//

#include "thread_data.h"

ThreadData::ThreadData() {
  Anchor start(*new ofPoint(10, 0, 0));
  anchors_.emplace_back(start);
}
