#pragma once

#include <iostream>
#include "all.h"

class Dog : public Animal {
public:
	void bark(void);
private:
	int speed;
};
