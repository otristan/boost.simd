//==================================================================================================
/*!
  @file

  @copyright 2016 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_CONSTANT_INVEPS_HPP_INCLUDED
#define BOOST_SIMD_CONSTANT_INVEPS_HPP_INCLUDED



  /*!
  @ingroup group-constant
  @defgroup constant-Inveps Inveps (function object)

    Generates  value \f$\1/Eps<T>()\f$

    @headerref{<boost/simd/constant/inveps.hpp>}

    @par Description

    1.  @code
        template<typename T> auto Inveps();
        @endcode

    2.  @code
        template<typename T> auto Inveps( boost::simd::as_<T> const& target );
        @endcode

    1. and 2.  return a value of type @c T containing the Inveps constant.


    @par Parameters

    | Name                | Description                                                         |
    |--------------------:|:--------------------------------------------------------------------|
    | **target**          | a [placeholder](@ref type-as) value encapsulating the constant type |

    @par Return Value
    1.  A value of type @c T so that:
    @code
    T r = Inveps<T>();
    @endcode


    2.  A value of type @c T so that:
    @code
    T x, r = Inveps( boost::simd::as(x));
    @endcode
    is equivalent to:
    @code
    T r = Inveps<T>();
    @endcode

    @par Requirements
    - **T** models Vectorizable
  **/

#include <boost/simd/constant/scalar/inveps.hpp>
#include <boost/simd/constant/simd/inveps.hpp>

#endif
