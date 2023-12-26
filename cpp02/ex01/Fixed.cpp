#include "Fixed.hpp"

Fixed::Fixed() : fixed_pt(0) {
  std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) {
  std::cout << "Copy constructor called" << std::endl;
  *this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed) {
  std::cout << "Copy assignment operator called" << std::endl;
  if (this != &fixed)
    this->fixed_pt = fixed.fixed_pt;
  return *this;
}

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

void Fixed::setRawBits(int const raw) {
  std::cout << "setRawBits member function called" << std::endl;
  fixed_pt = raw;
}

int Fixed::getRawBits(void) const {
  std::cout << "getRawBits member function called" << std::endl;
  return fixed_pt;
}

Fixed::Fixed(const int i) {
  std::cout << "Int constructor called" << std::endl;
  fixed_pt = i * (1 << fractional_bits);
}

Fixed::Fixed(const float f) {
  std::cout << "Float constructor called" << std::endl;
  fixed_pt = roundf(f * (1 << fractional_bits));
}

float Fixed::toFloat() const {
  return (static_cast<float>(fixed_pt) / (1 << fractional_bits));
}

int Fixed::toInt() const { return (fixed_pt / (1 << fractional_bits)); }

std::ostream& operator<<(std::ostream& os, const Fixed& f)
{
  os << f.toFloat();
  return os;
}
