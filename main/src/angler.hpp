#pragma once
#include "main.h"
#include "config.hpp"
#include "vision.hpp"
#include "fBar.hpp"
#include "drive.hpp"
#include "controller.hpp"
#include <iostream>
#include <cmath>
#include <memory>
#include <vector>
using namespace std;
using namespace pros;
constexpr double ANGLER_TOP = 2400;
constexpr double ANGLER_MID = 530;
constexpr double ANGLER_FIRST = 1600;
enum class anglerStates {
  Idle,
  Mid,
  CubeOut,
  Top
};
void startDropOff();
void stopDropOff();
void dropOff(void *param);
void setAnglerState(anglerStates state);
void anglerCal();
void anglerHandle();
extern anglerStates anglerState ;
extern anglerStates anglerStateLast;
extern int anglerStateChangeTime;
