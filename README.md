# Servo (RP2040 / Raspberry Pi Pico)

- Savöx SH-1290MG at 333 Hz, 800–2200 µs, center 1520 µs  
- Signal pin: GPIO 7  
- Power: external 5–6 V BEC (grounds tied)

## Build
mkdir -p build && cd build
cmake -DPICO_SDK_PATH=$PICO_SDK_PATH ..
make

## Flash
Drag the generated `.uf2` onto the RPI-RP2 drive (BOOTSEL mode).

