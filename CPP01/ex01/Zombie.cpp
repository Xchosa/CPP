
#include "Zombie.hpp"

int Zombie::destroyed_zombies = 0;

Zombie:: ~Zombie(){
            destroyed_zombies++;
            std::cout << destroyed_zombies << ": "
            << this->name << ": Zombie destroyed" << std::endl;
        }

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

    for(int i = 0; i < N; i++)
    {
        ZombieRudel[i].setName(name);
        std::cout << i + 1<< ": " << " created" << std::endl;
    }
        return(ZombieRudel);
}


 void Zombie::setName(std::string name){
        this->name = name;

    };
    
void Zombie::announce( void ){
        std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
    };