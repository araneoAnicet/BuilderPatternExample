#include "Weapon.h"
#include "WeaponBuilder.h"
#include <iostream>


int main() {
    Weapon* firstGun = (new WeaponBuilder())
        ->setType("mp16")
        ->setMagazine(15)
        ->setDestination("Military")
        ->setPrice(9000)->build();
    
    Weapon* secondGun = new Weapon();

    std::cout << std::endl;
    std::cout << "\tFirst gun:" << std::endl;
    firstGun->printInfo();
    std::cout << "\tSecond gun:" << std::endl;
    secondGun->printInfo();
    
    delete firstGun;
    delete secondGun;
    return 0;
}