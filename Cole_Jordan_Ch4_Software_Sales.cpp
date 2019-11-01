//Jordan Cole
//CO SCI_802_26188FA19V
//Chap. 4: Software Sales
//A program that asks for the number of units purchased, computes total (including any discounts) and displays results.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //Create variables for all known data as well as user input
    const double unitPrice = 199.00, discount10_19 = 0.80, discount20_49 = 0.70, discount50_99 = 0.60, discount100 = 0.50;
    double totalUnits;


    //Get the user input (total units being purchased)
    cout << "How many units are being purchased? ";
    cin >> totalUnits;


    //Calculate and display the total cost
    if(totalUnits > 100)
    cout << setprecision(2) << fixed << showpoint << "The total cost of the purchase is $" << (totalUnits * (unitPrice * discount100)) << endl;
    
    else if (totalUnits > 49)
    cout << setprecision(2) << fixed << showpoint << "The total cost of the purchase is $" << (totalUnits * (unitPrice * discount50_99)) << endl;
    
    else if (totalUnits > 19)
    cout << setprecision(2) << fixed << showpoint << "The total cost of the purchase is $" << (totalUnits * (unitPrice * discount20_49)) << endl;
    
    else if (totalUnits > 9)
    cout << setprecision(2) << fixed << showpoint << "The total cost of the purchase is $" << (totalUnits * (unitPrice * discount10_19)) << endl;
    
    else if (totalUnits > 0)
    cout << setprecision(2) << fixed << showpoint << "The total cost of the purchase is $" << (totalUnits * unitPrice) << endl;
    
    else
    cout << "Units purchased must be greater than zero." << endl;

    system("pause");
    return 0;
}
