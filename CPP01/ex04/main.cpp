#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

#include <cctype>
#include <limits>



#include "file_object.hpp"



int main(int argc, char **argv)
{
	std::string UserFile;
    std::string UserString1;
    std::string UserString2;



    std::cout << "Enter the filename: ";
    std::getline(std::cin, UserFile);

    std::cout << "Enter String Nr.1: ";
    std::getline(std::cin, UserString1);

    std::cout << "Enter String Nr.2: ";
    std::getline(std::cin, UserString2);

    //UserFile = "example_1";
    //UserString1 = "hello";
    //UserString2 = "world";
    
    file_object file;
    std::ifstream filex(UserFile.c_str());
   
    file_object file;
    if (file.saveFileContent(UserFile) == true)
    {
        file.mainpulateFileContent(UserFile);
    }
    else
    {
        std::cout << "Error: File '" << UserFile 
        << "' does not exist or cannot be opened." 
        << std::endl;
    }
    return 0;
}