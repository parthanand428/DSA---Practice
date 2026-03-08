#include <iostream>

int main() {
    // Define an array of strings
    std::string messages[] = {"Hello, World!", "Welcome to C++ programming", "Enjoy coding!", "Learn new things", "Have a great day!"};

    // Calculate the size of the array
    int arraySize = sizeof(messages) / sizeof(messages[0]);

    // Use a for loop to print each message in the array
    for (int i = 0; i < arraySize; ++i) {
        std::cout << messages[i] << std::endl;
    }

    return 0;
}
