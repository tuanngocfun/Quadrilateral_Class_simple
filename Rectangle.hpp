#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>

using namespace std;

class Rectangle
{
public:
    Rectangle(double w = 1, double h = 1);
    double getWidth() const;
    void setWidth(double );
    double getHeight() const;
    void setHeight(double );
    void setRect(double w, double h);
    double getArea();
    void print(ostream& output = cout);
    friend ostream& operator<<(ostream& output, Rectangle& rect);

private:
    double width, height;
};
#endif // RECTANGLE_H
