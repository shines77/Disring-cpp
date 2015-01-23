
#ifndef _JIMIC_STDINT_H_
#define _JIMIC_STDINT_H_

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#if defined(_MSC_VER) && (_MSC_VER < 1700)
#include "jimic/msvc/stdint.h"
#else
#include <stdint.h>
#endif  /* _MSC_VER */

#endif  /* _JIMIC_STDINT_H_ */
