#include<iostream>
using namespace std;

const double PI = 3.14159;

int main() {
    // PI = 3.14; // This line would cause a compilation error, because PI is const
    double radius = 5.0;
    double area = PI * radius * radius;
    std::cout << "Area of the circle is: " << area << std::endl;
    return 0;
}
