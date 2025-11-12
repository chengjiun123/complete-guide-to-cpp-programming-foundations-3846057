// Complete Guide to C++ Programming Foundations
// Challenge 01_09
// Terminal Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string name;
    std::cout << "Enter Your Name: " << std::flush;
    std::cin >> name; //input with spaces is another
    std::cout << "Your Name is " << name << "!" << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}