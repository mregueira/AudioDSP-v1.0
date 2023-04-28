# AudioDSP-v1.0 (Deprecated)
## Description
Audio DSP - 1.0 - First version attempt of final product

## Features
- DC Input Requiered: +6V/1A
- Audio Channels: up to 6
- x6 SigmaDSP ADAU1701
   - I2C control for DSP
   - 24 bit ADC inputs x2
   - 24 bit DAC outputs x4, dynamic range 2.5Vpp
- Sampling frequency (default): 48KHz
- ST uC STM32F401RxT6 with Serial Wire programming
- LED indicators
   - Power
   - DSP Programmings OK
- x12 Potentiometers:
   - x10 Band Eq
   - x1 Bass Dedicated
   - x1 General Volume

## Reworks
The master clock of paired DSPs must be the same. Worked out with external NOR gate and wirerap soldering.