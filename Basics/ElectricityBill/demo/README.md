# Electricity Bill Demo (`demo/`)

This folder contains two beginner-friendly C++ programs that demonstrate how to calculate an electricity bill using user input and simple arithmetic. Both programs use playful prompts and Malayalam phrases to make the experience engaging.

---

## File: `main_char.cpp`

### Overview

This program uses **character arrays (`char[]`)** for storing user details and demonstrates classic C-style string handling in C++. It is ideal for beginners who want to understand the basics of input/output and string manipulation in C++.

### How it works

1. **User Input:**  
   - Prompts the user for their name, phone number, and consumer number using `cin.getline()` to safely read strings with spaces.
   - Asks for previous and current meter readings using `cin`.

2. **Calculation:**  
   - Computes units consumed as the difference between current and previous readings.
   - Calculates the total bill using a fixed rate per unit.

3. **Output:**  
   - Displays a detailed bill summary with all entered and calculated information.
   - Includes friendly messages and Malayalam phrases for a local touch.

---

## File: `main.cpp`

### Overview

This program uses **C++ strings (`std::string`)** for storing user details, making the code safer and more modern compared to `main_char.cpp`. It is a good example for learners transitioning from C-style strings to C++ standard library features.

### How it works

1. **User Input:**  
   - Uses `getline(cin, ...)` to read the user's name, phone number, and consumer number as `std::string`, allowing for spaces and easier manipulation.
   - Reads previous and current meter readings as floating-point numbers.

2. **Calculation:**  
   - Calculates the number of units consumed by subtracting the previous reading from the current reading.
   - Multiplies the units consumed by a constant rate (`5.7`) to get the total bill amount.

3. **Output:**  
   - Prints a well-formatted bill summary, including all user details and calculated values.
   - Uses emojis and Malayalam phrases to make the output friendly and engaging.
   - Encourages energy saving with a local message:  
     `"Kurachu kooduthal save cheythal, pocketil paisa koodum! (Save electricity, save money!) 🌱"`

### Why use this approach?

- **Safety and Flexibility:**  
  `std::string` handles memory management and allows for more flexible string operations.
- **Modern C++ Practices:**  
  Demonstrates best practices for input/output and string handling in C++.
- **User Experience:**  
  The program is approachable for beginners and fun to use, making learning more enjoyable.

---

## How to Build and Run

1. Open this folder in your terminal.
2. Compile either program:
   ```sh
   clang++ main.cpp -o main
   ./main
   ```
   or
   ```sh
   clang++ main_char.cpp -o main_char
   ./main_char
   ```
   (You can also use `g++` if set up correctly.)

---

## Summary

- **`main_char.cpp`**: Demonstrates classic C-style string handling with `char[]`.
- **`main.cpp`**: Uses modern C++ `std::string` for safer and more flexible code.
- Both programs are well-commented, beginner-friendly, and include playful, localized prompts to make learning C++ more enjoyable.

---