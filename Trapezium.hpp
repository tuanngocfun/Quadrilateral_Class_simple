#ifndef TRAPEZIUM_H
#define TRAPEZIUM_H
#include <iostream>

using namespace std;

class Trapezium
{
public:
    Trapezium(double w1 = 1, double w2 = 1, double h = 1);
    double getWidth1_() const;
    void setWidth1_(double );
    double getWidth2_() const;
    void setWidth2_(double );
    double getHeight() const;
    void setHeight(double );
    void setTrape(double w1, double w2, double h);
    double getArea();
    void print(ostream& output = cout);
    friend ostream& operator<<(ostream& output, Trapezium& trape);

private:
    double width1, width2, height;
};
#endif // TRAPEZIUM_H
