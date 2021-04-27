#ifndef ISR_H
#define ISR_H

#include "util.h"

#ifdef __cplusplus
extern "C" {
#endif

struct Registers {
    u32 __ignored, fs, es, ds;
    u32 edi, esi, ebp, esp, ebx, edx, ecx, eax;
    u32 int_no, err_no;
    u32 eip, cs, efl, useresp, ss;
};

void isr_install(size_t i, void (*handler)(struct Registers*));
void isr_init();

#ifdef __cplusplus
}
#endif

#endif
