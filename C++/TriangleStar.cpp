#include <iostream>

int main() {
    int rows;

    std::cout << "Enter the number of rows for the triangle: ";
    std::cin >> rows;

    for (int i = 1; i <= rows; i++) {
        // Print spaces before the stars
        for (int j = 1; j <= rows-i; j++) {
            std::cout << "_";
        }

        // Print stars for each row
        for (int k = 1; k <= 2* i - 1; k++) {
            std::cout << "*";
        }

        // Move to the next line after each row
        std::cout << "\n";
    }

    return 0;
}

