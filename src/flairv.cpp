#include <iostream>
#include <string>
#include "compiler.hpp"
#include "scanner-utilities.cpp"
#include "token-utilities.cpp"
#include "scanner.cpp"
#include "parser-limited.cpp"

using namespace std;

int main(int argc, char *argv[]) {
  // Determine if debugging
  bool debug;
  debug = (argc >= 3);
  // Run scanner on input file
  tokenList * streamOfTokens = scanner(argv[1]);

  // Check if is valid program
  if (parser(streamOfTokens,debug)) {
    cout << "Valid flair program" << '\n';
  }
  else {
    cout << "Invalid flair program" << '\n';
  }  
  //TODO: Free memory from stream of tokens
  return 0;
}
