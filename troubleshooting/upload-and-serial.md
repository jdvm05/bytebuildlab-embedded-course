# Upload and Serial Monitor checklist

## Upload fails

Check these items in order:

1. Confirm the exact board selection.
2. Confirm the selected port belongs to the connected board.
3. Try a known USB data cable; some cables provide power only.
4. Close other programs that may be using the serial port.
5. Disconnect and reconnect the board, then select the port again.
6. Copy the complete error message before changing more settings.

## Serial Monitor is blank or unreadable

1. Open Serial Monitor after the upload finishes.
2. Set the baud rate to **115200** to match `Serial.begin(115200)`.
3. Press the board's reset button once.
4. Look for `SYSTEM ONLINE`, followed by repeated `HEARTBEAT` lines.

If the problem continues, include the board model, operating system, IDE version, and complete error text when asking for help.
