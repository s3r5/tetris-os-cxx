#ifndef TIMER_H
#define TIMER_H

#include "util.h"

#ifdef __cplusplus
extern "C" {
#endif

// number chosen to be integer divisor of PIC frequency
#define TIMER_TPS 363

u64 timer_get();
void timer_init();

#ifdef __cplusplus
}
#endif

#endif
