//==================================================================================================
/*!
  @file

  @copyright 2016 NumScale SAS
  @copyright 2016 J.T. Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_LOG10_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_LOG10_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{

 /*!

    @ingroup group-exponential
    Function object implementing log10 capabilities

    base ten logarithm function. For integer input types log10 return the truncation
    of the real result.

    @par Semantic:

    For every parameter of floating type T

    @code
    T r = log10(x);
    @endcode

    is similar to:

    @code
    T r = log(x)/log(10);
    @endcode

    - log10(x) return Nan for negative enties (peculiarly Mzero
    for floating numbers).

    - The call log10(x, assert_) asserts is x is negative (peculiarly
    take care that it asserts for Mzero but not Zero in case of floating numbers)

    @par Decorators

    std_ for floating entries

    @see log, log2, log1p, is_negative, Mzero

  **/
  const boost::dispatch::functor<tag::log10_> log10 = {};
} }
#endif

#include <boost/simd/function/scalar/log10.hpp>
#include <boost/simd/function/simd/log10.hpp>

#endif
