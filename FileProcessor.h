#ifndef FILE_PROCESSOR_H
#define FILE_PROCESSOR_H

#include <string>
#include <iostream>
#include <fstream>

class FileProcessor {
  public:
    FileProcessor();
    ~FileProcessor();
    void processFile(std::string fileIn, std::string fileOut);
};

#endif
