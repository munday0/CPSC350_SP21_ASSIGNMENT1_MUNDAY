#ifndef TRANSLATOR_H
#define TRANSLATOR_H

#include <string>

class Translator {
  public:
    Translator();
    ~Translator();
    std::string translateEnglishWord(std::string str);
    std::string translateEnglishSentence(std::string str2);
};

#endif
