#include "file.hpp"

int main()
{
    File f("file_test.txt");
    f.saveFile();
    f.readFile();
    f.showFile();

    return 0;
}