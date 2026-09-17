# Verify the environment

Before uploading Lesson 3, confirm:

- Arduino IDE 2 opens normally.
- **Arduino Nano ESP32** is the selected board.
- The connected board's port is selected.
- The USB-C cable carries data, not only power.
- Arduino pin numbering is selected.
- The sketch verifies without errors.

Then upload the sketch and open Serial Monitor at **115200 baud**. You should see `SYSTEM ONLINE` once, followed by `HEARTBEAT` about once per second.
