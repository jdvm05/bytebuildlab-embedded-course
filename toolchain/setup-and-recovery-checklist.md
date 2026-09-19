# Lesson 3 setup and recovery checklist

You can follow the video without hardware. Use this checklist when you are ready
to reproduce the demonstration. The reference board is an Arduino Nano ESP32;
another compatible board may need different board-package and port choices.

## Set up

1. Install [Arduino IDE 2](https://www.arduino.cc/en/software). On Windows, use the [board-specific setup guide](install-windows.md).
2. Open the [Lesson 3 sketch](../lessons/03-build-flash-and-run/firmware/lesson_03_first_program/lesson_03_first_program.ino) in Arduino IDE. Keep the `.ino` file inside its same-named folder.
3. Connect the board with a USB-C **data** cable. A charging-only cable will not upload firmware.
4. Install **Arduino ESP32 Boards** if the IDE prompts you. Otherwise, open Boards Manager, search for **Arduino Nano ESP32**, and install that package.
5. Select **Arduino Nano ESP32** and the port that appeared after you connected it. Keep **By Arduino pin (default)** pin numbering.
6. Select **Verify**, then **Upload**. Open Serial Monitor at **115200 baud**.
7. Press reset once if needed. Expect `SYSTEM ONLINE` once, followed by repeated `HEARTBEAT` lines.

The short [environment check](verify-environment.md) covers the same setup before upload. If you use a different board, see the [compatibility notes](../compatibility/README.md) before selecting its board package.

## Recover when something fails

1. **No port or upload failure:** confirm the selected board and port, then try a known USB data cable. Close other software using the port, reconnect the board, and select the port again.
2. **Verify fails:** confirm that you opened the unmodified Lesson 3 sketch and installed the correct board package. Read the first complete error message rather than changing several settings at once.
3. **Blank Serial Monitor:** wait for the upload to finish, open the monitor, and press reset once.
4. **Unreadable serial text:** set Serial Monitor to **115200 baud**, matching `Serial.begin(115200)` in the sketch.
5. **Output differs:** compare it with `SYSTEM ONLINE` and `HEARTBEAT` above. If you changed the sketch, upload again before judging the result.

The detailed [upload and serial troubleshooting checklist](../troubleshooting/upload-and-serial.md) has the same recovery steps in order. If the problem remains, share your exact board model, operating system, Arduino IDE version, and complete error message in the lesson comments.
