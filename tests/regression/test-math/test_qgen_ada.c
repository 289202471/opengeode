#include <stdio.h>
#include <stdlib.h>
#include "dataview-uniq.h"

extern void expressions_initStates();
extern void expressions_run();

void expressions_RI_assert(asn1SccBoolean *res, asn1SccCharString *msg) {
    if (!*res) {
        fprintf(stderr, "%.*s\n", (int)msg->nCount, msg->arr);
        exit(1);
    }
}

int main() {
    expressions_initStates();
    expressions_run();
    return 0;
}
