#include "Point.hpp"


int main ( void )
{
	Point a(1, 45);
	Point b(11, 10);
	Point c(50, 40);

	Point p(10, 10);
 
  if (bsp(a, b, c, p))
    std::cout << "point is inside the triangle" << std::endl;
  else
    std::cout << "point in not inside the triangle" << std::endl;
	return 0;
}
