//==================================================================================================
/*
  Copyright 2017 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#include <boost/simd/type/complex/function/is_inf.hpp>
#include <boost/simd/type/complex.hpp>
#include <boost/simd/constant/inf.hpp>
#include <boost/simd/constant/minf.hpp>
#include <boost/simd/constant/nan.hpp>
#include <boost/simd/pack.hpp>
#include <simd_test.hpp>
#include <boost/simd/meta/as_logical.hpp>

namespace bs = boost::simd;

STF_CASE_TPL( "Complex is_inf on complex<T>", STF_IEEE_TYPES)
{
  bs::complex<T> r0(0,4), r1(4,0), r2(bs::Inf<T>(),3), r3(-1,bs::Inf<T>())
    , r4(bs::Minf<T>(),-1), r5(-2,bs::Nan<T>());

  STF_EQUAL(bs::is_inf(r0), false);
  STF_EQUAL(bs::is_inf(r1), false);
  STF_EQUAL(bs::is_inf(r2), true);
  STF_EQUAL(bs::is_inf(r3), true);
  STF_EQUAL(bs::is_inf(r4), true);
  STF_EQUAL(bs::is_inf(r5), false);
}