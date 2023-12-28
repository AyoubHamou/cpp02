#include "Point.hpp"

static float _abs(float n) {
  if (n < 0)
    return -n;
  return n;
}

static float TriangleArea(Point a, Point b, Point c) {
  float a1 = a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat());
  float a2 = b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat());
  float a3 = c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat());
  return _abs((a1 + a2 + a3) / 2.0);
}

bool bsp(Point a, Point b, Point c, Point p) {
  float A = TriangleArea(a, b, c);
  float B = TriangleArea(p, b, c);
  float C = TriangleArea(a, p, c);
  float D = TriangleArea(a, b, p);
  return (A == B + C + D);
}
