/*check whether all the digits of a number divide the number or not
example 129 is divisible by all 1 2 and 8
*/
#include <iostream>
using namespace std;

bool checkDivis(int num,int digit)
{
    return(digit!=0 && num%digit==0);
    //digit cannot be 0and number should be devided by digits
}
bool isalldigitdivisible(int num){
        int temp = num;
        while(temp>0)
        {
            int digit=temp%10; // 128 % 10 =8
             if (!(checkDivis(num, digit)))
            return false;
            temp =temp/10 ; //128 / 10 =12 
        }
        return true;
    }

int main() {
    int num = 128;
    if (isalldigitdivisible(num))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}



//     int a = 123;
//     int b =10;
//     int c= a/b; //questiont
//     int d =a%b; //remainder
//     cout<<c<<endl;   12 
//     cout<<d<<endl;   03
