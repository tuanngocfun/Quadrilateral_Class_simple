#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H
#include <iostream>

using namespace std;

class Quadrilateral
{
public:
    Quadrilateral(double w1 = 1, double w2 = 1, double h = 1);
    double getWidth1_() const;
    void setWidth1_(double );
    double getWidth2_() const;
    void setWidth2_(double );
    double getHeight() const;
    void setHeight(double );
    void setQuad(double w1, double w2, double h);
    double getArea();
    void print(ostream& output = cout);
    friend ostream& operator<<(ostream& output, Quadrilateral& quad);

private:
    friend class Rectangle;
    friend class Trapezium;
    friend class Parallelogram;
    double width1, width2, height;
};
#endif // QUADRILATERAL_H
