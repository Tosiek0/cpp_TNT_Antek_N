#include "file.hpp"

// Definicja metody
void File::saveFile()
{
    std::ofstream MyFile(_fileName, std::ios::app);

    MyFile << "Files can be tricky, but it is fun enough!\n";
    MyFile << "Ala ma kota\n";
    MyFile << "Ola ms kota\n";

    MyFile.close();
}

// Definicja metody
void File::readFile()
{

    std::string line;

    std::ifstream MyReadFile(_fileName);

    while (getline(MyReadFile, line))
    {
        _lines.push_back(line);
    }

    MyReadFile.close();
}

void File::showFile()
{
    for (auto &line : _lines)
    {
        std::cout << line << std::endl;
    }
}
