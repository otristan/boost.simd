//==================================================================================================
/*!
  @file

  @copyright 2012-2015 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_CONSTANT_FOURTHROOTEPS_HPP_INCLUDED
#define BOOST_SIMD_CONSTANT_FOURTHROOTEPS_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{
  /*!
    @ingroup group-constant

    Generate the 4th root of constant @c Eps.

    @par Semantic:

    @code
    T r = Fourthrooteps<T>();
    @endcode

    is similar to:

    @code
    if T is integral
      r = T(1)
    else if T is double
      r =  pow(2.0, -13);
    else if T is float
      r =  pow(2.0f, -5.75f);
    @endcode

    @return The Fourthrooteps constant for the proper type
  **/
  template<typename T> T Fourthrooteps();

  namespace functional
  {
    /*!
      @ingroup group-constant
      Generate the  constant fourthrooteps.

      @return The Fourthrooteps constant for the proper type
    **/
    const boost::dispatch::functor<tag::fourthrooteps_> fourthrooteps = {};
  }
} }
#endif

#include <boost/simd/constant/definition/fourthrooteps.hpp>
#include <boost/simd/arch/common/scalar/constant/constant_value.hpp>

#endif
