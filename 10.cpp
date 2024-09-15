/*
Given an integer U denoting the amount of KWh units of electricity consumed, the task is to calculate the electricity bill with the help of the below charges: 
 

1 to 100 units – Rs. 10/unit
100 to 200 units – Rs. 15/unit
200 to 300 units – Rs. 20/unit
above 300 units – Rs. 25/unit

Examples: 
 

Input: U = 250 
Output: 3500 
Explanation: 
Charge for the first 100 units – 10*100 = 1000 
Charge for the 100 to 200 units – 15*100 = 1500 
Charge for the 200 to 250 units – 20*50 = 1000 
Total Electricity Bill = 1000 + 1500 + 1000 = 3500
Input: U = 95 
Output: 950 
Explanation: 
Charge for the first 100 units – 10*95 = 950 
Total Electricity Bill = 950 
*/
#include <iostream>
using namespace std;

int main() {
int unit=0;
int bill =0;
 cout<<"Enter your unit electricity consumption";
 cin>>unit;
 if(unit>=1 && unit<=100)
 {
     bill= 10*unit;
 }
 
    else if(unit>100 && unit<=200)
    {
     bill= (100*10)+(unit-100)*15;
    }
     else if(unit>200 && unit<=300)
     {
     bill= (100*10)+(100*15) +(unit-200)*20;
         
     }
     else if(unit>=300 )
     {
         bill= (100*10)+(100*15) +(100*15)+(unit-300)*20;
     }
 cout<<"your bill is "<<bill<<endl;

    return 0;
}
