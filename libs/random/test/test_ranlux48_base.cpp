/* test_ranlux48_base.cpp
 *
 * Copyright Steven Watanabe 2011
 * Distributed under the Boost Software License, Version 1.0. (See
 * accompanying file LICENSE_1_0.txt or copy at
 * http://www.boost.org/LICENSE_1_0.txt)
 *
 * $Id: test_ranlux48_base.cpp 74867 2011-10-09 23:13:31Z steven_watanabe $
 *
 */

#include <boost/random/ranlux.hpp>
#include <boost/cstdint.hpp>

#define BOOST_RANDOM_URNG boost::random::ranlux48_base

#define BOOST_RANDOM_SEED_WORDS 24

// validation from the C++0x draft (n3126).
#define BOOST_RANDOM_VALIDATION_VALUE UINT64_C(61839128582725)
#define BOOST_RANDOM_SEED_SEQ_VALIDATION_VALUE UINT64_C(15556320400833)
#define BOOST_RANDOM_ITERATOR_VALIDATION_VALUE UINT64_C(172853405006548)

#define BOOST_RANDOM_GENERATE_VALUES { 0xFCE57B2CU, 0xF2DF1555U, 0x1A0C0CD9U, 0x490109FAU }

#include "test_generator.ipp"
