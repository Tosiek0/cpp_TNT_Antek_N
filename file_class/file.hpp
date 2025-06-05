#include <iostream>
#include <string>
#include <vector>
#include <fstream>

class File
{
private:
    std::string _fileName;
    std::vector<std::string> _lines;

public:
    File(std::string argFileName) : _fileName(argFileName) {}

    // Deklaracja metody saveFile
    void saveFile();
    // Deklaracja metoda readFile
    void readFile();
    // Deklaracja metody showFile()
    void showFile();
};