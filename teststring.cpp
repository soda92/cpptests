#include <string>
#include <iostream>

int main()
{
    std::string str{"123"};
    str += "\','";
    std::cout << str << '\n';
}