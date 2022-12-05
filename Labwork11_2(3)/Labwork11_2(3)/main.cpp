#include <iostream>

int main() {
    int n;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    int* arr = new int[n];
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int product = 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            product *= arr[i];
        }
    }

    std::cout << "Product of elements with even indexes: " << product << std::endl;

    int sum = 0;

    int firstZeroIndex = -1;
    int lastZeroIndex = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            firstZeroIndex = i;
            break;
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] == 0) {
            lastZeroIndex = i;
            break;
        }
    }

    if (firstZeroIndex != -1 && lastZeroIndex != -1) {
        for (int i = firstZeroIndex + 1; i < lastZeroIndex; i++) {
            sum += arr[i];
        }
    }

    std::cout << "Sum of elements between first and last zero: " << sum << std::endl;

    int* positiveArr = new int[n];
    int* negativeArr = new int[n];

    int positiveCount = 0;
    int negativeCount = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            positiveArr[positiveCount] = arr[i];
            positiveCount++;
        }
        else {
            negativeArr[negativeCount] = arr[i];
            negativeCount++;
        }
    }

    int* resultArr = new int[n];

    for (int i = 0; i < positiveCount; i++) {
        resultArr[i] = positiveArr[i];
    }

    for (int i = 0; i < negativeCount; i++) {
        resultArr[positiveCount + i] = negativeArr[i];
    }

    std::cout << "Result array: ";
    for (int i = 0; i < n; i++) {
        std::cout << resultArr[i] << " ";
    }

    std::cout << std::endl;

    delete[] arr;
    delete[] positiveArr;

    return 0;

}