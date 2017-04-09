//==================================================================================================
/*!
  @file

  @copyright 2016 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_CONSTANT_PIO_2_HPP_INCLUDED
#define BOOST_SIMD_CONSTANT_PIO_2_HPP_INCLUDED



  /*!
  @ingroup group-constant
  @defgroup constant-Pio_2 Pio_2 (function object)

    Generates \f$\frac\pi{2}\f$.

    @headerref{<boost/simd/constant/pio_2.hpp>}

    @par Description

    1.  @code
        template<typename T> auto Pio_2();
        @endcode

    2.  @code
        template<typename T> auto Pio_2( boost::simd::as_<T> const& target );
        @endcode

    1. and 2.  return a value of type @c T containing the Pio_2 constant.


    @par Parameters

    | Name                | Description                                                         |
    |--------------------:|:--------------------------------------------------------------------|
    | **target**          | a [placeholder](@ref type-as) value encapsulating the constant type |

    @par Return Value
    1.  A value of type @c T so that:
    @code
    T r = Pio_2<T>();
    @endcode
    is similar to:
    @code
    T r = T(2*atan(1));
    @endcode

    2.  A value of type @c T so that:
    @code
    T x, r = Pio_2( boost::simd::as(x));
    @endcode
    is equivalent to:
    @code
    T r = Pio_2<T>();
    @endcode

    @par Requirements
    - **T** models Vectorizable
  **/

#include <boost/simd/constant/scalar/pio_2.hpp>
#include <boost/simd/constant/simd/pio_2.hpp>

#endif
