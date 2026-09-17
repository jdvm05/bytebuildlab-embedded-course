# ByteBuildLab Embedded Systems Course

Code, setup notes, and reference material for the ByteBuildLab embedded systems course.

The course starts with the **Arduino Nano ESP32**, but the concepts are not tied to one board. If you have compatible hardware, use the notes in [`compatibility/`](compatibility/) and ask for help in the lesson comments with your exact board model and operating system.

## Start with Lesson 3

Lessons 1 and 2 introduce embedded systems and the parts inside a microcontroller. Lesson 3 is the first lesson with runnable code:

- [Lesson 3 — Build, Flash, and Run](lessons/03-build-flash-and-run/)
- [Open the Arduino sketch](lessons/03-build-flash-and-run/firmware/lesson_03_first_program/lesson_03_first_program.ino)

You do **not** need hardware to follow the explanation. The files are here so you can reproduce the demonstration whenever you have a suitable board.

## Download without Git

1. Select the green **Code** button near the top of this repository.
2. Select **Download ZIP**.
3. Extract the downloaded ZIP file.
4. Open the lesson folder from the extracted copy.

Do not edit files while they are still inside the compressed ZIP archive.

## Reference setup

- Arduino Nano ESP32 with headers (ABX00083)
- USB-C **data** cable
- Arduino IDE 2
- Arduino pin numbering, which is the Nano ESP32 default

Later lessons use common breadboard parts. Any general electronics kit with a breadboard, jumper wires, LEDs, resistors, and push buttons is suitable.

## Repository map

```text
lessons/        Lesson notes and firmware
toolchain/      IDE and board-package setup
hardware/       Reference board and basic parts
compatibility/  Guidance for alternative boards
troubleshooting/Common setup and upload fixes
```

## License

The code and written material in this repository are available under the [MIT License](LICENSE).
