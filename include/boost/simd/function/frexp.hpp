//==================================================================================================
/*!
  @file

  @copyright 2012-2015 NumScale SAS
  @copyright 2015 J.T.Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_FREXP_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_FREXP_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{
  /*!

    @ingroup group-ieee

    Computes a mantissa and an exponent pair for the input

    @code
    m = frexp(x, e);
    @endcode

    is similar to:

    @code
    as_integer_t<T> e = exponent(x)+1;
    T m = mantissa(x)/2;
    @endcode

    The call

    @code
    std:pair<T,as_integer_t<T>> p = frexp(x);
    @endcode

    can also be used.

    @par Note:

    @c frexp splits a floating point value @c v f in a signed mantissa @c m and
    an exponent @c e so that:  @f$v = m\times 2^e@f$, with absolute value of @c m
    between 0.5 (included) and 1 (excluded)

    Take care that these results differ from the returns of the functions @ref mantissa
    and @ref exponent

    @see exponent,  mantissa

**/
  template<typename T> auto frexp(T const& x) {}

  namespace functional
  {
    /*!
      @ingroup group-callable-ieee

      Computes the mantissa and the exponent of the input


      Function object tied to simd::frexp

      @see simd::frexp
    **/
    const boost::dispatch::functor<tag::frexp_> frexp = {};
  }
} }
#endif

#include <boost/simd/function/scalar/frexp.hpp>
#include <boost/simd/function/scalar/frexp.hpp>
#include <boost/simd/function/simd/frexp.hpp>

#endif
