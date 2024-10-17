#include <config.h>
#include <sietch.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    const char *version = sietch_version();
    assert(strcmp(version, PACKAGE_VERSION) == 0);
    return EXIT_SUCCESS;
}
