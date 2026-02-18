#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
    /* data */
    std::string name;
public:
   Zombie();
   ~Zombie();
   void announce(void);
   void setName(std::string);
};

Zombie *zombieHorde(int n, std::string name);

#endif