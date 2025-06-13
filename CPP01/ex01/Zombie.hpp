
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <iomanip>

#include <cctype>
#include <limits>


class Zombie
{
private:
    std::string name;

public:
    Zombie(std::string name);
    Zombie();  
    ~Zombie(){
        std::cout << this->name << ": Zombie destroyed" << std::endl;
    };
    void announce( void ){
        std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
    }
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );
Zombie* zombieHorde( int N, std::string name );




#endif