// -------------------------------------------------------------------------------------------------
//                              Copyright 2016 - NumScale SAS
//
//                   Distributed under the Boost Software License, Version 1.0.
//                        See accompanying file LICENSE.txt or copy at
//                            http://www.boost.org/LICENSE_1_0.txt
// -------------------------------------------------------------------------------------------------

#include <simd_bench.hpp>
#include <boost/simd/function/simd/is_less_equal.hpp>

namespace nsb = ns::bench;
namespace bs =  boost::simd;

DEFINE_SCALAR_BENCH(scalar_is_less_equal, bs::is_less_equal);

DEFINE_BENCH_MAIN()
{
  nsb::for_each<scalar_is_less_equal, NS_BENCH_IEEE_TYPES>(-10, 10,-10, 10);
}