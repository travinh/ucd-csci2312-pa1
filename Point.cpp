//
// Created by Vinh Van Tran on 2/6/16.

#include "cmath"

#include "Point.h"

//Implement Point class

// Constructors

Point::Point() // default constructor
{
    x = 0;
    y = 0;
    z = 0;
};

Point::Point(double x1, double y1, double z1)  // t-argument constructor
{
    x = x1;
    y = y1;
    z = z1;

};

// Mutator methods
void Point::setX(double newX)
{
    x = newX;
};

void Point::setY(double newY)
{
    y = newY;
};

void Point::setZ(double newZ)
{
    z = newZ;
};

// Accessor methods
double Point::getX() const
{
    return x;
};

double Point::getY() const
{
    return y;
};

double Point::getZ() const
{
    return z;
};

//Function distanceTo return the distance between two points
double Point::distanceTo(const Point &p1, const Point &p2) const
{
    double a1, b1, c1, a2, b2, c2;

    //Get x,y,z of point 1
    a1 = p1.getX();
    b1 = p1.getY();
    c1 = p1.getZ();

    //Get x,y,z of pint 2
    a2 = p2.getX();
    b2 = p2.getY();
    c2 = p2.getZ();

    double d; //d= distance from two points p1 and p2
    d = sqrt(pow(a2 - a1, 2) + pow(b2 - b1, 2) + pow(c2 - c1, 2));

    return d;
}