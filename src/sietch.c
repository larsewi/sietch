#include <config.h>

#include <sietch.h>
#include <sietch-ssl.h>

const char *sietch_version(void) {
    return PACKAGE_VERSION;
}

bool sietch_init(void) {
    if (!sietch_ssl_init()) {
        return false;
    }
    return true;
}
