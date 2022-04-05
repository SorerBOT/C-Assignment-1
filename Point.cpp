// Name: Alon Filler ID: 216872374
#include "Point.h"

Point::Point(double x, double y) {
    this->x = x;
    this->y= y;
    this->scaleX = 1;
    this->scaleY = 1;
}
void Point::setScaleX(double scale) { this->scaleX = scale; }
void Point::setScaleY(double scale) { this->scaleY = scale; }
void Point::setX(double value) { this->x = value; }
void Point::setY(double value) { this->y = value; }
double Point::getX() const { return this->x * this->scaleX; }
double Point::getY() const { return this->y * this->scaleY; }