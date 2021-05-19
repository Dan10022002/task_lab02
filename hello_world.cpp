#include <iostream>
#include <string>

int main() {
string name;
std::getline(std::cin, name); //Ввод строки с пробелами
cout << "Hello, world from " << name << endl;
return 0;
}
