// a) switch
#include <iostream>

int main() {
    int groupCode;
    std::cout << "Enter group code: ";
    std::cin >> groupCode;

    switch (groupCode) {
    case 1:
        std::cout << "Group name: " << "Group 1" << std::endl;
        std::cout << "Students count: " << 10 << std::endl;
        break;
    case 2:
        std::cout << "Group name: " << "Group 2" << std::endl;
        std::cout << "Students count: " << 20 << std::endl;
        break;
    case 3:
        std::cout << "Group name: " << "Group 3" << std::endl;
        std::cout << "Students count: " << 30 << std::endl;
        break;
    case 4:
        std::cout << "Group name: " << "Group 4" << std::endl;
        std::cout << "Students count: " << 40 << std::endl;
        break;
    case 5:
        std::cout << "Group name: " << "Group 5" << std::endl;
        std::cout << "Students count: " << 50 << std::endl;
        break;
    case 6:
        std::cout << "Group name: " << "Group 6" << std::endl;
        std::cout << "Students count: " << 60 << std::endl;
        break;
    case 7:
        std::cout << "Group name: " << "Group 7" << std::endl;
        std::cout << "Students count: " << 70 << std::endl;
        break;
    default:
        std::cout << "Group not found" << std::endl;
        break;
    }

    // b) if
    if (groupCode == 1) {
        std::cout << "Group name: " << "Group 1" << std::endl;
        std::cout << "Students count: " << 10 << std::endl;
    }
    else if (groupCode == 2) {
        std::cout << "Group name: " << "Group 2" << std::endl;
        std::cout << "Students count: " << 20 << std::endl;
    }
    else if (groupCode == 3) {
        std::cout << "Group name: " << "Group 3" << std::endl;
        std::cout << "Students count: " << 30 << std::endl;
    }
    else if (groupCode == 4) {
        std::cout << "Group name: " << "Group 4" << std::endl;
        std::cout << "Students count: " << 40 << std::endl;
    }
    else if (groupCode == 5) {
        std::cout << "Group name: " << "Group 5" << std::endl;
        std::cout << "Students count: " << 50 << std::endl;
    }
    else if (groupCode == 6) {
        std::cout << "Group name: " << "Group 6" << std::endl;
        std::cout << "Students count: " << 60 << std::endl;
    }
    else if (groupCode == 7) {
        std::cout << "Group name: " << "Group 7" << std::endl;
        std::cout << "Students count: " << 70 << std::endl;
    }
    else {
        std::cout << "Group not found" << std::endl;
    }
}