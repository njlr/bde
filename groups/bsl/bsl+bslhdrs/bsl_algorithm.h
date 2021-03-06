// bsl_algorithm.h                                                    -*-C++-*-
#ifndef INCLUDED_BSL_ALGORITHM
#define INCLUDED_BSL_ALGORITHM

#ifndef INCLUDED_BSLS_IDENT
#include <bsls_ident.h>
#endif
BSLS_IDENT("$Id: $")

//@PURPOSE: Provide functionality of the corresponding C++ Standard header.
//
//@SEE_ALSO: package bsl+stdhdrs
//
//@DESCRIPTION: Provide types, in the 'bsl' namespace, equivalent to those
// defined in the corresponding C++ standard header.  Include the native
// compiler-provided standard header, and also directly include Bloomberg's
// implementation of the C++ standard type (if one exists).  Finally, place the
// included symbols from the 'std' namespace (if any) into the 'bsl' namespace.

#ifndef INCLUDED_BSLS_LIBRARYFEATURES
#include <bsls_libraryfeatures.h>
#endif

#ifndef INCLUDED_BSLS_NATIVESTD
#include <bsls_nativestd.h>
#endif

#ifndef INCLUDED_BSLS_PLATFORM
#include <bsls_platform.h>
#endif

#include <algorithm>

#ifdef BSLS_LIBRARYFEATURES_HAS_CPP11_ALGORITHMS
    #define USING_CPP11_NATIVE_STD(algo) using native_std::algo;
#else
    #define USING_CPP11_NATIVE_STD(algo)
#endif

namespace bsl {

    // Import selected symbols into bsl namespace
    using native_std::adjacent_find;
    USING_CPP11_NATIVE_STD(all_of);
    USING_CPP11_NATIVE_STD(any_of);
    using native_std::binary_search;
    using native_std::copy;
    using native_std::copy_backward;
    USING_CPP11_NATIVE_STD(copy_if);

    // 'copy_n' is implemented separately in 'bslstp_exalgorithm' for backwards
    // compatibility with the previous STLport definition (which differs from
    // the platform implementation).
    //
    // USING_CPP11_NATIVE_STD(copy_n);

    // 'count' and 'count_if' are provided in 'bslstl_algorithmworkaround' in
    // order to work-around the Sun standard library, libCstd.
    //
    // using native_std::count;
    // using native_std::count_if;

    using native_std::equal;
    using native_std::equal_range;
    using native_std::fill;
    using native_std::fill_n;
    using native_std::find;
    using native_std::find_end;
    using native_std::find_first_of;
    using native_std::find_if;
    USING_CPP11_NATIVE_STD(find_if_not);
    using native_std::for_each;
    using native_std::generate;
    using native_std::generate_n;
    using native_std::includes;
    using native_std::inplace_merge;
    USING_CPP11_NATIVE_STD(is_heap)
    USING_CPP11_NATIVE_STD(is_heap_until)
    USING_CPP11_NATIVE_STD(is_partitioned)
    USING_CPP11_NATIVE_STD(is_permutation)
    USING_CPP11_NATIVE_STD(is_sorted)
    USING_CPP11_NATIVE_STD(is_sorted_until)
    using native_std::iter_swap;
    using native_std::lexicographical_compare;
    using native_std::lower_bound;
    using native_std::make_heap;
    using native_std::max;
    using native_std::max_element;
    using native_std::merge;
    using native_std::min;
    USING_CPP11_NATIVE_STD(minmax);
    USING_CPP11_NATIVE_STD(minmax_element);
    using native_std::min_element;
    using native_std::mismatch;
    USING_CPP11_NATIVE_STD(move);
    USING_CPP11_NATIVE_STD(move_backward);
    using native_std::next_permutation;
    USING_CPP11_NATIVE_STD(none_of);
    using native_std::nth_element;
    using native_std::partial_sort;
    using native_std::partial_sort_copy;
    using native_std::partition;
    USING_CPP11_NATIVE_STD(partition_copy);
    USING_CPP11_NATIVE_STD(partition_point);
    using native_std::pop_heap;
    using native_std::prev_permutation;
    using native_std::push_heap;
    using native_std::random_shuffle;
    using native_std::remove;
    using native_std::remove_copy;
    using native_std::remove_copy_if;
    using native_std::remove_if;
    using native_std::replace;
    using native_std::replace_copy;
    using native_std::replace_copy_if;
    using native_std::replace_if;
    using native_std::reverse;
    using native_std::reverse_copy;
    using native_std::rotate;
    using native_std::rotate_copy;
    using native_std::search;
    using native_std::search_n;
    using native_std::set_difference;
    using native_std::set_intersection;
    using native_std::set_new_handler;
    using native_std::set_symmetric_difference;
    using native_std::set_union;
    USING_CPP11_NATIVE_STD(shuffle);
    using native_std::sort;
    using native_std::sort_heap;
    using native_std::stable_partition;
    using native_std::stable_sort;
    using native_std::swap;
    using native_std::swap_ranges;
    using native_std::transform;
    using native_std::unique;
    using native_std::unique_copy;
    using native_std::upper_bound;

}  // close package namespace

#undef USING_CPP11_NATIVE_STD

// Include Bloomberg's implementation, unless compilation is configured to
// override native types in the 'std' namespace with Bloomberg's
// implementation, in which case the implementation file will be included by
// the Bloomberg supplied standard header file.

#ifndef BSL_OVERRIDES_STD
#include <bslstl_algorithmworkaround.h>
#endif


#endif

// ----------------------------------------------------------------------------
// Copyright 2013 Bloomberg Finance L.P.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// ----------------------------- END-OF-FILE ----------------------------------
