#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>

class Fixed {
private:
  int fixed_pt;
  static const int fractional_bits = 8;

public:
  Fixed();
  Fixed(const Fixed &fixed);
  Fixed &operator=(const Fixed &fixed);
  ~Fixed();

  void setRawBits(int const raw);
  int getRawBits(void) const;

  Fixed(const int);
  Fixed(const float);
  float toFloat(void) const;
  int toInt(void) const;
  
};

std::ostream& operator<<(std::ostream& os, const Fixed& f);

#endif
