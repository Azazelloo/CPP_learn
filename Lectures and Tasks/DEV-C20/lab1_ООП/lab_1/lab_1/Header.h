#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "myRect.h"
#include "myString.h"
#include <iostream>
#include <string>
#include "myString.h"
#include "Bochka.h"


#define stop __asm nop
using namespace std;


Rect BoundingRect(Rect obj1, Rect obj2);
Rect BoundingRect2(const Rect& obj1,const Rect& obj2);