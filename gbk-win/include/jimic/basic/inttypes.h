
#ifndef _JIMIC_INTTYPES_H_
#define _JIMIC_INTTYPES_H_

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#if defined(_MSC_VER) && (_MSC_VER < 1700)
#include "jimic/msvc/inttypes.h"
#else
#include <inttypes.h>
#endif  /* _MSC_VER */

#endif  /* _JIMIC_INTTYPES_H_ */
