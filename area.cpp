
//
// Created by Vinh Van Tran on 2/6/16.
//


#include <iomanip>
#include <iostream>

#include "cmath"
#include "Point.h"

using namespace std;

double computeArea(const Point &a, const Point &b, const Point &c)
{

    cout << setprecision(3) << fixed;
    // Triangle abc

    double ab,bc,ca; //three length of triangle abc
    ab = a.distanceTo(b);
    bc = b.distanceTo(c);
    ca = c.distanceTo(a);

    double s; //semiperimeter
    s = (ab+bc+ca)/2.0;


    double A; //area
    A = sqrt(s * (s-ab) * (s-bc) * (s-ca));


    return A;


};
