#include <iostream>
using namespace std;

// Function to calculate the area of a circle
double circleArea(double radius) {
    const double pi = 3.14159265359;
    return pi * radius * radius;
}

// Function to calculate the area of a triangle
double triangleArea(double base, double height) {
    return 0.5 * base * height;
}

// Function to calculate the area of a parallelogram
double parallelogramArea(double base, double height) {
    return base * height;
}

int main() {
    double radius, base, height;
    
    // Calculate the area of a circle
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout<<"area of circle is: "<<circleArea(radius);
    
    
    // Calculate the area of a triangle
    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;
    double triangle_area = triangleArea(base, height);
    cout << "The area of the triangle is: " << triangle_area << endl;
    
    // Calculate the area of a parallelogram
    cout << "Enter the base and height of the parallelogram: ";
    cin >> base >> height;
    double parallelogram_area = parallelogramArea(base, height);
    cout << "The area of the parallelogram is: " << parallelogram_area << endl;
    
    return 0;
}
