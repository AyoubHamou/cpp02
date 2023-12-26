#include "Fixed.hpp"

Fixed::Fixed(): fixed_pt(0){
  std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fixed){
  std::cout << "Copy constructor called" << std::endl;
  *this = fixed;
}

Fixed& Fixed::operator=(const Fixed& fixed){
  std::cout << "Copy assignment operator called" << std::endl;
  if (this != &fixed)
    this->fixed_pt = fixed.getRawBits();
  return *this;
}

Fixed::~Fixed(){
  std::cout << "Destructor called" << std::endl;
}

void Fixed::setRawBits( int const raw ){
  std::cout << "setRawBits member function called" << std::endl;
  fixed_pt = raw;
}

int Fixed::getRawBits( void ) const{
  std::cout << "getRawBits member function called" << std::endl;
  return fixed_pt;
}
