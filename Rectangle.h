// Name: Alon Filler ID: 216872374
#pragma once
#include "Point.h"

//  Rectangle class declaration
class Rectangle {
    int color;
    Point top;
    Point bottom;
public:
    // Rectangle class constructor
    Rectangle( double left, double top, double width, double height, int color );
    // The Rectangle class destructor, appears to be used as some form of a validation method.
    ~Rectangle() { --m_count; };

public:
    // A Rectangle method which returns the colour of the Rectangle instance
    int getColor() const;
    // A Rectangle method which return the Top Point of a Rectangle instance
    Point& getTopLeftPoint();
    // A Rectangle method which returns the Bottom Point of a Rectangle instance
    Point& getBottomRightPoint();
    // A Rectangle method which sets the colour of a Rectangle instance
    void setColor( int color );

public:
    // A Rectangle method which determines whether a Rectangle instance contains a certain Point instance
    bool contains( const Point &p );
    // A Rectangle method which allows the moving of a Rectangle instance by fixed sums
    void moveRect( double deltaLeft, double deltaTop );
    // A Rectangle method which allows the scaling of a Rectangle instance
    void scaleRect( double rectWidth, double rectHeight );

public:
    static int m_count;
};