#include <iostream>

void printString(std :: string napis, int b )
{
  for(int i=0; i<b; i++)
  std :: cout<<napis;
}

int main() {
    printString("Hello", 5);
    std::cout << "\n";

    printString("AbC", 2);
    std::cout << "\n";

    printString("HiHi ", 6);
    std::cout << "\n";

    return 0;
}
