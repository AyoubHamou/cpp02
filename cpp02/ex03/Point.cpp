#include "Point.hpp"
#include "Fixed.hpp"

Point::Point():x(0), y(0){}

Point::Point(float x, float y):x(x), y(y){}

Point::Point(const Point &other){
  *this = other;
}

Point Point::operator=(const Point &other){
  if (this != &other)
    *this = other;
  return *this;
}

Point::~Point(){}

const Fixed& Point::getX()const{
  return this->x;
}
const Fixed& Point::getY()const{
  return  this->y;
}
