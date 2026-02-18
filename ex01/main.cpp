#include "Zombie.hpp"


int main(void)
{
    Zombie *horde;
    int i = 0;
    horde = zombieHorde(5, "zombies");

    while (i < 5)
    {
        horde[i].announce();
        std::cout << "\n";
        i++;
    }
    
    delete [] horde;
    return (0);
}