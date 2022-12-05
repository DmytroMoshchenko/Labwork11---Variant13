#include <iostream>

int main() {
    int A;
    std::cout << "Enter A: ";
    std::cin >> A;
    int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int count = 0;
    for (int i : array) {
        if (i > A) {
            count++;
        }
    }
}
