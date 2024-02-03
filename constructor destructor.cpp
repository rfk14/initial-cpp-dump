#include <iostream>

class MyClass {
public:
    // Constructor
    MyClass() {
        std::cout << "Constructor called." << std::endl;
    }

    // Destructor
    ~MyClass() {
        std::cout << "Destructor called." << std::endl;
    }
};

int main() {
    std::cout << "Creating object." << std::endl;
    MyClass myObject;

    std::cout << "Destroying object." << std::endl;
    return 0;
}

