
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
    static int destroyed_zombies;

public:
    Zombie(std::string name);
    Zombie();  
    ~Zombie();
    void announce( void );
    void setName(std::string name);
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );
Zombie* zombieHorde( int N, std::string name );




#endif