#include "Word.hpp"
#include <sstream>
#include <string>
#include <iostream>

Word::Word(std::string csv) {
    std::stringstream ss(csv);

    size_t i = csv.find(",");
    word = csv.substr(0, i);
    csv.erase(0, i+1); 

    while (i != std::string::npos) {
        i = csv.find(",");
        definition.push_back(csv.substr(0, i)); 
        csv.erase(0, i+1);
    } 
}

void Word::printDef() { 
    std::cout << word << ": ";
    for (auto it = definition.begin(); it != definition.end(); it++) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}
