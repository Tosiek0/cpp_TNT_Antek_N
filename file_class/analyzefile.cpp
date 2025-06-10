#include "analyzefile.hpp"
#include <algorithm>
#include <cctype>
#include <iostream>
#include <sstream>

// Liczy wszystkie słowa we wszystkich liniach
int AnalyzedFile::countWords()
{
    if (_lines.empty())
    {
        return 0;
    }

    int wordCount = 0;
    for (const auto &line : _lines)
    {
        std::istringstream iss(line);
        std::string word;
        while (iss >> word)
        {
            ++wordCount;
        }
    }

    return wordCount;
}

// Liczy wystąpienia konkretnego słowa (ignoruje wielkość liter)
int AnalyzedFile::countOccurrences(const std::string &word)
{
    if (_lines.empty())
    {
        return 0;
    }

    int count = 0;
    std::string lowerWord = word;
    std::transform(lowerWord.begin(), lowerWord.end(), lowerWord.begin(), ::tolower);

    for (const auto &line : _lines)
    {
        std::istringstream iss(line);
        std::string token;
        while (iss >> token)
        {
            std::string loweredToken = token;
            std::transform(loweredToken.begin(), loweredToken.end(), loweredToken.begin(), ::tolower);
            if (loweredToken == lowerWord)
            {
                ++count;
            }
        }
    }

    return count;
}

// Zwraca liczbę linii w pliku
int AnalyzedFile::countFileLines()
{
    return _lines.size();
}

// Zmienia wszystkie litery na wielkie
void AnalyzedFile::toUpperCase()
{
    for (auto &line : _lines)
    {
        std::transform(line.begin(), line.end(), line.begin(), ::toupper);
    }
}

// Zmienia wszystkie litery na małe
void AnalyzedFile::toLowerCase()
{
    for (auto &line : _lines)
    {
        std::transform(line.begin(), line.end(), line.begin(), ::tolower);
    }
}

// Wyświetla podstawowe statystyki
void AnalyzedFile::showStats()
{
    std::cout << "Lines: " << countFileLines() << std::endl;
    std::cout << "Words: " << countWords() << std::endl;
}
