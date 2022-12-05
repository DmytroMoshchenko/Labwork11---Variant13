#include <iostream>

int main() {
    const int size = 300;
    const int min = -200, max = 200;
    int arr[size];
    int minIndex = 0, maxIndex = 0;
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % (max - min + 1) + min;
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
    std::cout << "Before: " << std::endl;
    for (int i : arr) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;
    std::cout << "After: " << std::endl;
    for (int i : arr) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;

}