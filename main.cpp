#include "pico/stdlib.h"
#include "Servo.hpp"

static void wait_ms_blocking(int ms) { sleep_ms(ms); }

int main() {
    stdio_init_all();

    Servo s(7);     // GPIO 7
    s.center();
    sleep_ms(300);

    while (true) {
        // full-speed jump to 180°
        s.writeDegrees(180.0f);
        wait_ms_blocking(800);  // give it time to arrive (tune for your linkage)

        // full-speed jump back to 0°
        s.writeDegrees(0.0f);
        wait_ms_blocking(800);
    }
}