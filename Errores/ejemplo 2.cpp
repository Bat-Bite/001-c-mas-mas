#include <iostream>

int main()
{
  std::string texto;
  int var;
  std::cin >> var;

  if( !std::cin.good() )
    std::cin.clear();

  std::cin >> texto;
  std::cout << '-' << texto << '-';
}