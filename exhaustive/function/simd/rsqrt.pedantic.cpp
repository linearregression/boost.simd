//==============================================================================
//         Copyright 2016        NumScale SAS
//
//          Distributed under the Boost Software License, Version 1.0.
//                 See accompanying file LICENSE.txt or copy at
//                     http://www.boost.org/LICENSE_1_0.txt
//==============================================================================
#include <boost/simd/function/rsqrt.hpp>
#include <boost/simd/constant/zero.hpp>
#include <boost/simd/constant/valmax.hpp>

#include <boost/simd/pack.hpp>
#include <exhaustive.hpp>

#include <cmath>
#include <cstdlib>

struct raw_rsqrt
{
  float operator()(float x) const
  {
    return 1.0/bs::sqrt(double(x));
  }
};

int main(int argc, char* argv[])
{
  float mini = bs::Zero<float>();
  float maxi = bs::Valmax<float>();
  if(argc >= 2) mini = std::atof(argv[1]);
  if(argc >= 3) maxi = std::atof(argv[2]);
  bs::exhaustive_test<bs::pack<float>> ( mini
                                       , maxi
                                       , bs::pedantic_(bs::rsqrt)
                                       , raw_rsqrt()
                                       );

  return 0;
}

