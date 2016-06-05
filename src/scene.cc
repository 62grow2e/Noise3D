//
//  scene.cc
//  Noise3D
//
//  Created by Yota Odaka on 6/3/16.
//
//

#include "scene.h"

Scene::Scene()
  : head_percent_(0.0),
    end_percent_(0.0),
    animation_vel_(0.03),
    life_span_(10.0),
    time_(0) {
  status_ = make_unique<Status>();
  thread_layer_ = make_unique<ThreadsLayer>();
  
}

void Scene::update() {
  status_->update();
  thread_layer_->updateFromStatus(*status_);
}

void Scene::draw() {
  ofBackground(0, 0, 0);
  thread_layer_->draw();
}

void Scene::mouseScrolled(int& x, int& y, int& scrollX, int& scrollY) {
  thread_layer_->setZoomScale(thread_layer_->getZoomScale() + scrollY);
}