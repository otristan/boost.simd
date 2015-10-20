//==================================================================================================
/*!
  @file

  @copyright 2012-2015 NumScale SAS
  @copyright 2015 J.T.Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_AVERAGE_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_AVERAGE_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{
  /*!
  @ingroup group-arithmetic

    Computes average value of its parameter.

  **/
  template<typename T> auto average(T const& x) {}

  namespace functional
  {
    /*!
      @ingroup group-arithmetic

      Function object tied to simd::average

      @see simd::average
    **/
    const boost::dispatch::functor<tag::average_> average = {};
  }
} }
#endif

#include <boost/simd/function/definition/average.hpp>
#include <boost/simd/arch/common/generic/function/average.hpp>
//#include <boost/simd/arch/common/function/simd/average.hpp>

#endif