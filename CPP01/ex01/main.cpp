
#include "Zombie.hpp"





int main()
{
    std::string UserInput;
    int UserInput_nbr;
    std::cout << "Enter Zombie Number: ";
    std::cin >> UserInput_nbr;



    std::cout << "\n--- Creating heap zombie ---\n";

    // Zombie *HeapZombie = newZombie(UserInput);
    // std::cout << UserInput << ": " ;
    // HeapZombie->announce();

    // std::cout << "\n--- Creating stack zombie ---\n";
    // randomChump(UserInput);

   
    std::cout << "Enter Zombie name: ";
    std::getline(std::cin, UserInput);
    Zombie* ZombieRudel = zombieHorde(UserInput_nbr, UserInput);
    for( int i = 1; i <= UserInput_nbr; i++)
        ZombieRudel[i].announce();

    // delete entire array;
    delete [] ZombieRudel;
    return(0);
}