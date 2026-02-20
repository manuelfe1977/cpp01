#include "Zombie.hpp"

int main(void)
{
    std::cout << "--- Creating a Zombie heap ---" << std::endl;
    Zombie *heapZombie = newZombie("HeapZombie");
    heapZombie->announce();
    delete heapZombie;

    std::cout << std::endl << "--- Creating a Zombie stack ---" << std::endl;
    randomChump("StackZombie");

    return (0);
}
