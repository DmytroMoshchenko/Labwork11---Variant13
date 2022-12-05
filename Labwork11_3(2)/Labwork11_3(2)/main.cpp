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

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < n; i++) {
        int positiveCounter = 0;
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] > 0) {
                positiveCounter++;
            }
        }
        std::cout << "Row " << i << " has " << positiveCounter << " positive elements" << std::endl;
    }

    int max = matrix[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (abs(matrix[i][j]) > abs(max)) {
                max = matrix[i][j];
            }
        }
    }

    std::cout << "Max element is " << max << std::endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = rand() % 100 - 50;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    int maxElement = matrix[0][0];
    int minElement = matrix[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] > maxElement) {
                maxElement = matrix[i][j];
            }
            if (matrix[i][j] < minElement) {
                minElement = matrix[i][j];
            }
        }
    }

    int average = (maxElement + minElement) / 2;

    int row;
    std::cout << "Enter row number: ";
    std::cin >> row;
    for (int i = 0; i < n; i++) {
        matrix[row][i] = average;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }



    for (int i = 0; i < n; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}