#include <iostream>
#include <iomanip>
#include "Parallelogram.h"
#include "rectangle.h"
#include "quadrilateral.h"
#include "Trapezium.h"

using namespace std;

int main()
{
    cout << "Demo program of quadrilateral class inheritance: \n";

    /* Quadrilateral Tests */
    cout << "Quadrilateral Tests...\n";

    Quadrilateral quad1;
    cout << "\tDefault Quadrilateral...\n";
    cout << quad1;

    Quadrilateral quad2(quad1);
    cout << "\tCopy Quadrilateral...\n";
    cout << quad2;

    cout << "\tCustom Quadrilateral...\n";
    Quadrilateral quad3(1,2,3);
    cout << quad3;
    Quadrilateral quad4(2,2,4);
    cout << quad4;

    cout << "\tArray of N quadrilateral...\n";// Invoke constructor
    Quadrilateral quadArray1[2] ={Quadrilateral(7,8,9), Quadrilateral()};
    quadArray1[0].print();
    quadArray1[1].print();

    Quadrilateral* ptrQuadArray = new Quadrilateral[2]
        {Quadrilateral(12,12,10), Quadrilateral(14)};
    ptrQuadArray->print();
    ptrQuadArray[1].print();
    delete [] ptrQuadArray;

    try {
        Quadrilateral quad1_(-1,0,0);

        quad1_.print();
    }catch (invalid_argument& ex){
        cout << "Exception: " << ex.what() << endl;
    }
    cout << "Next statement after try-catch" << endl;

    /* Trapezium Tests */
    cout << "Trapezium Tests...\n";

    Trapezium trap1;
    cout << "\tDefault Trapezium...\n";
    cout << trap1;

    Trapezium trap2(trap1);
    cout << "\tCopy Trapezium from Quadrilateral...\n";
    cout << trap2;

    Trapezium trap3(trap1);
    cout << "\tCopy Trapezium from Trapezium...\n";
    cout << trap3;

    cout << "\tCustom Trapezium...\n";
    Trapezium trap4(2,6,4);
    cout << trap4;

    cout << "Rectangle Test...\n";

    Rectangle rect1;
    cout << "\tDefault Rectangle...\n";
    cout << rect1;

    Rectangle rect2(rect1);
    cout << "\tCopy Rectangle from Quadrilateral...\n";
    cout << rect2;

    Rectangle rect3(rect1);
    cout << "\tCopy Rectangle from Rectangle...\n";
    cout << rect3;

    cout << "\tCustom Rectangle...\n";
    Rectangle rect4(2,4);
    cout << rect4;

    cout << "Parallelogram Tests...\n";

    Parallelogram par1;
    cout << "\tDefault Parallelogram...\n";
    cout << par1;

    Parallelogram par2(par1);
    cout << "\tCopy Parallelogram from Rectangle...\n";
    cout << par2;

    Parallelogram par3(par1);
    cout << "\tCopy Parallelogram from Parallelogram...\n";
    cout << par3;

    cout << "\tCustom Parallelogram...\n";
    Parallelogram par4(3,6);
    cout << par4;

}
