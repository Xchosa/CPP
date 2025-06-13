
#include "Zombie.hpp"





int main()
{
    std::string UserInput;
    std::cout << "Enter Zombie name: ";
    std::getline(std::cin, UserInput);

    std::cout << "\n--- Creating heap zombie ---\n";

    Zombie *HeapZombie = newZombie(UserInput);
    std::cout << UserInput << ": " ;
    HeapZombie->announce();

    std::cout << "\n--- Creating stack zombie ---\n";
    randomChump(UserInput);

    delete (HeapZombie);

    return(0);
}