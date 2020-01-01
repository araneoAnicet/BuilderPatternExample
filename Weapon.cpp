#include "Weapon.h"

// constructor without parameters
Weapon::Weapon() {
    this->type = "Selectable";
    this->destination = "Selectable";
    this->magazine = 6;
    this->price = 666;
    std::cout << "Non-parameters constructor of Weapon is called." << std::endl;
}

// constructor with parameters
Weapon::Weapon(WeaponBuilder* builder) {
    // here we take the values from the builder object
    this->type = builder->getType();  // get the "type" value from builder object
    this->destination = builder->getDestination();  // get the "destination" value from builder object
    this->magazine = builder->getMagazine();  // get the "magazine" value from builder object
    this->price = builder->getPrice();  // get the "price" value from builder object
    delete builder;  // removes builder object from dynamically allocated memory node
    std::cout << "Parameters are used in constructior of Weapon class." << std::endl;
}

void Weapon::printInfo() {
    std::cout << "Weapon type:\t" << this->type << std::endl;
    std::cout << "Weapon destination:\t" << this->destination << std::endl;
    std::cout << "Weapon magazine size:\t" << this->magazine << std::endl;
    std::cout << "Weapon price:\t" << this->price << std::endl;
}