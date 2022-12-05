#include <iostream>
int main() {
    int n;
    std::cout << "Enter a matrix size: ";
    std::cin >> n;

    auto** matrix = new int* [n];

    int counter = 1;
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[n];
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++) {
                matrix[i][j] = counter++;
            }
        }
        else {
            for (int j = n - 1; j >= 0; j--) {
                matrix[i][j] = counter++;
            }
        }
    }

    // Print matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Free memory
    for (int i = 0; i < n; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}