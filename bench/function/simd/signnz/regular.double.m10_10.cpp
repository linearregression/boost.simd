// -------------------------------------------------------------------------------------------------
//                              Copyright 2016 - NumScale SAS
//
//                   Distributed under the Boost Software License, Version 1.0.
//                        See accompanying file LICENSE.txt or copy at
//                            http://www.boost.org/LICENSE_1_0.txt
// -------------------------------------------------------------------------------------------------

/// bench for functor signnz in simd mode for double type with no decorator (regular call).
#include <simd_bench.hpp>
#include <boost/simd/function/signnz.hpp>

namespace nsb = ns::bench;
namespace bs =  boost::simd;

DEFINE_BENCH_MAIN()
{
  using T = bs::pack<double>;
  run<T>(bs::signnz, nsbg::rand<T>(-10, 10));
}
