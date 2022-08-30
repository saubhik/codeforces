#include <iostream>

int main() {
    // input = 2x + 2y
    // x,y >= 1 => input >= 4
    int input;
    std::cin >> input;
    if (input >= 4 && input % 2 == 0) std::cout << "YES";
    else std::cout << "NO";
}