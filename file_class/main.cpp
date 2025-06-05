#include "file.hpp"
#include "analyzefile.hpp"

int main()
{
    File f("file_test.txt");
    f.saveFile();
    f.readFile();
    f.showFile();

    // std::cout << f.countFileLines() << std::endl;

    return 0;
}