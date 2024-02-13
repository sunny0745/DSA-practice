#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> ages;

    // Insert key-value pairs
    ages["Alice"] = 25;
    ages["Bob"] = 30;
    ages["Charlie"] = 22;

    // Retrieve values
    std::cout << "Alice's age: " << ages["Alice"] << std::endl;
    std::cout << "Bob's age: " << ages["Bob"] << std::endl;
    std::cout << "Charlie's age: " << ages["Charlie"] << std::endl;

    return 0;
}
//In this example, std::unordered_map acts as a hashtable, allowing you to store and retrieve age values using names as keys.





