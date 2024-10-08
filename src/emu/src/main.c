#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#include "cpu.h"
#include "util.h"


int main(void) { // TODO: program arguments to change size at runtime
    printf("Estimated emulated CPU cycles per second: %d\n", CPF);
    init_mem();
    emu_loop();
    return 0;
}
