#ifndef IDT_H
#define IDT_H

#include "util.h"
#include "isr.h"

#ifdef __cplusplus
extern "C" {
#endif

void idt_set(u8 index, void (*base)(struct Registers*), u16 selector, u8 flags);
void idt_init();

#ifdef __cplusplus
}
#endif

#endif
