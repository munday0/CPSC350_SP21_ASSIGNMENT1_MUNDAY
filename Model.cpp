#include "Model.h"

Model::Model() {
  //default constructor
}

Model::~Model() {
  //default destructor
}

std::string Model::translateSingleCharacter(char chr) {
  std::string translatedSingle = "";
  if (isupper(chr)) {
    switch (chr) { // accounts for each possible uppercase letter
      case 'A':
        translatedSingle = "A";
        break;
      case 'B':
        translatedSingle = "Bub";
        break;
      case 'C':
        translatedSingle = "Cash";
        break;
      case 'D':
        translatedSingle = "Dud";
        break;
      case 'E':
        translatedSingle = "E";
        break;
      case 'F':
        translatedSingle = "Fuf";
        break;
      case 'G':
        translatedSingle = "Gug";
        break;
      case 'H':
        translatedSingle = "Hash";
        break;
      case 'I':
        translatedSingle = "I";
        break;
      case 'J':
        translatedSingle = "Jay";
        break;
      case 'K':
        translatedSingle = "Kuck";
        break;
      case 'L':
        translatedSingle = "Lul";
        break;
      case 'M':
        translatedSingle = "Mum";
        break;
      case 'N':
        translatedSingle = "Nun";
        break;
      case 'O':
        translatedSingle = "O";
        break;
      case 'P':
        translatedSingle = "Pub";
        break;
      case 'Q':
        translatedSingle = "Quack";
        break;
      case 'R':
        translatedSingle = "Rug";
        break;
      case 'S':
        translatedSingle = "Sus";
        break;
      case 'T':
        translatedSingle = "Tut";
        break;
      case 'U':
        translatedSingle = "U";
        break;
      case 'V':
        translatedSingle = "Vuv";
        break;
      case 'W':
        translatedSingle = "Wack";
        break;
      case 'X':
        translatedSingle = "Ex";
        break;
      case 'Y':
        translatedSingle = "Yub";
        break;
      case 'Z':
        translatedSingle = "Zub";
        break;
      default :
        translatedSingle = chr;
    }
  }
  else {
    switch (chr) { // accounts for each possible lowercase letter
      case 'a':
        translatedSingle = "a";
        break;
      case 'b':
        translatedSingle = "bub";
        break;
      case 'c':
        translatedSingle = "cash";
        break;
      case 'd':
        translatedSingle = "dud";
        break;
      case 'e':
        translatedSingle = "e";
        break;
      case 'f':
        translatedSingle = "fuf";
        break;
      case 'g':
        translatedSingle = "gug";
        break;
      case 'h':
        translatedSingle = "hash";
        break;
      case 'i':
        translatedSingle = "i";
        break;
      case 'j':
        translatedSingle = "jay";
        break;
      case 'k':
        translatedSingle = "kuck";
        break;
      case 'l':
        translatedSingle = "lul";
        break;
      case 'm':
        translatedSingle = "mum";
        break;
      case 'n':
        translatedSingle = "nun";
        break;
      case 'o':
        translatedSingle = "o";
        break;
      case 'p':
        translatedSingle = "pub";
        break;
      case 'q':
        translatedSingle = "quack";
        break;
      case 'r':
        translatedSingle = "rug";
        break;
      case 's':
        translatedSingle = "sus";
        break;
      case 't':
        translatedSingle = "tut";
        break;
      case 'u':
        translatedSingle = "u";
        break;
      case 'v':
        translatedSingle = "vuv";
        break;
      case 'w':
        translatedSingle = "wack";
        break;
      case 'x':
        translatedSingle = "ex";
        break;
      case 'y':
        translatedSingle = "yub";
        break;
      case 'z':
        translatedSingle = "zub";
        break;
      default :
        translatedSingle = chr; // accounts for characters that aren't letters & don't need to be translated
    }
  }

  return translatedSingle;
}


std::string Model::translateDoubleCharacter(char chr2) {
  std::string translatedDouble = "";
  if (isupper(chr2)) {
    switch (chr2) { // accounts for each possible uppercase letter
      case 'A':
        translatedDouble = "Squata";
        break;
      case 'B':
        translatedDouble = "Squab";
        break;
      case 'C':
        translatedDouble = "Squac";
        break;
      case 'D':
        translatedDouble = "Squad";
        break;
      case 'E':
        translatedDouble = "Squate";
        break;
      case 'F':
        translatedDouble = "Squaf";
        break;
      case 'G':
        translatedDouble = "Squag";
        break;
      case 'H':
        translatedDouble = "Squah";
        break;
      case 'I':
        translatedDouble = "Squati";
        break;
      case 'J':
        translatedDouble = "Squaj";
        break;
      case 'K':
        translatedDouble = "Squak";
        break;
      case 'L':
        translatedDouble = "Squal";
        break;
      case 'M':
        translatedDouble = "Squam";
        break;
      case 'N':
        translatedDouble = "Squan";
        break;
      case 'O':
        translatedDouble = "Squato";
        break;
      case 'P':
        translatedDouble = "Squap";
        break;
      case 'Q':
        translatedDouble = "Squaq";
        break;
      case 'R':
        translatedDouble = "Squar";
        break;
      case 'S':
        translatedDouble = "Squas";
        break;
      case 'T':
        translatedDouble = "Squat";
        break;
      case 'U':
        translatedDouble = "Squatu";
        break;
      case 'V':
        translatedDouble = "Squav";
        break;
      case 'W':
        translatedDouble = "Squaw";
        break;
      case 'X':
        translatedDouble = "Squax";
        break;
      case 'Y':
        translatedDouble = "Squay";
        break;
      case 'Z':
        translatedDouble = "Squaz";
        break;
      default :
        translatedDouble = chr2;
    }
  }
  else {
    switch (chr2) { // accounts for each possible lowercase letter
      case 'a':
        translatedDouble = "squata";
        break;
      case 'b':
        translatedDouble = "squab";
        break;
      case 'c':
        translatedDouble = "squac";
        break;
      case 'd':
        translatedDouble = "squad";
        break;
      case 'e':
        translatedDouble = "squate";
        break;
      case 'f':
        translatedDouble = "squaf";
        break;
      case 'g':
        translatedDouble = "squag";
        break;
      case 'h':
        translatedDouble = "squah";
        break;
      case 'i':
        translatedDouble = "squati";
        break;
      case 'j':
        translatedDouble = "squaj";
        break;
      case 'k':
        translatedDouble = "squak";
        break;
      case 'l':
        translatedDouble = "squal";
        break;
      case 'm':
        translatedDouble = "squam";
        break;
      case 'n':
        translatedDouble = "squan";
        break;
      case 'o':
        translatedDouble = "squato";
        break;
      case 'p':
        translatedDouble = "squap";
        break;
      case 'q':
        translatedDouble = "squaq";
        break;
      case 'r':
        translatedDouble = "squar";
        break;
      case 's':
        translatedDouble = "squas";
        break;
      case 't':
        translatedDouble = "squat";
        break;
      case 'u':
        translatedDouble = "squatu";
        break;
      case 'v':
        translatedDouble = "squav";
        break;
      case 'w':
        translatedDouble = "squaw";
        break;
      case 'x':
        translatedDouble = "squax";
        break;
      case 'y':
        translatedDouble = "squay";
        break;
      case 'z':
        translatedDouble = "squaz";
        break;
      default :
        translatedDouble = chr2; // accounts for characters that aren't letters & don't need to be translated
    }
  }
  return translatedDouble;
}
