
#include "Zombie.hpp"





int main()
{
    std::string UserInput;
    Zombie* zombie;

    std::cout << "Enter Zombie name: ";
    std::getline(std::cin, UserInput);

    std::cout << "\n--- Creating heap zombie ---\n";
    zombie = newZombie(UserInput);
    zombie->announce();

    delete zombie; 

    std::cout << "\n--- Creating stack zombie ---\n";
    randomChump(UserInput);
    // destructor gets called automatically

    return(0);

}