//==================================================================================================
/*!
  @file

  @copyright 2016 NumScale SAS
  @copyright 2016 J.T. Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_IFNOTSUB_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_IFNOTSUB_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{

 /*!

    @ingroup group-boolean
    Function object implementing ifnotsub capabilities

    The function returns the second entry or the difference of the second
    and third entries, according to the first entry being @ref True or
    @ref False

    @par Semantic:

     For every parameters of types respectively C, T, T:

    @code
    T1 r = ifnotadd(cond,t1,t2);
    @endcode

    is similar to:

    @code
    T1 r = cond ? t1 :  t1-t2;
    @endcode

  **/
  const boost::dispatch::functor<tag::ifnotsub_> ifnotsub = {};
} }
#endif

#include <boost/simd/function/scalar/ifnotsub.hpp>
#include <boost/simd/function/simd/ifnotsub.hpp>

#endif
