#include <iostream>

int main()
{

    const int size = 10;
    double arr[size];
    double sum = 0;

    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter element " << i << ": ";
        std::cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        if (i % 2 != 0)
        {
            sum += arr[i];
        }
    }

    std::cout << "Sum of elements with odd indexes: " << sum << std::endl;

    int firstNegative = -1;
    int lastNegative = -1;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            if (firstNegative == -1)
            {
                firstNegative = i;
            }
            lastNegative = i;
        }
    }

    if (firstNegative == -1 || lastNegative == -1)
    {
        std::cout << "There are no negative elements in the array" << std::endl;
    }
    else
    {
        sum = 0;
        for (int i = firstNegative + 1; i < lastNegative; i++)
        {
            sum += arr[i];
        }
        std::cout << "Sum of elements between first and last negative elements: " << sum << std::endl;
    }

    int newSize = 0;
    for (double i : arr)
    {
        if (abs(i) > 1)
        {
            arr[newSize] = i;
            newSize++;
        }
    }

    std::cout << "New array: ";
    for (int i = 0; i < newSize; i++)
    {
        std::cout << arr[i] << " ";
    }

    for (int i = newSize; i < size; i++)
    {
        arr[i] = 0;
    }

    std::cout << std::endl << "New array with zeros: ";
    for (double i : arr)
    {
        std::cout << i << " ";
    }

    return 0;
}