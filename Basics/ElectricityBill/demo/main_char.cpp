#include <iostream>
using namespace std;

int main() {
    char userName[30];      // Box for your name
    char phoneNumber[15];   // Box for your phone number
    char consumerNumber[20];// Box for your consumer number
    float previousReading, currentReading;
    float unitsConsumed, totalAmount;
    const float RATE_PER_UNIT = 5.7; // Each unit is like buying one pazham pori! 

    cout << "👋 Perentha? (What's your name?) ";
    cin.getline(userName, 30);

    cout << "📞 Phone number onnum kodukkamo? ";
    cin.getline(phoneNumber, 15);

    cout << "🔢 Consumer number (like your electricity roll number!): ";
    cin.getline(consumerNumber, 20);

    cout << "📉 Previous meter reading: ";
    cin >> previousReading;

    cout << "📈 Current meter reading: ";
    cin >> currentReading;

    unitsConsumed = currentReading - previousReading;
    totalAmount = unitsConsumed * RATE_PER_UNIT;

    cout << "\n-----------------------------------\n";
    cout << "⚡ Hello.., " << userName << "! Here is your electricity bill:\n";
    cout << "📞 Phone Number      : " << phoneNumber << "\n";
    cout << "🔢 Consumer Number   : " << consumerNumber << "\n";
    cout << "📉 Previous Reading  : " << previousReading << " units\n";
    cout << "📈 Current Reading   : " << currentReading << " units\n";
    cout << "🔋 Units Consumed    : " << unitsConsumed << " units\n";
    cout << "💸 Rate per Unit     : Rs. " << RATE_PER_UNIT << "\n";
    cout << "💰 Total Amount      : Rs. " << totalAmount << "\n";
    cout << "💡 Kurachu kooduthal save cheythal, pocketil paisa koodum! (Save electricity, save money!)\n";
    cout << "👋 Pinne kanam! (See you next time!)\n";
    cout << "-----------------------------------\n";

    return 0;
}