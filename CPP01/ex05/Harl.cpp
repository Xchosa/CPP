

#include "Harl.hpp"

#include <map>


Harl::Harl(){
}

Harl::~Harl(){
};



void Harl::debug (void){
    std::cout << "DEBUG level: " << "toaster is to low " << std::endl;
};

void Harl::info (void){
    std::cout << "INFO level: " << "bread needs at least level 3 " << std::endl;
};

void Harl::warning (void){
    std::cout << "WARNING level: " << "I want my bread toasted, not warm! " << std::endl;
};

void Harl::error (void) {
    std::cout << "ERROR level: " << "Don't you see it? It's burned! " << std::endl;
};

// pointers to member functions
void Harl::complain( std::string level )
{
    void (Harl::*complain_level[4])()= {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    
    const char *Complain_string[4] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };
    
    for(int i = 0; i < 4; i++)
    {
        if(level == Complain_string[i])
        {
            (this->*complain_level[i])();
            return;
        }
    }
}
