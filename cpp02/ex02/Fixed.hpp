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

  bool operator>(const Fixed& fixed)const;
  bool operator<(const Fixed& fixed)const;
  bool operator>=(const Fixed& fixed)const;
  bool operator<=(const Fixed& fixed)const;
  bool operator==(const Fixed& fixed)const;
  bool operator!=(const Fixed& fixed)const;

  Fixed operator+(const Fixed& fixed)const;
  Fixed operator-(const Fixed& fixed)const;
  Fixed operator*(const Fixed& fixed)const;
  Fixed operator/(const Fixed& fixed)const;

  Fixed& operator++();
  Fixed operator++(int);
  Fixed& operator--();
  Fixed operator--(int);

  static Fixed& min(Fixed &fixed1, Fixed &fixed2);
  static const Fixed& min(const Fixed &fixed1, const Fixed &fixed2);
  static Fixed& max(Fixed &fixed1, Fixed &fixed2);
  static const Fixed& max(const Fixed &fixed1, const Fixed &fixed2);
};

std::ostream& operator<<(std::ostream& os, const Fixed& f);

#endif
