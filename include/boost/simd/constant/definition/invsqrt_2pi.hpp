//==================================================================================================
/*!
  @file

  @copyright 2016 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_CONSTANT_DEFINITION_INVSQRT_2PI_HPP_INCLUDED
#define BOOST_SIMD_CONSTANT_DEFINITION_INVSQRT_2PI_HPP_INCLUDED

#include <boost/simd/config.hpp>
#include <boost/simd/detail/nsm.hpp>
#include <boost/simd/detail/dispatch.hpp>
#include <boost/simd/detail/constant_traits.hpp>
#include <boost/simd/detail/dispatch/function/make_callable.hpp>
#include <boost/simd/detail/dispatch/hierarchy/functions.hpp>
#include <boost/simd/detail/dispatch/as.hpp>

namespace boost { namespace simd
{
  namespace tag
  {
    struct invsqrt_2pi_ : boost::dispatch::constant_value_<invsqrt_2pi_>
    {
      BOOST_DISPATCH_MAKE_CALLABLE(ext,invsqrt_2pi_,boost::dispatch::constant_value_<invsqrt_2pi_>);
      BOOST_SIMD_REGISTER_CONSTANT(0, 0X3ECC422A, 0X3FD9884533D43651LL);
    };
  }

  namespace ext
  {
    BOOST_DISPATCH_FUNCTION_DECLARATION(tag, invsqrt_2pi_)
  }

  namespace detail
  {
    BOOST_DISPATCH_CALLABLE_DEFINITION(tag::invsqrt_2pi_,invsqrt_2pi);
  }

  template<typename T> BOOST_FORCEINLINE auto Invsqrt_2pi()
  BOOST_NOEXCEPT_DECLTYPE(detail::invsqrt_2pi( boost::dispatch::as_<T>{}))
  {
    return detail::invsqrt_2pi( boost::dispatch::as_<T>{} );
  }

  template<typename T> BOOST_FORCEINLINE
  auto Invsqrt_2pi(boost::dispatch::as_<T> const&) BOOST_NOEXCEPT_DECLTYPE(Invsqrt_2pi<T>())
  {
    return Invsqrt_2pi<T>();
  }
} }

#endif
