#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Quadrilateral.h"

using namespace std;

Quadrilateral::Quadrilateral(double w1, double w2, double h)
{
    // Perform input validation
    setWidth1_(w1);
    setWidth2_(w2);
    setHeight(h);
}

double Quadrilateral::getWidth1_() const
{
    return width1;
}

void Quadrilateral::setWidth1_(double w1)
{
    if(w1 >= 0) width1 = w1;
    else throw invalid_argument("Invalid width! Width shall be positive.");
}

double Quadrilateral::getWidth2_() const
{
    return width2;
}

void Quadrilateral::setWidth2_(double w2)
{
    if(w2 >= 0) width2 = w2;
    else throw invalid_argument("Invalid width. Width shall be positive.");
}

double Quadrilateral::getHeight() const
{
    return height;
}

void Quadrilateral::setHeight(double h)
{
    if(h >= 0) height = h;
    else throw invalid_argument("Invalid height. Height shall be positive.");
}

void Quadrilateral::setQuad(double w1, double w2, double h)
{
    // Validate input
    setWidth1_(w1);
    setWidth2_(w2);
    setHeight(h);
}

double Quadrilateral::getArea()
{
    double result;

    if((width1 == height) || (width1 == width2))
    {
        result = width1 * height;
    }
    else if(!((width1 == height) && (width2 == height)))
    {
        result = ((width1 + width2)/2)*height;
    }
    return result;
}

void Quadrilateral::print(ostream& output)
{
    output << "Input the width1 of quadrilateral: " << width1 << '\n'
           << "Input the width2 of quadrilateral: " << width2 << '\n'
           << "Input the height of quadrilateral: " << height << '\n'
           << "Area of quadrilateral = " << fixed << setprecision(4) << getArea() << '\n';
}

ostream& operator<<(ostream& output, Quadrilateral& quad)
{
    quad.print(output);
    return output;
}
