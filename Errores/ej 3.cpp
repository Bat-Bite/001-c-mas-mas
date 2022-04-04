#include <iostream>
#include <limits>
#include <string>

int main()
{
  int var;

  while( true )
  {
    std::cin >> var;
    if( !std::cin.good() )
    {
      std::cout << "ERROR\n";
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    }
    else
      break;
  }

  std::cout << var;
}