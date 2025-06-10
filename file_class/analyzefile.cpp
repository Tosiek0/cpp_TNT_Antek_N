#include "analyzefile.hpp"
#include <iostream>

int AnalyzedFile::countWords()
{
    if (_lines.empty())
        return 0;

    int wordCount = 0;
    for (const std::string &line : _lines)
    {
        char prev = ' ';
        for (char ch : line)
        {
            if (!isspace(ch) && isspace(prev))
                wordCount++;
            prev = ch;
        }
    }
    return wordCount;
}

int AnalyzedFile::countOccurrences(const std::string &word)
{
    return 0;
}


int AnalyzedFile::countFileLines()
{
    int count = 0;
    for (size_t i = 0; i < _lines.size(); ++i)
        count++;
    return count;
}

void AnalyzedFile::toUpperCase()
{
    for (std::string &line : _lines)
    {
        for (char &ch : line)
        {
            if (ch >= 'a' && ch <= 'z')
                ch = ch - ('a' - 'A');
        }
    }
}

void AnalyzedFile::toLowerCase()
{
    for (std::string &line : _lines)
    {
        for (char &ch : line)
        {
            if (ch >= 'A' && ch <= 'Z')
                ch = ch + ('a' - 'A');
        }
    }
}

void AnalyzedFile::showStats()
{
    
}