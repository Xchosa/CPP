
#include <Zombie.hpp>>



Zombie* newZombie( std::string name ){
    Zombie* Zombie_new = new Zombie(name); // "new" creates object on heap
    return Zombie_new; // retruns pointer to created Zombie 
    // instance lives beyond the fuction
}


void randomChump( std::string name ){
    Zombie zombie(name);
    zombie.announce();

    // function ends Instance gets gestroyed 
}