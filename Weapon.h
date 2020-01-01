#pragma once
#include <string>
#include <iostream>
#include "WeaponBuilder.h"


class WeaponBuilder;  /* 

We declare it here to avoid compilation problems.
Just because WeaponBuilder.h and Weapon.h
files include each other
*/


class Weapon {
private:
    std::string type;
    std::string destination;  // przeznaczenie
    int magazine;
    float price;  // cena
public:
    Weapon(WeaponBuilder* builder);
    Weapon();
    void printInfo();
};