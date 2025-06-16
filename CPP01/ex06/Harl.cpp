

#include "Harl.hpp"

Harl::Harl(){
};

Harl::~Harl(){
};

void Harl::debug (void){
    std::cout << "[ DEBUG level ] \n" << "toaster is to low " << std::endl;
};

void Harl::info (void){
    std::cout << "[ INFO level ] \n" << "bread needs at least level 3 " << std::endl;
};

void Harl::warning (void){
    std::cout << "[ WARNING level ] \n" << "I want my bread toasted, not warm! " << std::endl;
};

void Harl::error (void) {
    std::cout << "[ ERROR level ] \n" << "Don't you see it? It's burned! " << std::endl;
};


void Harl::complain (std::string level){
    void (Harl::*level_up_complaints[4])() = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    const char*complain_str[4] ={
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };

    for(int i = 0; i < 4 ; i++)
    {
        if(complain_str[i] == level)
        {
            switch(i)
            {
                case 0: (this->*level_up_complaints[0])();
                /* fall through */
                case 1: (this->*level_up_complaints[1])();
                /* fall through */
                case 2: (this->*level_up_complaints[2])();
                /* fall through */
                case 3: (this->*level_up_complaints[3])();break;
            }
            return;
        }
    };

}

// actually tell to compilor to supress the waring 
// /* fall through */
