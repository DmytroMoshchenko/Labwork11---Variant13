#include <iostream>

int main() {

    const int size = 10;
    double arr[size];
    double max = 0;
    for (int i = 0; i < size; i++) {
        std::cout << "Enter " << i + 1 << " element: ";
        std::cin >> arr[i];
        if (abs(arr[i]) > max) {
            max = abs(arr[i]);
        }
    }
    std::cout << "Max element: " << max << std::endl;

    double sum = 0;
    int first = 0;
    int second = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            first = i;
            break;
        }
    }
    for (int i = first + 1; i < size; i++) {
        if (arr[i] > 0) {
            second = i;
            break;
        }
    }

    for (int i = first + 1; i < second; i++) {
        sum += arr[i];
    }

    std::cout << "Sum: " << sum << std::endl;

    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            count++;
        }
    }
    double* arr2 = new double[size - count];
    int j = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            arr2[j] = arr[i];
            j++;
        }
    }
    for (int i = 0; i < size - count; i++) {
        std::cout << arr2[i] << " ";
    }


}