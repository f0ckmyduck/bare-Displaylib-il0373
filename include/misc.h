#ifndef MAIN_H
#define MAIN_H

#include <stdint.h>

#define DEBUG

// if the statement is false wait endlessly
#ifdef DEBUG
#define assert(a) if(!(a)) { \
    while(1) {} \
}

#else
#define assert(a) ((void)0)
#endif

#endif
