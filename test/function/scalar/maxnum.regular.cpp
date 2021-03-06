//==================================================================================================
/*!

  Copyright 2016 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#include <boost/simd/function/scalar/maxnum.hpp>
#include <boost/simd/function/std.hpp>
#include <scalar_test.hpp>
#include <boost/simd/detail/dispatch/meta/as_integer.hpp>
#include <boost/simd/constant/inf.hpp>
#include <boost/simd/constant/minf.hpp>
#include <boost/simd/constant/mone.hpp>
#include <boost/simd/constant/nan.hpp>
#include <boost/simd/constant/one.hpp>
#include <boost/simd/constant/zero.hpp>
#include <boost/simd/constant/two.hpp>
#include <boost/simd/constant/mtwo.hpp>


STF_CASE_TPL (" maxnum real",  STF_IEEE_TYPES)
{
  namespace bs = boost::simd;
  namespace bd = boost::dispatch;
  using bs::maxnum;

  using r_t = decltype(maxnum(T(), T()));

  // return type conformity test
  STF_TYPE_IS(r_t, T);

  // specific values tests
#ifndef BOOST_SIMD_NO_INVALIDS
  STF_EQUAL(maxnum(bs::Inf<T>(),  bs::Inf<T>()),  bs::Inf<r_t>());
  STF_EQUAL(maxnum(bs::Minf<T>(), bs::Minf<T>()), bs::Minf<r_t>());
  STF_IEEE_EQUAL(maxnum(bs::Nan<T>(),  bs::Nan<T>()),  bs::Nan<r_t>());
  STF_EQUAL(maxnum(bs::Nan<T>(),  bs::One<T>()),  bs::One<r_t>());
  STF_EQUAL(maxnum(bs::One<T>(),  bs::Nan<T>()),  bs::One<r_t>());
  STF_EQUAL(maxnum(bs::Nan<T>(),  bs::One <T>()), bs::One<r_t>());
#endif
  STF_EQUAL(maxnum(bs::Mone<T>(), bs::Mone<T>()), bs::Mone<r_t>());
  STF_EQUAL(maxnum(bs::One<T>(),  bs::One<T>()),  bs::One<r_t>());
  STF_EQUAL(maxnum(bs::Zero<T>(), bs::Zero<T>()), bs::Zero<r_t>());
  STF_EQUAL(maxnum(bs::Mone<T>(), bs::One <T>()), bs::One<r_t>());
  STF_EQUAL(maxnum(bs::One <T>(), bs::Mone<T>()), bs::One<r_t>());
  STF_EQUAL(maxnum(bs::One <T>(), bs::Two <T>()), bs::Two<r_t>());
  STF_EQUAL(maxnum(bs::Two <T>(), bs::One <T>()), bs::Two<r_t>());
  STF_EQUAL(maxnum(bs::Mtwo<T>(), bs::One <T>()), bs::One<r_t>());
  STF_EQUAL(maxnum(bs::One <T>(), bs::Mtwo<T>()), bs::One<r_t>());
  STF_EQUAL(maxnum(bs::Two <T>(), bs::Mone<T>()), bs::Two<r_t>());
  STF_EQUAL(maxnum(bs::Mone<T>(), bs::Two <T>()), bs::Two<r_t>());
}



STF_CASE_TPL (" maxnum unsigned_int",  STF_UNSIGNED_INTEGRAL_TYPES)
{
  namespace bs = boost::simd;
  namespace bd = boost::dispatch;
  using bs::maxnum;

  using r_t = decltype(maxnum(T(), T()));

  // return type conformity test
  STF_TYPE_IS(r_t, T);

  // specific values tests
  STF_EQUAL(maxnum(bs::One<T>(), bs::One<T>()), bs::One<r_t>());
  STF_EQUAL(maxnum(bs::Zero<T>(), bs::Zero<T>()), bs::Zero<r_t>());
}

STF_CASE_TPL (" maxnum signed_int",  STF_SIGNED_INTEGRAL_TYPES)
{
  namespace bs = boost::simd;
  namespace bd = boost::dispatch;
  using bs::maxnum;

  using r_t = decltype(maxnum(T(), T()));

  // return type conformity test
  STF_TYPE_IS(r_t, T);

  // specific values tests
  STF_EQUAL(maxnum(bs::Mone<T>(), bs::Mone<T>()), bs::Mone<r_t>());
  STF_EQUAL(maxnum(bs::One<T>(), bs::One<T>()), bs::One<r_t>());
  STF_EQUAL(maxnum(bs::Zero<T>(), bs::Zero<T>()), bs::Zero<r_t>());
}


