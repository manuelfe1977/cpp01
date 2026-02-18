#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main() 
{ 
    { 
        Weapon club = Weapon("crude spiked club"); 
        HumanA bob("Bob", club); 
        bob.attacks(); 
        club.setType("some other type of club"); 
        bob.attacks(); 
    }
    { 
        Weapon club = Weapon("crude spiked club"); 
        HumanB jim("Jim"); 
        jim.setWeapon(club); 
        jim.attacks(); club.setType("some other type of club"); 
        jim.attacks(); 
    }
    return 0; 

}