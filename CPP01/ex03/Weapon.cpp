


#include "Weapon.hpp"

//Assigns parameter to member variable
Weapon::Weapon(std::string type){
    this->type = type;
}

Weapon::~Weapon(){
}
// this als pointer zum current object

// same Initialize member in initialization list
// Weapon::Weapon(std::string type) : type(type) {
// }


const std::string& Weapon::getType() const {
    return this->type;
}

void Weapon::setType(std::string type){
    this->type = type;
}




































