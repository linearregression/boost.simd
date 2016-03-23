//==================================================================================================
/*!
  @file

  @copyright 2016 NumScale SAS
  @copyright 2016 J.T. Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_PROD_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_PROD_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{

 /*!

    @ingroup group-reduction
    Function object implementing prod capabilities

    Returns the product of the elements of the SIMD vector

    @par Semantic:

    For every parameter of type T

    @code
    scalar<T> r = prod(x);
    @endcode

    is similar to:

    @code
    scalar<T> r = One;
    for(result_type i = 0; i != cardinal_of<T>; ++i)
      r *= x[i];
    @endcode

  **/
  const boost::dispatch::functor<tag::prod_> prod = {};
} }
#endif

#include <boost/simd/function/scalar/prod.hpp>
#include <boost/simd/function/simd/prod.hpp>

#endif
