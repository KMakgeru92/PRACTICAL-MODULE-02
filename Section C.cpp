#include <iostream>
#include <bitset>

int main() {
    std::string binaryStr = "1011"; // binary for 11
    int decimal = std::stoi(binaryStr, nullptr, 2);
    std::cout << decimal; // 11
}
