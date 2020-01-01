#include "WeaponBuilder.h"


// setters
WeaponBuilder* WeaponBuilder::setType(std::string type) {
    this->type = type;
    return this;
}

WeaponBuilder* WeaponBuilder::setDestination(std::string destination) {
    this->destination = destination;
    return this;
}

WeaponBuilder* WeaponBuilder::setMagazine(int magazine) {
    this->magazine = magazine;
    return this;
}

WeaponBuilder* WeaponBuilder::setPrice(float price) {
    this->price = price;
    return this;
}

// getters
std::string WeaponBuilder::getType() {
    return this->type;
}

std::string WeaponBuilder::getDestination() {
    return this->destination;
}

int WeaponBuilder::getMagazine() {
    return this->magazine;
}

float WeaponBuilder::getPrice() {
    return this->price;
}

Weapon* WeaponBuilder::build() {
    return new Weapon(this);  // look at the definiton of Weapon(WeaponBuilder* builder) method in Weapon.cpp
    /*
        keyword "new" calls class's constructor
        and returns a pointer to the created object
    */
}