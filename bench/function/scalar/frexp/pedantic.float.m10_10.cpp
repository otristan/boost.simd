// -------------------------------------------------------------------------------------------------
//                              Copyright 2016 - NumScale SAS
//
//                   Distributed under the Boost Software License, Version 1.0.
//                        See accompanying file LICENSE.txt or copy at
//                            http://www.boost.org/LICENSE_1_0.txt
// -------------------------------------------------------------------------------------------------

/// bench for functor frexp in scalar mode for float type with pedantic_.
#include <simd_bench.hpp>
#include <boost/simd/function/frexp.hpp>

namespace nsb = ns::bench;
namespace bs =  boost::simd;

DEFINE_SCALAR_BENCH(scalar_frexp, bs::pedantic_(bs::frexp));

DEFINE_BENCH_MAIN()
{
  nsb::for_each<scalar_frexp, float>(-10, 10);
}