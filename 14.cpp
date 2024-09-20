/*
A game development company wants to design a brain game application for 
kids. There are different types of tasks to be designed for the game. Among all 
the tasks, there is one task in which each digit of an existing number has to be 
replaced with another digit. 
Consider the following table:
Existing Numbers: 0 1 2 3 4 5 6 7 8 9 
Replace By:       9 8 7 6 5 4 3 2 1 0 
Input: An integer N. Output: An integer with replaced values.
Constraints: 
1.0<= N <= 1000000 
2. If N value is out of the above range, Print ("Wrong Input")
*/ 




#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number";
    cin>>n;
    if(n>1000000)
    {
        cout<<"wrong input";
    }
    else
    {
        for(int i =0;i<n;i++){
            #include <string.h> void replaceDigits (char *number) { for (int i = 0; i < strlen(number); i++) { switch (number[i]) { case 'e': number[i] = '9'; break; case '1': number[i] = '8'; break; case '2': number[i] = '7'; break; case '3': number[i] = '6'; break; case '4': number[i] = '5'; break; case '5': number[i] = '4'; break; case '6': number[i] = '3'; break; case '7': number[i] = '2'; break; case '8': number[i] = '1'; break; case '9': number[i] = '0'; break; } } }
            
        }
    }   
    
    
    
    
    return 0;
}
