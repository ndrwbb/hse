#include <iostream>
#include <string>

int main(){
    int a, b;
    std::string name;
    std::cin >> a >> b >> name;
    std::cout << "Hello, " << name << std::endl;
    std::cout << "The sum is: " << a + b << std::endl;
    return 0;
}
