# arduino-analog-temperature-sensor

## Components

- Arduino uno
- Analog temperature sensor (thermistor)
- LCD1602
- Potentiometer

## Connections

### LCD1602
- RS to digital pin 4
- R/W to GND (write only)
- E to digital pin 5 (enable)
- D4-D7 to digital pin 9 to 12 (data)
- VDD to 5V (power)
- A to 3.3V (backlight)
- K to GND (backlight)

### Potentiometer - for contrast of LCD
- one pin to VO of LCD1602
- one pin to GND
- one pin unconnected

### Thermistor
- S to A0 of Arduino
- &minus; to GND
- &plus; to 5v

### Result

![](https://raw.githubusercontent.com/xTrinch/arduino-analog-temperature-sensor/master/result.jpg)
