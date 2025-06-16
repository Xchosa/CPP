#include "Harl.hpp"



int main(int argc, char **argv)
{
    if(argc == 2)
    {
        Harl harlharl;
        harlharl.complain(argv[1]);
        return 0;
    }
    else
        std::cout << "only give one paramter" << std::endl;
}