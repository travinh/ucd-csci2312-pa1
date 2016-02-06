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
double Point::distanceTo(const Point &p1) const
{
    double x1, y1, z1;

    //Get x,y,z of point 1
    x1 = p1.getX();
    y1 = p1.getY();
    z1 = p1.getZ();

    double d; //d= distance from two points p1 and p2
    d = sqrt(pow(x - x1, 2) + pow(y - y1, 2) + pow(z - z1, 2));

    return d;
}

