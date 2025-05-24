# Batch-2025-2026

This repository contains C++ solutions for various problems, organized by topic and folder.

## Folder Structure

- `Basics/`
  - Contains introductory C++ programs and foundational concepts.
  - **Example:**  
    - `ElectricityBill/final/`  
      - `ElectricityBillGetUserDetails.cpp`: Main program to get user details and calculate the electricity bill.
      - `ElectricityBillLib.h` / `ElectricityBillLib.cpp`: Custom library for handling electricity bill logic.

## Solution Explanations

### Basics/ElectricityBill/final

- **ElectricityBillGetUserDetails.cpp**  
  This file contains the `main()` function. It uses functions from `ElectricityBillLib` to get user input, calculate the bill, and display the results.

- **ElectricityBillLib.h / ElectricityBillLib.cpp**  
  These files define and implement the `ElectricityBill` structure and related functions, such as `getUserElectricityBill()`, which handles user interaction and bill calculation.

## How to Build and Run

1. Open the folder in VS Code.
2. Use the provided build task (`⇧⌘B`) to compile the code.
3. Run the output executable from the terminal.

## Notes

- On macOS, use `clang++` for building C++ code to avoid system header issues.
- Each folder contains a `README.md` or comments explaining the solution logic.

---

Feel free to add more folders and solutions as you progress!