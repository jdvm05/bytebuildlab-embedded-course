# Lesson 3 — Build, Flash, and Run

This lesson demonstrates how source code becomes a program running on a microcontroller:

1. open the source;
2. build it into firmware;
3. flash the firmware through USB;
4. run it on the board;
5. observe its output in Serial Monitor.

You do not need a board to follow the lesson. The code and instructions let you reproduce the demonstration later with the reference board or compatible hardware.

## Open the sketch

The sketch is in:

[`firmware/lesson_03_first_program/lesson_03_first_program.ino`](firmware/lesson_03_first_program/lesson_03_first_program.ino)

Arduino sketches must remain inside a folder with the same base name as the `.ino` file. Open the `.ino` file in Arduino IDE 2.

## Reference-board steps

1. Connect the Arduino Nano ESP32 with a USB-C data cable.
2. Select **Arduino Nano ESP32** and its port in Arduino IDE.
3. Keep the default Arduino pin numbering.
4. Select **Verify** to build the program.
5. Select **Upload** to flash it to the board.
6. Open Serial Monitor and select **115200 baud**.

Expected output:

```text
SYSTEM ONLINE
HEARTBEAT
HEARTBEAT
HEARTBEAT
```

`setup()` runs once after reset. `loop()` then repeats. The 1500 ms delay in `setup()` gives the USB serial connection time to become available before the first message.

## Small experiment

After the first successful run, change `HEARTBEAT` to a short message of your own, upload again, and confirm that the new text appears in Serial Monitor.

For upload or serial problems, use the [troubleshooting checklist](../../troubleshooting/upload-and-serial.md).
The [complete setup and recovery checklist](../../toolchain/setup-and-recovery-checklist.md) combines the preparation and troubleshooting steps in one place.
