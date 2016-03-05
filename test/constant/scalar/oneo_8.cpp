//==================================================================================================
/*!

  Copyright 2015 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#include <boost/simd/constant/oneo_8.hpp>
#include <boost/simd/as.hpp>
#include <stf.hpp>

STF_CASE_TPL( "Check oneo_8 behavior for integral types"
            , (std::uint8_t)(std::uint16_t)(std::uint32_t)(std::uint64_t)
              (std::int8_t)(std::int16_t)(std::int32_t)(std::int64_t)
            )
{
  using boost::simd::as;
  using boost::simd::detail::oneo_8;
  using boost::simd::Oneo_8;

  STF_TYPE_IS(decltype(Oneo_8<T>()), T);
  STF_EQUAL(Oneo_8<T>(), T(0));
  STF_EQUAL(oneo_8( as(T{}) ),T(0));
}

STF_CASE_TPL( "Check oneo_8 behavior for floating types"
            , (double)(float)
            )
{
  using boost::simd::as;
  using boost::simd::detail::oneo_8;
  using boost::simd::Oneo_8;

  STF_TYPE_IS(decltype(Oneo_8<T>()), T);
  STF_IEEE_EQUAL(Oneo_8<T>(), T(1/8.0));
  STF_IEEE_EQUAL(oneo_8( as(T{}) ), T(1/8.0));
}
