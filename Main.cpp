#include "Word.hpp"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

std::vector<Word> loadWords(std::ifstream &csvFile) {
    std::vector<Word> ret;

    std::string buf;
    while (std::getline(csvFile, buf)) {
        if (buf.length()) { 
            ret.push_back(Word(buf));
        }
    }

    return ret;
}

int main(int argc, char *argv[]) {
    std::ifstream inFile;
    if (argc > 1) {
        inFile = std::ifstream(argv[1]);
    } else { 
        inFile = std::ifstream("./test.csv");
    }

    auto words = loadWords(inFile);
    
    for (auto it = words.begin(); it != words.end(); it++) {
        (*it).printDef();
    }

    return 0;
}
