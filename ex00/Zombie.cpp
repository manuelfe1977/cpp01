#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    std::cout << "zombie " << name << " is created" << std::endl;
    this->name = name;
}

void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}


Zombie:: ~Zombie()
{
    std::cout << this->name << " is destroyed" << std::endl;
}