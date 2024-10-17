#include <config.h>
#include <stdbool.h>
#include <openssl/bio.h>
#include <openssl/ssl.h>
#include <openssl/err.h>

bool sietch_ssl_init(void) {
    if (!SSL_load_error_strings()) {
        return false;
    }
    return true;
}
