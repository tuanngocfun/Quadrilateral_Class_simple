#include <iostream>
#include <stdexcept>
#include "Trapezium.h"

using namespace std;

Trapezium::Trapezium(double w1, double w2, double h)
{
    setWidth1_(w1);
    setWidth2_(w2);
    setHeight(h);
}

double Trapezium::getWidth1_() const {return width1;}

void Trapezium::setWidth1_(double w1)
{
    if(w1 >= 0) width1 = w1;
    else throw invalid_argument("Invalid width! Width shall be positive.");
}

double Trapezium::getWidth2_() const {return width2;}

void Trapezium::setWidth2_(double w2)
{
    if(w2 >= 0) width2 = w2;
    else throw invalid_argument("Invalid width! Width shall be positive.");
}

double Trapezium::getHeight() const {return height;}

void Trapezium::setHeight(double h)
{
    if(h >= 0) height = h;
    else throw invalid_argument("Invalid height. Height shall be positive.");
}

void Trapezium::setTrape(double w1, double w2, double h)
{
    setWidth1_(w1);
    setWidth2_(w2);
    setHeight(h);
}

double Trapezium::getArea()
{
    return ((width1 + width2) * height)/2;
}

void Trapezium::print(ostream& output)
{
    output << "\n"
           << "Input the width1 of trapezium: " << width1 << '\n'
           << "input the width2 of trapezium: " << width2 << '\n'
           << "Input the height of trapezium: " << height << '\n'
           << "Area of trapezium = " << getArea() << '\n';
}

ostream& operator<<(ostream& output, Trapezium& trap)
{
    trap.print(output);
    return output;
}
