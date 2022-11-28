#include <iostream>
using namespace std;


int main()   //DO NOT change the 'main' signature
{
    int numOfTickets, classicSeat = 75, premiereSeat = 150;
    char wantRefreshment, haveCoupon, circle;
    double totalCost;
    
    cout << "Enter the number of tickets [a minumum of 5 to a maxiumum of 40 tickets]:" << endl;;
    cin >> numOfTickets;
    
    if (numOfTickets >= 5 && numOfTickets <= 40) {
        cout << "Do you want refreshments?: ";
        cin >> wantRefreshment;
        cout << "Do you have a special coupon: ";
        cin >> haveCoupon;
        cout << "Enter the type of seat [Classic / Premiere]: ";
        cin >> circle;
        
        if (circle == 'c' ) {
            totalCost = numOfTickets * classicSeat;
            if (numOfTickets > 20) {
                totalCost = totalCost - ((totalCost * 10)/100);
            }
            if (haveCoupon == 'y') {
                totalCost = totalCost - ((totalCost * 2)/100);
            }
            if (wantRefreshment == 'y') {
                totalCost = totalCost + (50 * numOfTickets);
            }
            cout << "Ticket cost: " << totalCost;
            
        } else if (circle == 'p') {
            totalCost = numOfTickets * premiereSeat;
            if (numOfTickets > 20) {
                totalCost = totalCost - ((totalCost * 10)/100);
            }
            if (haveCoupon == 'y') {
                totalCost = totalCost - ((totalCost * 2)/100);
            }
            if (wantRefreshment == 'y') {
                totalCost = totalCost + (50 * numOfTickets);
            }
            cout << "Ticket cost: " << totalCost;
        
        } else {
            cout << "Invalid Input";            
        }
        
    } else {
        cout << "Minimum of 5 and Maximum of 40 Tickets" << endl;
    }
  
  return 0;
}
