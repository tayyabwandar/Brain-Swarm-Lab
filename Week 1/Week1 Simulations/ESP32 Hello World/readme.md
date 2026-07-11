# ESP32 Hello World

This project is the first step in learning ESP32 programming using the Arduino framework. It demonstrates how to initialize serial communication and print **"Hello World"** repeatedly to the Serial Monitor.

---

## Concepts

### Serial Communication
Serial communication allows the ESP32 to exchange data with a computer through a USB cable. It is commonly used for debugging, monitoring sensor values, and displaying program output.

### `Serial.begin()`
The `Serial.begin()` function initializes the serial communication at a specified baud rate.

```cpp
Serial.begin(115200);
```

Here, **115200** is the baud rate, which determines how fast data is transmitted between the ESP32 and the computer.

### `Serial.println()`
The `Serial.println()` function prints text to the Serial Monitor and automatically moves the cursor to the next line.

```cpp
Serial.println("Hello World");
```

### `delay()`
The `delay()` function pauses program execution for a specified time in milliseconds.

```cpp
delay(1000);
```

A delay of **1000 milliseconds** means the message is printed once every second.

---

## Steps

1. Open the project in VS Code using PlatformIO.
2. Build the project.
3. Start the Wokwi simulation or upload the code to your ESP32 board.
4. Open the Serial Monitor.
5. Observe the output printed every second.

---

## Expected Output

### Wokwi Simulation

![Wokwi Simulation](1.png)

### Serial Monitor

![Serial Monitor Output](2.png)

The Serial Monitor displays:

```text
Hello World
Hello World
Hello World
Hello World
...
```

---


## Learning Outcomes

After completing this project, you will understand:

- How to create an ESP32 project using PlatformIO
- How serial communication works
- How to initialize the Serial Monitor
- How to print text using `Serial.println()`
- How to pause execution using `delay()`
- How to simulate ESP32 projects using Wokwi

---

## Author

**Muhammad Tayyab** 