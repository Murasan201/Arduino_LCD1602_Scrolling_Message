# Arduino_LCD1602_Scrolling_Message

This repository contains an Arduino sketch for controlling an LCD1602 display using the I2C interface. The sketch demonstrates how to display a scrolling message on the LCD.

## Hardware Required

- Arduino R4 with Renesas microcontroller
- LCD1602 display with I2C interface
- Connecting wires

## Software Required

- Arduino IDE
- LiquidCrystal_I2C library

## Installation

1. Clone this repository:
    ```bash
    git clone https://github.com/yourusername/Arduino_LCD1602_Scrolling_Message.git
    ```
2. Open the `LCD1602_Scrolling_Message.ino` file in the Arduino IDE.
3. Install the LiquidCrystal_I2C library:
    - Open the Arduino IDE.
    - Go to `Sketch` -> `Include Library` -> `Manage Libraries...`.
    - Search for `LiquidCrystal_I2C` and install it.
4. Connect the hardware as follows:
    - VCC -> 5V
    - GND -> GND
    - SDA -> A4
    - SCL -> A5

## Usage

1. Upload the sketch to your Arduino board.
2. The LCD will display the message "Hello Arduino" scrolling from right to left.

## Author

Created by Murasan.

## Website

For more projects and information, visit [Murasan's website](https://murasan-net.com/).

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
