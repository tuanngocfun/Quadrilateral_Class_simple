#include "Rectangle.h"
#include <iostream>
#include <stdexcept>

using namespace std;

Rectangle::Rectangle(double w, double h)
{
    setWidth(w);
    setHeight(h);
}

double Rectangle::getWidth() const {return width;}

void Rectangle::setWidth(double w)
{
    if(w >= 0) width = w;
    else throw invalid_argument("Invalid width! Width shall be positive.");
}

double Rectangle::getHeight() const {return height;}

void Rectangle::setHeight(double h)
{
    if(h >= 0) height = h;
    else throw invalid_argument("Invalid height. Height shall be positive.");
}

void Rectangle::setRect(double w, double h)
{
    setWidth(w);
    setHeight(h);
}

double Rectangle::getArea()
{
    return height * width;
}

void Rectangle::print(ostream& output)
{
    output << '\n'
           << "Input the width of rectangle: " << width << '\n'
           << "Input the height of rectangle: " << height << '\n'
           << "Area of the rectangle: " << getArea() << '\n';
}

ostream& operator<<(ostream& output, Rectangle& rec)
{
    rec.print(output);
    return output;
}
