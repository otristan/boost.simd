//==================================================================================================
/*!
  @file

  @copyright 2016 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_CONSTANT_FACT_7_HPP_INCLUDED
#define BOOST_SIMD_CONSTANT_FACT_7_HPP_INCLUDED



  /*!
  @ingroup group-constant
  @defgroup constant-Fact_7 Fact_7 (function object)

    Generates 7! that is 5040

    @headerref{<boost/simd/constant/fact_7.hpp>}

    @par Description

    1.  @code
        template<typename T> auto Fact_7();
        @endcode

    2.  @code
        template<typename T> auto Fact_7( boost::simd::as_<T> const& target );
        @endcode

    1. and 2.  return a value of type @c T containing the Fact_7 constant.


    @par Parameters

    | Name                | Description                                                         |
    |--------------------:|:--------------------------------------------------------------------|
    | **target**          | a [placeholder](@ref type-as) value encapsulating the constant type |

    @par Return Value
    1.  A value of type @c T so that:
    @code
    T r = Fact_7<T>();
    @endcode
    is similar to:
    @code
    T r = T(5040);
    @endcode

    2.  A value of type @c T so that:
    @code
    T x, r = Fact_7( boost::simd::as(x));
    @endcode
    is equivalent to:
    @code
    T r = Fact_7<T>();
    @endcode

    @par Requirements
    - **T** models Vectorizable
  **/

#include <boost/simd/constant/scalar/fact_7.hpp>
#include <boost/simd/constant/simd/fact_7.hpp>

#endif
