#ifndef ANALYZEFILE_HPP
#define ANALYZEFILE_HPP

#include "file.hpp"

class AnalyzedFile : public File
{
public:
    using File::File; // dziedziczenie konstruktora

    int countWords();
    int countOccurrences(const std::string &word);
    int countFileLines();
    void toUpperCase();
    void toLowerCase();
    void showStats();
};

#endif