# Install the course toolchain on Windows

1. Download and install [Arduino IDE 2](https://www.arduino.cc/en/software).
2. Connect the Arduino Nano ESP32 using a USB-C data cable.
3. If Arduino IDE offers to install the missing board package, accept it.
4. Otherwise, open **Tools > Board > Boards Manager**, search for **Arduino Nano ESP32**, and install **Arduino ESP32 Boards**.
5. Use the board selector to choose **Arduino Nano ESP32** and the port that appeared when you connected it.
6. Keep **Tools > Pin Numbering > By Arduino pin (default)** selected for the course.

The installer screens can change between Arduino IDE releases. The course focuses on the board-specific steps above. See [verification](verify-environment.md) before uploading the Lesson 3 sketch.
