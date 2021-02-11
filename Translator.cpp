#include "Translator.h"
#include "Model.h"

Translator::Translator() {
  // default constructor
}

Translator::~Translator() {
  // default destructor
}

std::string Translator::translateEnglishWord(std::string str) {
  std::string translatedWord = "";
  Model englishWord;

  for (int i = 0; i < str.size(); ++i) {
    if (str[i] == str[i+1]) { // checks to see if there is a repeated character to determine which translation function to use
      translatedWord += englishWord.translateDoubleCharacter((char)str[i]);
      i++; // skips the repeated character so that it is not translated twice
    }
    else {
      translatedWord += englishWord.translateSingleCharacter((char)str[i]);
    }
  }
  return translatedWord;
}

std::string Translator::translateEnglishSentence(std::string str2) {
  std::string translatedSentence = "";
  std::string word;
  str2 += " "; // gets rid of special case for last word in input, doesn't work if no space afterwards
  for (int i = 0; i < str2.size(); ++i) {

    // split by spaces so can call translateEnglishWord
    if (!((char)str2[i] == ' ')) {
      word += str2[i];
    }
    else {
      translatedSentence += translateEnglishWord(word);
      translatedSentence += " ";
      word = "";
    }
  }
  return translatedSentence;
}
