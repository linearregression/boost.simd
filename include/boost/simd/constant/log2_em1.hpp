//==================================================================================================
/*!
  @file

  @copyright 2016 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_CONSTANT_LOG2_EM1_HPP_INCLUDED
#define BOOST_SIMD_CONSTANT_LOG2_EM1_HPP_INCLUDED



  /*!
  @ingroup group-constant
  @defgroup constant-Log2_em1 Log2_em1 (function template)

    Generates constant Log2_em1 : \f$\log2(e)-1\f$

    @headerref{<boost/simd/constant/log2_em1.hpp>}

    @par Description

    1.  @code
        template<typename T> auto Log2_em1();
        @endcode

    2.  @code
        template<typename T> auto Log2_em1( boost::simd::as_<T> const& target );
        @endcode

    1. and 2.  return a value of type @c T containing the Log2_em1 constant.


    @par Parameters

    | Name                | Description                                                         |
    |--------------------:|:--------------------------------------------------------------------|
    | **target**          | a [placeholder](@ref type-as) value encapsulating the constant type |

    @par Return Value
    1.  A value of type @c T so that:
    @code
    T r = Log2_em1<T>();
    @endcode


    2.  A value of type @c T so that:
    @code
    T x, r = Log2_em1( boost::simd::as(x));
    @endcode
    is equivalent to:
    @code
    T r = Log2_em1<T>();
    @endcode

    @par Requirements
    - **T** models Value
  **/

#include <boost/simd/constant/scalar/log2_em1.hpp>
#include <boost/simd/constant/simd/log2_em1.hpp>

#endif
