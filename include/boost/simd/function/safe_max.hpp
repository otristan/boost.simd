//==================================================================================================
/*!
  @file

  @copyright 2012-2015 NumScale SAS
  @copyright 2015 J.T.Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_SAFE_MAX_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_SAFE_MAX_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{
  /*!

    @ingroup group-ieee

    Returns a safe_max relative to the input,  i.e. a
    value which will not overflow when multiplied by the input.

    @par Semantic:

    @code
    T r = safe_max(x);
    @endcode

    is similar to:

    @code
    T r = x ? Sqrtvalmax<T>()/abs(x) : Inf<T>();
    @endcode

    @see Sqrtvalmax

    @return a value of same type as the input

**/
  template<typename T> auto safe_max(T const& x) {}

  namespace functional
  {
    /*!
      @ingroup group-callable-ieee

      Returns a safe_max relative to the input,  i.e. a
      value which will not overflow when multiplied by the input.


      Function object tied to simd::safe_max

      @see simd::safe_max
    **/
    const boost::dispatch::functor<tag::safe_max_> safe_max = {};
  }
} }
#endif

#include <boost/simd/function/scalar/safe_max.hpp>
#include <boost/simd/function/simd/safe_max.hpp>

#endif
