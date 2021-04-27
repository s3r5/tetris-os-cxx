#ifndef IRQ_H
#define IRQ_H

#include "util.h"
#include "isr.h"

#ifdef __cplusplus
extern "C" {
#endif

void irq_install(size_t i, void (*handler)(struct Registers*));
void irq_init();

#ifdef __cplusplus
}
#endif

#endif
