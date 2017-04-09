//==================================================================================================
/*!
  @file

  @copyright 2016 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_CONSTANT_MHALF_HPP_INCLUDED
#define BOOST_SIMD_CONSTANT_MHALF_HPP_INCLUDED



  /*!
  @ingroup group-constant
  @defgroup constant-Mhalf Mhalf (function object)

    Generates -0.5.

    @headerref{<boost/simd/constant/mhalf.hpp>}

    @par Description

    1.  @code
        template<typename T> auto Mhalf();
        @endcode

    2.  @code
        template<typename T> auto Mhalf( boost::simd::as_<T> const& target );
        @endcode

    1. and 2.  return a value of type @c T containing the Mhalf constant.


    @par Parameters

    | Name                | Description                                                         |
    |--------------------:|:--------------------------------------------------------------------|
    | **target**          | a [placeholder](@ref type-as) value encapsulating the constant type |

    @par Return Value
    1.  A value of type @c T so that:
    @code
    T r = T(0.5);
    @endcode


    2.  A value of type @c T so that:
    @code
    T x, r = Mhalf( boost::simd::as(x));
    @endcode
    is equivalent to:
    @code
    T r = Mhalf<T>();
    @endcode

    @par Requirements
    - **T** models Vectorizable
  **/

#include <boost/simd/constant/scalar/mhalf.hpp>
#include <boost/simd/constant/simd/mhalf.hpp>

#endif
