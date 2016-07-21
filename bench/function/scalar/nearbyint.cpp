// -------------------------------------------------------------------------------------------------
//                              Copyright 2016 - NumScale SAS
//
//                   Distributed under the Boost Software License, Version 1.0.
//                        See accompanying file LICENSE.txt or copy at
//                            http://www.boost.org/LICENSE_1_0.txt
// -------------------------------------------------------------------------------------------------

#include <simd_bench.hpp>
#include <boost/simd/function/simd/round2even.hpp>
#include <cmath>

namespace nsb = ns::bench;

DEFINE_SCALAR_BENCH(scalar_round2even, boost::simd::round2even);

DEFINE_BENCH_MAIN()
{
  nsb::for_each<scalar_round2even, NS_BENCH_IEEE_TYPES>(-10, 10);
}
