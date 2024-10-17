#ifndef __SIETCH_H__
#define __SIETCH_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include <stdbool.h>

typedef enum {
    SIETCH_LOG_DEBUG = 0,
    SIETCH_LOG_INFO,
    SIETCH_LOG_WARNING,
    SIETCH_LOG_ERROR,
    SIETCH_LOG_CRITICAL,
} sietch_log_level_t;

typedef void (*sietch_log_callback)(sietch_log_level_t, const char *);

const char *sietch_version(void);

bool sietch_init(void);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __SIETCH_H__ */
