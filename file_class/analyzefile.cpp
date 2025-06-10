#include "analyzefile.hpp"
#include <iostream>

int AnalyzedFile::countWords()
{
    if (_lines.empty())
        return 0;

    int wordCount = 0;
    for (const std::string &line : _lines)
    {
        bool inWord = false;
        for (char ch : line)
        {
            if (!isspace(ch))
            {
                if (!inWord)
                {
                    wordCount++;
                    inWord = true;
                }
            }
            else
            {
                inWord = false;
            }
        }
    }
    return wordCount;
}

int AnalyzedFile::countOccurrences(const std::string &word)
{
    if (_lines.empty() || word.empty())
        return 0;

    int occurrences = 0;
    for (const std::string &line : _lines)
    {
        size_t pos = 0;
        while ((pos = line.find(word, pos)) != std::string::npos)
        {
            // upewnij się, że to całe słowo (nie fragment)
            bool isStartOk = (pos == 0 || isspace(line[pos - 1]));
            bool isEndOk = (pos + word.length() >= line.length() || isspace(line[pos + word.length()]));

            if (isStartOk && isEndOk)
                occurrences++;

            pos += word.length(); // przesuwamy wskaźnik
        }
    }
    return occurrences;
}

int AnalyzedFile::countFileLines()
{
    return static_cast<int>(_lines.size());
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
    std::cout << "Liczba linii: " << countFileLines() << "\n";
    std::cout << "Liczba słów: " << countWords() << "\n";
}