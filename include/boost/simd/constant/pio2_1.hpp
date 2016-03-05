//==================================================================================================
/*!
  @file

  @copyright 2015 NumScale SAS
  @copyright 2015 J.T. Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_CONSTANT_PIO2_1_HPP_INCLUDED
#define BOOST_SIMD_CONSTANT_PIO2_1_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{
  /*!

    @ingroup group-constant

    Constant used in modular computation involving \f$\pi\f$

    @par Semantic:

    For type T:

    @code
    T r = Pio2_1<T>();
    @endcode

    @return a value of type T

**/
  template<typename T> T Pio2_1();

  namespace functional
  {
    /*!
      @ingroup group-callable-constant


      Constant used in modular computation involving \f$\pi\f$

      Generate the  constant pio2_1.

      @return The Pio2_1 constant for the proper type
    **/
    const boost::dispatch::functor<tag::pio2_1_> pio2_1 = {};
  }
} }
#endif

#include <boost/simd/constant/definition/pio2_1.hpp>
#include <boost/simd/arch/common/scalar/constant/constant_value.hpp>
#include <boost/simd/arch/common/simd/constant/constant_value.hpp>

#endif
