// -------------------------------------------------------------------------------------------------
//                              Copyright 2017 - NumScale SAS
//
//                   Distributed under the Boost Software License, Version 1.0.
//                        See accompanying file LICENSE.txt or copy at
//                            http://www.boost.org/LICENSE_1_0.txt
// -------------------------------------------------------------------------------------------------

/// bench for functor min in simd mode for std::uint8_t type with pedantic_.
#include <simd_bench.hpp>
#include <boost/simd/function/min.hpp>

namespace nsb = ns::bench;
namespace bs =  boost::simd;

DEFINE_SIMD_BENCH(simd_min, bs::pedantic_(bs::min));

DEFINE_BENCH_MAIN()
{
  nsb::for_each<simd_min, std::uint8_t>(0, 10, 0, 10);
}
