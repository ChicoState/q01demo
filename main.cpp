#include <iostream>

int main(){
  std::string input;

  do{
    std::cout<<"Hola.\n";
    std::cin>>input;
  }while( input != "hola" );

  std::cout << "gracias\n";

  return 0;
}