
#include "HumanA.hpp"

// accept a reference to the weapon object
// HumanA::HumanA(std::string name, Weapon& weapon_type) {
//     this->name = name;
//     this->weapon_type = weapon_type;
// };
HumanA::HumanA(std::string name, Weapon& weapon_type) : name(name) , weapon_type(weapon_type){
};

HumanA::~HumanA(){
}


void HumanA::attack(){
    
    std::cout << name << " attacks with their "
    << this->weapon_type.getType() << std::endl;
}