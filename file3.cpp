/*
 An accountant in a company has a serious issue with numbers, He types the numbers in a reverse manner. Suppose he has to enter 123, he enters the number 321. He has the habit of reading numbers from right to left. The boss became aware of this only after he found out at the end of the billing month when he had to file the tax. He has to correct all the numbers by reentering each number from right to left. This gives the corrected number. Given a number N, help the boss find out the corrected numbers. Display the corrected numbers as output. Also, ignore any 0's at the end of the number. Note: The corrected numbers should be only 16-bit signed integers. If the output number is outside the Page 6 range display Wrong Value". 
 Example 1: Input : 4512 Value of N Output: 2154 Corrected Value

*/
#include <iostream>
#include<limits.h>
using namespace std;

int reversednumber(int n){ //126
    int reversed = 0; //6  ,62
    while(n!=0){
        int digit = n%10; //126 % 10 = 6 ,2  .1
        if (reversed>INT_MAX/10 && reversed<INT_MIN/10) // to keep it in range
        {
            return 0;
        }
        
        reversed=reversed*10+digit; //reversed = 6 .62 .621
        n=n/10; //126/10 = 12 ,1
        
    }
    return reversed;
}
int main() { 
    int N;
    cin>>N;
    int reversednum = reversednumber(N);
    if(reversednum>=-23768 && reversednum<=23767){
        cout<<reversednum;
    }
    else
    {
        cout<<"out pf range";
    }
    
    return 0;
}





//     int a = 123;
//     int b =10;
//     int c= a/b;  //questiont=12
//     int d =a%b;   //remainder=3
//     cout<<c<<endl;
//     cout<<d<<endl;
