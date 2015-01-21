
#ifndef _DISRING_DUMP_MEM_H_
#define _DISRING_DUMP_MEM_H_

#include "disring/basic/stdint.h"
#include "disring/basic/stdbool.h"

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

void memory_dump(void *p, size_t size, bool alignedTo /* = false */,
                 unsigned int alignment /* = 16 */,
                 unsigned int extraHead /* = 0 */,
                 unsigned int extraTail /* = 0 */);

#ifdef __cplusplus
}
#endif

#endif  /* _DISRING_DUMP_MEM_H_ */
