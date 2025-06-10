#include "file.hpp"
#include "analyzefile.hpp"

int main()
{
    AnalyzedFile f("file_test.txt");
    f.saveFile();
    f.readFile();
    f.showFile();

    std::cout << "Liczba linii: " << f.countFileLines() << std::endl;
    std::cout << "Liczba słów: " << f.countWords() << std::endl;
    f.showStats();

    return 0;
}