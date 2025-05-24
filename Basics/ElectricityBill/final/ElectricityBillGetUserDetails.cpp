#include "ElectricityBillLib.h"
#include <iostream>


int main() {
    ElectricityBill bill = getUserElectricityBill();
    std::cout << "\n--- Electricity Bill Details ---\n";
    std::cout << "Name: " << bill.name << "\n";
    std::cout << "Address: " << bill.address << "\n";
    std::cout << "Units Consumed: " << bill.units << "\n";
    std::cout << "Total Amount: ₹" << bill.amount << "\n";
    return 0;
}