#include <iostream>

using std::string, std::cout, std::cin, std::endl;

int main() {
  string input;

  do {
    cout << "Hola.\n";
    getline(cin, input);

  } while( input.find("hola") == string::npos );

  cout << "gracias\n";

  return 0;
}