#include <iostream>

int main() {
    int rows;
    std::cout << "Enter the number of rows for the arrow pattern: ";
    std::cin >> rows;

    // Upper part of the arrow
    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (int j = 1; j <= rows - i; j++) {
            std::cout << " ";
        }
        // Print asterisks
        for (int k = 1; k <= i; k++) {
            std::cout << "*";
        }
        // Print rectangle part
        for (int l = 1; l <= rows; l++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    // Lower part of the arrow
    for (int i = rows - 1; i >= 1; i--) {
        // Print spaces
        for (int j = 1; j <= rows - i; j++) {
            std::cout << " ";
        }
        // Print asterisks
        for (int k = 1; k <= i; k++) {
            std::cout << "*";
        }
        // Print rectangle part
        for (int l = 1; l <= rows; l++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}








