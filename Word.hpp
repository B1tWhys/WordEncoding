#include <vector>
#include <string>

#ifndef Word_H
#define Word_H

class Word {
    public:
    Word(std::string csv);

    std::string word;
    std::vector<std::string> definition;

    void printDef();

    private:
}; 

#endif
