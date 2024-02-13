#include <iostream>
using namespace std ;

int binaryGap(int n) {
    int max_distance = 0;
    int current_distance = 0;
    bool found_one = false;

    while (n > 0) {
        if (n & 1) {  // Check if the current bit is 1
            if (found_one) {
                max_distance = max(max_distance, current_distance);
            }
            found_one = true;
            current_distance = 1;
        } else if (found_one) {
            current_distance++;
        }

        n >>= 1;  // Right shift to check the next bit
    }

    return max_distance;
}

int main() {
    cout << binaryGap(22) << std::endl;  // Output: 2
    cout << binaryGap(8) << std::endl;   // Output: 0
    cout << binaryGap(5) << std::endl;   // Output: 2

    return 0;
}

