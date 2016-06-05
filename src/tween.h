//
//  tween.h
//  Noise3D
//
//  Created by Yota Odaka on 6/3/16.
//
//

#pragma once

#include "ofMain.h"
//#include <functional>

template <float (*Function)(float)>
class Tween {
 public:
  static float easeIn(float t) {
    return Function(t);
  }
  static float easeOut(float t) {
    return 1.0 - easeIn(1.0 - t);
  }
  static float easeInOut(float t) {
    return (t < 0.5)? easeIn(2.0 * t) * 0.5: 0.5 + easeOut(2.0 * t - 1.0) * 0.5;
  }
};

float square(float t) {
  return t * t;
}

float cube(float t) {
  return t * t * t;
}

float quad(float t) {
  return t * t * t * t;
}

using SquareTween = Tween<square>;
using CubeTween = Tween<cube>;
using QuadTween = Tween<quad>;
