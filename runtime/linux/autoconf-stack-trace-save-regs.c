#include <linux/stacktrace.h>

unsigned int foo (void);

unsigned int foo (void)
{
        unsigned long e[10];
        struct pt_regs* r = 0;
        return stack_trace_save_regs (r, & e[0], 10, 0);
}
