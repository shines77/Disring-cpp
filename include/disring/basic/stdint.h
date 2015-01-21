
#ifndef _DISRING_STDINT_H_
#define _DISRING_STDINT_H_

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#if defined(_MSC_VER) && (_MSC_VER < 1700)
#include "disring/msvc/stdint.h"
#else
#include <stdint.h>
#endif  /* _MSC_VER */

#endif  /* _DISRING_STDINT_H_ */
