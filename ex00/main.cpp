#include "Zombie.hpp"


int main(void)
{
    Zombie *zombie;
    Zombie stackZombie("stackZombie");

    zombie = new Zombie("zombie");
    zombie->announce();
    delete zombie;
    Zombie *zmb = stackZombie.newZombie("zmb");
    zmb->announce();
    delete zmb;
    stackZombie.randomChump("stackZombie2");

    return (0);
}