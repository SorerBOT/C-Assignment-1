// Name: Alon Filler ID: 216872374
#pragma once
#include "Rectangle.h"

// Grid class declaration
class Grid
{
    int rectangleCount;
    Rectangle** rectangleArray;
public:
    // Grid class constructor
    Grid( double tileW, double tileH, int width, int height, int color );
    // Grid class destructor
    ~Grid();

public:
    // A Grid method which allows finding the Rectangle in which a certain point is located
    Rectangle* getRectAtPoint( const Point &p );
    // A Grid method which allows finding the Rectangle that is located in a certain index of the rectangleArray
    Rectangle* getRectAtIndex( int i );

public:
    // A Grid method which allows moving each and every single element of the rectangleArray by fixed sums
    void moveGrid( double deltaLeft, double deltaTop );
    // A Grid method which allows the scaling of each and every single element of the rectangleArray by fixed sums
    void scaleGrid( double rectWidth, double rectHeight );
};