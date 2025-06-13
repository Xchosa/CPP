
#include "Zombie.hpp"

// Constructor implementaion
// mit Zombie name auf das Objekt zugreifbar 
Zombie::Zombie(std::string name){
    this->name = name;
}

Zombie* newZombie( std::string name ){
    Zombie* newZombie = new Zombie(name);
    return (newZombie);
}


void randomChump( std::string name ){
    Zombie diffent_zombie(name);
    std::cout << name << ": ";
    diffent_zombie.announce();
};


Zombie* zombieHorde( int N, std::string name ){
    
}