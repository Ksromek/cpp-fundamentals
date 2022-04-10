#include <iostream>
#include <string>

void modifyString(string& str)
int main() {
    std::string str{"Some string"};
    modifyString(str);
    std::cout << str << '\n';
    return 0;
}
