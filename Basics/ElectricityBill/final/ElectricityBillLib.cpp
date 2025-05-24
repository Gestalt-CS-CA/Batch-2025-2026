#include "ElectricityBillLib.h"
#include <iostream>

double calculateBill(int units) {
    double amount = 0.0;
    // Example tariffs (can be updated as per state/board)
    // 0-100 units: ₹1.5/unit
    // 101-200 units: ₹2.5/unit
    // 201-300 units: ₹4/unit
    // Above 300 units: ₹6/unit
    if (units <= 100) {
        amount = units * 1.5;
    } else if (units <= 200) {
        amount = 100 * 1.5 + (units - 100) * 2.5;
    } else if (units <= 300) {
        amount = 100 * 1.5 + 100 * 2.5 + (units - 200) * 4.0;
    } else {
        amount = 100 * 1.5 + 100 * 2.5 + 100 * 4.0 + (units - 300) * 6.0;
    }
    return amount;
}

ElectricityBill getUserElectricityBill() {
    ElectricityBill bill;
    std::cout << "Enter your name: ";
    std::getline(std::cin, bill.name);
    std::cout << "Enter your address: ";
    std::getline(std::cin, bill.address);
    std::cout << "Enter units consumed: ";
    std::cin >> bill.units;
    std::cin.ignore(); // Clear newline from input buffer
    bill.amount = calculateBill(bill.units);
    return bill;
}