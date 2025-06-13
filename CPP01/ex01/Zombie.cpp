
#include "Zombie.hpp"

// Constructor implementaion
// mit Zombie name auf das Objekt zugreifbar 
Zombie::Zombie(std::string name){
    this->name = name;
}

Zombie::Zombie()
{
    this->name = "";
}

Zombie* zombieHorde( int N, std::string name ){
    Zombie* ZombieRudel = new Zombie[N]; 

    for(int i = 1; i <= N; i++)
    {
        ZombieRudel[i] = Zombie(name);

        std::cout << i << ": " << " created" << std::endl;
    }
        return(ZombieRudel);
}
