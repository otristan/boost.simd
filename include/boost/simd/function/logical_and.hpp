//==================================================================================================
/*!
  @file

  @copyright 2012-2015 NumScale SAS
  @copyright 2015 J.T.Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_LOGICAL_AND_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_LOGICAL_AND_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{
  /*!

    @ingroup group-boolean

    return the logical and of the two parameters.

    The operands must share the same @ref cardinal_of value.

    Infix notation can be used with operator '&&'.

    @par Semantic:

    For every parameters of types respectively T0, T1:

    @code
    as_logical_t<T0> r = logical_and(x,y);
    @endcode

    is similar to:

    @code
    as_logical_t<T0> r = x && y ;
    @endcode

    @par Alias:
    @c l_and

    @see  logical_or, logical_xor, logical_notand,
    logical_andnot, logical_notor, logical_ornot, logical_not


    @return  a value of the logical type associated to the first parameter


**/
  template<typename T1, typename T2> auto logical_and(T1 const& x, T2 const& y) {}

  namespace functional
  {
    /*!
      @ingroup group-callable-boolean

      return the logical and of the two parameters.


      Function object tied to simd::logical_and

      @see simd::logical_and
    **/
    const boost::dispatch::functor<tag::logical_and_> logical_and = {};
  }
} }
#endif

#include <boost/simd/function/scalar/logical_and.hpp>
#include <boost/simd/function/simd/logical_and.hpp>

#endif
