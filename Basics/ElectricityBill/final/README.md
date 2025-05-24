# Electricity Bill Calculator (final)

This folder contains a simple C++ solution to calculate an electricity bill based on user input and Indian tariff slabs.

## Files

- **ElectricityBillGetUserDetails.cpp**  
  The main program.  
  - Prompts the user for their name, address, and units consumed.
  - Uses the custom library to calculate the bill.
  - Displays the bill details.

- **ElectricityBillLib.h**  
  Header file for the custom library.  
  - Defines the `ElectricityBill` struct to store user and bill details.
  - Declares `calculateBill(int units)` to compute the bill amount.
  - Declares `getUserElectricityBill()` to handle user input and bill calculation.

- **ElectricityBillLib.cpp**  
  Implementation of the custom library functions declared in the header.

## How It Works

1. The user runs the program.
2. The program asks for the user's name, address, and number of units consumed.
3. The program calculates the bill using Indian tariff slabs (see `calculateBill`).
4. The program displays the user's details and the total bill amount.

## How to Build and Run

1. Open this folder in VS Code.
2. Use the provided build task (`⇧⌘B`) to compile the code (recommended: use `clang++` on macOS).
3. Run the generated executable from the terminal:
   ```sh
   ./ElectricityBillGetUserDetails
   ```

## Notes

- The code is modular: business logic is separated into a library for clarity and reuse.
- You can modify the tariff logic in `ElectricityBillLib.cpp` as needed.

---
```# Electricity Bill Calculator (final)

This folder contains a simple C++ solution to calculate an electricity bill based on user input and Indian tariff slabs.

## Files

- **ElectricityBillGetUserDetails.cpp**  
  The main program.  
  - Prompts the user for their name, address, and units consumed.
  - Uses the custom library to calculate the bill.
  - Displays the bill details.

- **ElectricityBillLib.h**  
  Header file for the custom library.  
  - Defines the `ElectricityBill` struct to store user and bill details.
  - Declares `calculateBill(int units)` to compute the bill amount.
  - Declares `getUserElectricityBill()` to handle user input and bill calculation.

- **ElectricityBillLib.cpp**  
  Implementation of the custom library functions declared in the header.

## How It Works

1. The user runs the program.
2. The program asks for the user's name, address, and number of units consumed.
3. The program calculates the bill using Indian tariff slabs (see `calculateBill`).
4. The program displays the user's details and the total bill amount.

## How to Build and Run

1. Open this folder in VS Code.
2. Use the provided build task (`⇧⌘B`) to compile the code (recommended: use `clang++` on macOS).
3. Run the generated executable from the terminal:
   ```sh
   ./ElectricityBillGetUserDetails
   ```

## Notes

- The code is modular: business logic is separated into a library for clarity and reuse.
- You can modify the tariff logic in `ElectricityBillLib.cpp` as needed.

---