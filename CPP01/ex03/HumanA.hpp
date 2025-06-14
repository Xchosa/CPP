
#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon& weapon_type; // stroe a reference to Weapon

    public:


    HumanA(std::string name, Weapon& weapon_type);
    ~HumanA();

    void attack();
};

#endif