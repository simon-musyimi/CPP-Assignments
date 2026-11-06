#include <iostream>
#include <string>
using namespace std;

string customerName;
double unitsConsumed, ratePerUnit;
double totalBill, discount, finalBill;

void getCustomerDetails() {
    cout << "Enter customer name: ";
    cin >>customerName;

    cout << "Enter units consumed: ";
    cin >> unitsConsumed;

    cout << "Enter rate per unit: ";
    cin >> ratePerUnit;
}

void calculateBill() {
    totalBill = unitsConsumed * ratePerUnit;
}

void applyDiscount() {
    if (unitsConsumed > 100) {
        discount = totalBill * 0.10;
    } else {
        discount = 0;
    }

    finalBill = totalBill - discount;
}

void displayBill() {
    cout << "\n====== WATER BILL ======\n";
    cout << "Customer Name: " << customerName << endl;
    cout << "Units Consumed: " << unitsConsumed << endl;
    cout << "Total Bill: KSh " << totalBill << endl;
    cout << "Discount: KSh " << discount << endl;
    cout << "Final Amount Payable: KSh "
         << finalBill << endl;
    cout << "========================\n";
}

int main() {
    getCustomerDetails();
    calculateBill();
    applyDiscount();
    displayBill();

    return 0;
}
