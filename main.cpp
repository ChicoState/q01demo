#include <iostream>

using std::string, std::cout, std::cin, std::endl;

int main(){
  string input;

  do{
    cout<<"Hola.\n";
    cin>>input;
  }while( input != "hola" );

  cout << "gracias\n";

  return 0;
}