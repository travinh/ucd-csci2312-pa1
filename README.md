//Vinh Van Tran


Decription of 3D points class
---------------------------
-Point.h: declare Point class:

    + Private member include x,y,z (3 dimensions of a point)
    
    + Public member include:
    
   
      1) 2 constructors:
         Point();                      // default constructor
         Point(double x1, double y1, double z1);    // three-argument constructor

      2) 3 mutator methods:
         void setX(double newX);
         void setY(double newY);
         void setZ(double newZ);

      3)3 accesor methods: 
         double getX() const;
         double getY() const;
         double getZ() const;
         
      4)distanceTo function:
          double distanceTo(const Point &p1a) const;
          
-Point.cpp: implement the Point class

