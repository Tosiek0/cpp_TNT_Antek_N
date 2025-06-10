#include "file.hpp"
#include "analyzefile.hpp"
#include <iostream>

int main()
{
    AnalyzedFile f("file_test.txt");
    f.saveFile();
    f.readFile();
    // f.showFile();

    std::cout << "Liczba linii: " << f.countFileLines() << std::endl;

    std::cout << "Liczba słów: " << f.countWords() << std::endl;

   // std::cout << f.countOccurrences() << std::endl;

    f.toUpperCase();
    std::cout << "\nPlik po zamianie na wielkie litery:\n";
    f.showFile();

    f.toLowerCase();
    std::cout << "\nPlik po zamianie na małe litery:\n";
    f.showFile();
    
    // f.showStats();

    return 0;
}