#pragma once
#include "main.h"
#include "config.hpp"
#include "vision.hpp"
#include "fBar.hpp"
#include <iostream>
#include <cmath>
#include <memory>
#include <vector>
#include <fstream>
#include <stdarg.h>
#include <time.h>
#include <stdio.h>
using namespace std;
using namespace pros;

extern pros::Mutex mutex;

extern bool log_done;
void log_init();
void log(const char * format, ...);