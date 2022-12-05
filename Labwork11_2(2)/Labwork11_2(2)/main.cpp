#include "iostream"

int main() {
    int m;
    std::cout << "Enter m: ";
    std::cin >> m;
    int* A = new int[m];
    for (int i = 0; i < m; i++) {
        std::cout << "Enter A[" << i << "]: ";
        std::cin >> A[i];
    }
    int count = 0;
    for (int i = 0; i < m; i++) {
        bool isUnique = true;
        for (int j = 0; j < m; j++) {
            if (i != j && A[i] == A[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            count++;

            std::cout << A[i] << " ";
        }
    }

    std::cout << "Count: " << count << std::endl;
    delete[] A;
    return 0;
}