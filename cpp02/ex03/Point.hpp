#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point{
private:
    Fixed x;
    Fixed y;
public:
  Point();
  Point(const Point &other);
  Point operator=(const Point &other);
  ~Point();

  Point(float x, float y);
  const Fixed& getX()const;
  const Fixed& getY()const;
};

bool bsp(Point a, Point b, Point c, Point p);

#endif
