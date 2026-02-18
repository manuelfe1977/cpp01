#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon)
{
}

HumanA::~HumanA()
{
}

std::string HumanA::getName()
{
    return (this->name);
}

void HumanA::attacks()
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}