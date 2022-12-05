#include <cmath>
#include <iostream>
#include <cmath>

float f(float x) {
    return 3 * cos(x + 2.3) / (std::sin(x) + 3);
}
int main() {
    // Tabulate from 1 to 10
    for (float x = 1; x <= 10; x += 0.1) {
        std::cout << x << " " << f(x) << std::endl;
    }

}