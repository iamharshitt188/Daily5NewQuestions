// Write a Program to calculate Area of Trianle
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float side1;
    cout << "Enter side1: ";
    cin >> side1;
    float side2;
    cout << "Enter side2: ";
    cin >> side2;
    float side3;
    cout << "Enter side3: ";
    cin >> side3;

    float s = (side1 + side2 + side3) / 2;
    float area = sqrt(s * (s - side1) * (s - side2) * (s - side3));

    cout << "Area of Triangle is: " << area << endl;

    return 0;
}
