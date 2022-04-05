// Name: Alon Filler ID: 216872374
#include "Grid.h"
#include "Rectangle.h"
#include <iostream>

Grid::Grid(double titleW, double titleH, int width, int height, int color): rectangleCount(width * height) {
    int iteration = 0;
    this->rectangleArray = new Rectangle*[this->rectangleCount];
    for (int widthIndex = 0; widthIndex < width; widthIndex++) {
        for (int heightIndex = 0; heightIndex < height; heightIndex++) {
            this->rectangleArray[iteration] = new Rectangle(widthIndex * titleW, heightIndex * titleH, titleW, titleH, color);
            iteration++;
        }
    }
}
Grid::~Grid() {
    for (int iteration = 0; iteration < this->rectangleCount; iteration++) delete(this->rectangleArray[iteration]);
    delete[]this->rectangleArray;
}
Rectangle* Grid::getRectAtIndex(int iteration) {
    return this->rectangleArray[iteration];
}

Rectangle* Grid::getRectAtPoint(const Point& pushingP) {
    for (int iteration = 0; iteration < this->rectangleCount; iteration++) {
        if (this->rectangleArray[iteration]->contains(pushingP)) return this->rectangleArray[iteration];
    }
    return this->rectangleArray[0]; // The compiler is unaware of the fact that under no circumstances will the rectangle not be found... Clarifying it to it.
}

void Grid::moveGrid(double mainAxis, double crossAxis) {
    for (int iteration = 0; iteration < this->rectangleCount; iteration++) {
        this->rectangleArray[iteration]->moveRect(mainAxis, crossAxis);
    }
}
void Grid::scaleGrid(double width, double height) {
    for (int iteration = 0; iteration < this->rectangleCount; iteration++) {
        this->rectangleArray[iteration]->scaleRect(width, height);
    }
}