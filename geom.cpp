#include <iostream>
#include <cmath>

namespace Geometry {

    double squareArea(double side) {
        return side * side;
    }

    double rectangleArea(double length, double width) {
        return length * width;
    }

    double triangleArea(double base, double height) {
        return 0.5 * base * height;
    }

    double circleArea(double radius) {
        return M_PI * radius * radius;
    }

}

int main() {
    using namespace std;
    using namespace Geometry;

    double side, length, width, base, height, radius;

    cout << "Enter the side length of the square: ";
    cin >> side;

    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;

    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    double squareAreaResult = squareArea(side);
    double rectangleAreaResult = rectangleArea(length, width);
    double triangleAreaResult = triangleArea(base, height);
    double circleAreaResult = circleArea(radius);
    
    cout << "Area of square: " << squareAreaResult << endl;
    cout << "Area of rectangle: " << rectangleAreaResult << endl;
    cout << "Area of triangle: " << triangleAreaResult << endl;
    cout << "Area of circle: " << circleAreaResult << endl;

    return 0;
}
