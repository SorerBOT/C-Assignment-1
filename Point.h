// Name: Alon Filler ID: 216872374
#pragma once
// Point class declaration
class Point
{
    double x;
    double y;
    double scaleX;
    double scaleY;
public:
    // Point class constructor
    Point( double x, double y );
public:
    // A Point method which returns the X value of a Point instance
    double getX() const;
    // A Point method which returns the Y value of a Point instance
    double getY() const;
    // A Point method which sets the X value of a Point according to the passed parameter
    void setX( double x );
    // A Point method which sets the Y value of a Point according to the passed parameter
    void setY( double y );
    // A Point method which sets the scaleX value of a Point according to the passed parameter
    void setScaleX( double scaleX );
    // A Point method which sets the scaleY value of a Point according to the passed parameter
    void setScaleY( double scaleY );
};