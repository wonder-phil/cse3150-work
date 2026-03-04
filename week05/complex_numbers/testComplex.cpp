#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN 

#include "../include/doctest.h" 

#include "Complex.h"

 

TEST_CASE("Default constructor") { 

  const double _real{0.0}, _img{0.0};
  Complex complex;

  CHECK(complex.getReal() == _real);   
  CHECK(complex.getImg() == _img); 
} 

TEST_CASE("Custom constructor") { 

  const double _real{4.3}, _img{4.0};
  Complex complex(_real, _img);

  CHECK(complex.getReal() == _real);   
  CHECK(complex.getImg() == _img); 
} 


TEST_CASE("Complex assignment constructor") { 

  const double _real{4.3}, _img{4.0};
  Complex complex(_real, _img);

  Complex other;

  other = complex;
  CHECK(complex.getReal() == other.getReal());   
  CHECK(complex.getImg() == other.getImg()); 
} 
