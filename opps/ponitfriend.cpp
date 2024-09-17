#include <iostream>
#include <cmath>
using namespace std;

// Define the Point class
class Point
{
private:

/*double: This is a data type in C++ that represents floating-point numbers, which can have decimal points. 
It provides double-precision floating-point arithmetic, meaning it can represent a larger range of values 
and more precision compared to float.*/
    double x, y; // Coordinates of the point

public:
    // Constructor to initialize the Point object
    Point(double x_val, double y_val) : x(x_val), y(y_val) {}

    // Friend function declaration
    friend double distance(const Point &p1, const Point &p2);
};

// Friend function to compute the distance between two points
double distance(const Point &p1, const Point &p2)
{
    // Calculate the distance using the Euclidean distance formula
    return std::sqrt(std::pow(p2.x - p1.x, 2) + std::pow(p2.y - p1.y, 2));
}

int main()
{
    Point p1(1, 0);
    Point p2(70, 0);

    std::cout << "Distance between points: " << distance(p1, p2) << std::endl;
    return 0;
}