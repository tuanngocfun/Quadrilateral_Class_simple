#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H
#include <iostream>

using namespace std;

class Parallelogram
{
public:
    Parallelogram(double w = 1, double h = 1);
    double getWidth() const;
    void setWidth(double );
    double getHeight() const;
    void setHeight(double );
    void setPar(double w, double h);
    double getArea();
    void print(ostream& output = cout);
    friend ostream& operator<<(ostream& output, Parallelogram& par);

private:
    double width, height;
};
#endif // PARALLELOGRAM_H
