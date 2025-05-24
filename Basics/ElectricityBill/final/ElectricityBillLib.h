#ifndef ELECTRICITY_BILL_LIB_H
#define ELECTRICITY_BILL_LIB_H

#include <string>

// Structure to hold user details and bill info
struct ElectricityBill {
    std::string name;
    std::string address;
    int units;
    double amount;
};

// Function to calculate bill based on Indian tariffs
double calculateBill(int units);

// Function to get user details and calculate bill
ElectricityBill getUserElectricityBill();

#endif // ELECTRICITY_BILL_LIB_H