#ifndef MODEL_H
#define MODEL_H

#include <string>
#include <cctype>

class Model {
  public:
    Model();
    ~Model();
    std::string translateSingleCharacter(char chr);
    std::string translateDoubleCharacter(char chr2);
};

#endif
