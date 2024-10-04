/*
Given Two binary numbers (in 0 and 1) in the form of string. Find out if there is
a possibility whether these numbers can become equal by rearranging their
respective Os and 1s. 
For ex: 101 and 011 can be arranged within themselves to become either 
101 or 011. 
Example 1: 
3 -> length of input string 
101 -> input string 1 
011 -> input string 2 
Output 1:
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    int coutzin1=0;
    int cout1in1=0;
    int coutzin2=0;
    int cout1in2=0;
    for(int i = 0;i<n;i++)
    {
        if (s1[i]=='0') 
        {
            coutzin1++;
        }
        else {
            cout1in1++;
        }
    }
    for(int i = 0;i<n;i++)
    {
        if (s2[i]=='0'){
            coutzin2++;
        }
        else{
            cout1in2++;
        }
    }
    
    if(coutzin1==coutzin2 && cout1in1==cout1in2)
    cout<<"yess";
    else
    cout<<"no";
    return 0;
}
