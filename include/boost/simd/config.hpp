//==================================================================================================
/*!
  @file

  Defines various macro for controlling Boost.SIMD behavior

  @copyright 2012 - 2015 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)

**/
//==================================================================================================
#ifndef BOOST_SIMD_CONFIG_HPP_INCLUDED
#define BOOST_SIMD_CONFIG_HPP_INCLUDED

// Setup the dispatch default architecture
#if !defined(BOOST_DISPATCH_DEFAULT_SITE)
#  include <boost/simd/arch/spec.hpp>
#  define BOOST_DISPATCH_DEFAULT_SITE BOOST_SIMD_DEFAULT_SITE
#  include <boost/dispatch/hierarchy/default_site.hpp>
#endif

// decltype + noexcept combo
#define BOOST_NOEXCEPT_DECLTYPE(X) BOOST_NOEXCEPT_IF(BOOST_NOEXCEPT_EXPR(X)) -> decltype(X)

#if defined(__FAST_MATH__) && !defined(BOOST_SIMD_FAST_MATH) || defined(DOXYGEN_ONLY)

  /*!
    @ingroup group-config
    @brief Fast math behavior option

    By defining this symbol or passing -ffast-math option to the compiler, Boost.SIMD mathematical
    functions will change behaviour to align with standard definition of fast IEEE math which
    includes:

    - No handling for NaN values
    - No handling for infinite values
    - No handling for denormals
    - No handling for -0.

    @see BOOST_SIMD_NO_NANS
    @see BOOST_SIMD_NO_MINUSZERO
    @see BOOST_SIMD_NO_INFINITIES
    @see BOOST_SIMD_NO_DENORMALS
  **/
  #define BOOST_SIMD_FAST_MATH

#endif

#if defined(BOOST_SIMD_FAST_MATH) && !defined(BOOST_SIMD_NO_NANS) || defined(DOXYGEN_ONLY)

  /*!
    @ingroup group-config
    @brief NaN handling behavior option

    By defining this symbol, Boost.SIMD mathematical functions will ignore NaN values passed as input
    and won't try to behave correctly if NaN are generated in intermediate computations. This option
    usually provides increased performances at the cost of correct handling of NaN related corner
    cases.

    @see BOOST_SIMD_NO_INVALIDS
    @see BOOST_SIMD_FAST_MATH
  **/
  #define BOOST_SIMD_NO_NANS

#endif

#if defined(BOOST_SIMD_FAST_MATH) && !defined(BOOST_SIMD_NO_MINUSZERO) || defined(DOXYGEN_ONLY)

  /*!
    @ingroup group-config
    @brief Negative zero handling behavior option

    By defining this symbol, Boost.SIMD mathematical functions will not take care of handling zero
    and minus zero properly. This option usually provides increased performances at the cost of
    correct handling of negative zeros related corner cases.

    @see BOOST_SIMD_FAST_MATH
  **/
  #define BOOST_SIMD_NO_MINUSZERO

#endif

#if defined(BOOST_SIMD_FAST_MATH) && !defined(BOOST_SIMD_NO_INFINITIES) || defined(DOXYGEN_ONLY)

  /*!
    @ingroup group-config
    @brief Infinites handling behavior option

    By defining this symbol, Boost.SIMD mathematical functions will not take care of handling
    infinites properly. This option usually provides increased performances at the cost of
    correct handling of infinites related corner cases.

    @see BOOST_SIMD_NO_INVALIDS
    @see BOOST_SIMD_FAST_MATH
  **/
  #define BOOST_SIMD_NO_INFINITIES

#endif

#if defined(BOOST_SIMD_FAST_MATH) && !defined(BOOST_SIMD_NO_DENORMALS) || defined(DOXYGEN_ONLY)

  /*!
    @ingroup group-config
    @brief Denormals handling behavior option

    By defining this symbol, Boost.SIMD mathematical functions will ignore denormals passed as input
    and won't try to behave correctly if denormals are generated in intermediate computations.
    This option usually provides increased performances at the cost of correct handling of denormals
    related corner cases.

    @see BOOST_SIMD_FAST_MATH
  **/
  #define BOOST_SIMD_NO_DENORMALS

#endif

#if     defined(BOOST_SIMD_NO_NANS)     && defined(BOOST_SIMD_NO_INFINITIES) \
    && !defined(BOOST_SIMD_NO_INVALIDS) || defined(DOXYGEN_ONLY)

  /*!
    @ingroup group-config
    @brief Invalid values handling behavior option

    By defining this symbol, Boost.SIMD mathematical functions will ignore all invalid values
    - namely NaNs and infinites - passed as input and won't try to behave correctly if those are
    generated in intermediate computations. This option usually provides increased performances
    at the cost of correct handling of invalid related corner cases.

    @see BOOST_SIMD_NO_NANS
    @see BOOST_SIMD_NO_INFINITIES
  **/
  #define BOOST_SIMD_NO_INVALIDS

#elif defined(BOOST_SIMD_NO_INVALIDS)
#define BOOST_SIMD_NO_NANS
#define BOOST_SIMD_NO_INFINITIES
#endif

#endif
