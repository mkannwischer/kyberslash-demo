#ifndef HAL_H
#define HAL_H

#include <stdint.h>
#include <stdlib.h>

enum clock_mode {
    CLOCK_FAST,
    CLOCK_BENCHMARK
};

void hal_setup(const enum clock_mode clock);
void hal_send_str(const char* in);
void hal_recv_bytes(unsigned char *out, unsigned int n);
uint64_t hal_get_time(void);
void hal_reset_time(void);
size_t hal_get_stack_size(void);

#endif
