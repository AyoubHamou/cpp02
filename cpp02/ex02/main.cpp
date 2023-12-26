#include "Fixed.hpp"

int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
//tests
  Fixed c(1);
Fixed const d( Fixed( 5.05f ) / Fixed( 0 ) );
std::cout << c << std::endl;
std::cout << --c << std::endl;
std::cout << c << std::endl;
std::cout << c++ << std::endl;
std::cout << c << std::endl;
std::cout << d << std::endl;
std::cout << Fixed::min( c, d ) << std::endl;

return 0;
}
