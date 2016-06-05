//
//  threads_layer.cc
//  Noise3D
//
//  Created by Yota Odaka on 6/3/16.
//
//

#include "threads_layer.h"

ThreadsLayer::ThreadsLayer() : thread_size_(500), zoom_scale_(1000) {
  for (size_t i = 0; i < thread_size_; i++) {
    ofPoint start = ofPoint(ofRandom(-500, 500),
                            ofRandom(-500, 500),
                            ofRandom(-500, 500));
    threads_.emplace_back(ThreadData(start));
  }
  camera_.setDistance(zoom_scale_);
}

void ThreadsLayer::update() {
}

void ThreadsLayer::updateFromStatus(const Status& status) {
  head_index_ = size_t(status.getHead() * threads_.begin()->getAnchorGroup().size());
  end_index_ = size_t(status.getEnd() * threads_.begin()->getAnchorGroup().size());
}

void ThreadsLayer::draw() {
  camera_.begin();
  ofPushMatrix();
  ofEnableBlendMode(OF_BLENDMODE_ADD);
  for (auto thread = threads_.begin(); thread != threads_.end(); thread++) {
    auto& anchors = thread->getAnchorGroup();
    for (size_t i = end_index_; i < head_index_-1; i++) {
      if (i < 1) { continue; }
      if (i >= anchors.size()) { continue; }
      auto& first = anchors.at(i);
      auto& second = anchors.at(i+1);
      
      ofSetColor(first.getColor());
      ofDrawLine(first.getPos(), second.getPos());
    }
  }
  ofPopMatrix();
  camera_.end();
}