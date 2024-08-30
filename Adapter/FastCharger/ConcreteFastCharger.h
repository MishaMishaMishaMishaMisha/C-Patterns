#pragma once
#include "TypeCCharger.h"

class ConcreteTypeCCharger : public TypeCCharger
{
private:
    float power;

public:
    ConcreteTypeCCharger(float p) : power(p) {}
    float getPower() override { return power; }
};