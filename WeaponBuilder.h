#pragma once
#include "Weapon.h"
#include <string>


class Weapon;  /* 

We declare it here to avoid compilation problems.
Just because WeaponBuilder.h and Weapon.h
files include each other
*/

class WeaponBuilder {
private:
    std::string type;
    std::string destination;  // przeznaczenie
    int magazine;
    float price;  // cena

public:
    // after every setter-method, the pointer to the builder-object is returned

    // so that we can do
    // Weapon* myWeapon = (new WeaponBuilder())->setType("smth here")->setDestination("smth here") ... ->build();

    // setter-methods set the value for variables type, destination, magazine and price
    WeaponBuilder* setType(std::string type);
    WeaponBuilder* setDestination(std::string destination);
    WeaponBuilder* setMagazine(int magazine);
    WeaponBuilder* setPrice(float price);
    
    std::string getType();
    std::string getDestination();
    int getMagazine();
    float getPrice();

    Weapon* build();
};