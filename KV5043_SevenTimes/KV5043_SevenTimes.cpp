#include <iostream>

int main() {
    std::cout << "Seven Times Table:\n\n";

    for (int i = 1; i <= 9; ++i) {
        std::cout << i << " x " << 7 << " = " << i * 7 << std::endl;
    }

    return 0;
}