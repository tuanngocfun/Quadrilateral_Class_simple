#include <iostream>
#include <stdexcept>
#include "Parallelogram.h"

using namespace std;

Parallelogram::Parallelogram(double w, double h)
    :width(w), height(h) {}

double Parallelogram::getWidth() const
{
    return width;
}

void Parallelogram::setWidth(double w)
{
    if(w >= 0) width = w;
    else throw invalid_argument("Invalid width! Width shall be positive.");
}

double Parallelogram::getHeight() const
{
    return height;
}

void Parallelogram::setHeight(double h)
{
    if(h >= 0) height = h;
    else throw invalid_argument("Invalid height. Height shall be positive.");
}

void Parallelogram::setPar(double w, double h)
{
    this->width = w;
    this->height = h;
}

double Parallelogram::getArea()
{
    return width * height;
}

void Parallelogram::print(ostream& output)
{
    output << '\n'
           << "Input the width of parallelogram: " << width << '\n'
           << "Input the height of parallelogram: " << height << '\n'
           << "Area of the parallelogram = " << getArea() << '\n';
}

ostream& operator<<(ostream& output, Parallelogram& para)
{
    para.print(output);
    return output;
}
