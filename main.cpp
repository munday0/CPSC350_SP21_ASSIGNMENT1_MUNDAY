#include "Model.h"
#include "Translator.h"
#include "FileProcessor.h"
#include <iostream>

using namespace std;

int main(int argc, char **argv) {

  FileProcessor fileProcessor;
  string inputFile = "";
  string outputFile = "";

  cout << "Input file name with .txt at the end: " << endl;
  cin >> inputFile;

  cout << "Output file name with .txt at the end: " << endl;
  cin >> outputFile;

  fileProcessor.processFile(inputFile, outputFile);
  return 0;
}
