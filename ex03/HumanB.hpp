#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
    /* data */
    std::string name;
    Weapon* weapon;
public:
    HumanB();
    HumanB(std::string name);
    ~HumanB();
    std::string getName();
    void setWeapon(Weapon& weapon);
    void attacks();
};

#endif
