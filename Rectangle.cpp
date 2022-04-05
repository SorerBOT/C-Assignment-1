// Name: Alon Filler ID: 216872374
#include "Rectangle.h"
int Rectangle::m_count = 0;

Rectangle::Rectangle( double left, double top, double width, double height, int color ) :top(left, top), bottom(left + width, top + height) {
    this->color = color;
    ++m_count;
}
void Rectangle::setColor(int code) { this->color = code; }
int Rectangle::getColor() const { return this->color; }
Point& Rectangle::getTopLeftPoint() { return this->top; }
Point& Rectangle::getBottomRightPoint() { return this->bottom; }
bool Rectangle::contains(const Point &p) {
    if (!(this->top.getX() <= p.getX() && this->top.getY() <= p.getY())) return false;
    if (!(p.getX() <= this->bottom.getX() && p.getY() <= this->bottom.getY())) return false;
    return true;
}
void Rectangle::moveRect(double mainAxis, double crossAxis) {
    this->top.setX(this->top.getX() + mainAxis);
    this->top.setY(this->top.getY() + crossAxis);
    this->bottom.setX(this->bottom.getX() + mainAxis);
    this->bottom.setY(this->bottom.getY() + crossAxis);
}
void Rectangle::scaleRect(double mainAxis, double crossAxis) {
    double scaleX = mainAxis / (bottom.getX() - top.getX());
    double scaleY = crossAxis / (bottom.getY() - top.getY());

    this->top.setScaleX(scaleX);
    this->top.setScaleY(scaleY);
    this->bottom.setScaleX(scaleX);
    this->bottom.setScaleY(scaleY);
}