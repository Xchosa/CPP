
#include <Zombie.hpp>





int main()
{
    std::string UserInput;
    Zombie* zombie;

    std::cout << "Enter Zombie name: ";
    std::getline(std::cin, UserInput);

    zombie = newZombie(UserInput);
    zombie->announce();

    delete zombie; 

    randomChump(UserInput);
    ~Zombie();
    
    return(0);

}