//==================================================================================================
/*!
  @file

  @copyright 2016 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_CONSTANT_INVPI_HPP_INCLUDED
#define BOOST_SIMD_CONSTANT_INVPI_HPP_INCLUDED

  /*!
  @ingroup group-constant
  @defgroup constant-Invpi Invpi (function object)

    Constant\f$\frac1\pi\f$.

    @headerref{<boost/simd/constant/invpi.hpp>}

    @par Description

    1.  @code
        template<typename T> auto Invpi();
        @endcode

    2.  @code
        template<typename T> auto Invpi( boost::simd::as_<T> const& target );
        @endcode

    1. and 2.  return a value of type @c T containing the Invpi constant.


    @par Parameters

    | Name                | Description                                                         |
    |--------------------:|:--------------------------------------------------------------------|
    | **target**          | a [placeholder](@ref type-as) value encapsulating the constant type |

    @par Return Value
    1.  A value of type @c T so that:
    @code
    T r = Invpi<T>();
    @endcode
    is similar to:
    @code
    T r = rec(Pi<T>());
    @endcode

    2.  A value of type @c T so that:
    @code
    T x, r = Invpi( boost::simd::as(x));
    @endcode
    is equivalent to:
    @code
    T r = Invpi<T>();
    @endcode

    @par Requirements
    - **T** models Vectorizable
  **/

#include <boost/simd/constant/scalar/invpi.hpp>
#include <boost/simd/constant/simd/invpi.hpp>

#endif
