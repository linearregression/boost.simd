//==================================================================================================
/*!
  @file

  @copyright 2012-2015 NumScale SAS
  @copyright 2015 J.T.Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_DIVROUND2EVEN_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_DIVROUND2EVEN_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{
  /*!
  @ingroup group-arithmetic

    Computes divround2even value of its parameter.

  **/
  template<typename T> auto divround2even(T const& x) {}

  namespace functional
  {
    /*!
      @ingroup group-arithmetic

      Function object tied to simd::divround2even

      @see simd::divround2even
    **/
    const boost::dispatch::functor<tag::divround2even_> divround2even = {};
  }
} }
#endif

#include <boost/simd/function/definition/divround2even.hpp>
#include <boost/simd/arch/common/scalar/function/divround2even.hpp>
//#include <boost/simd/arch/common/function/simd/divround2even.hpp>

#endif