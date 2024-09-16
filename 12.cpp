/*
A high-profile secret agency needs to handle all messages sent and received 
using encryption. You are required to create a program that encrypts a given 
string using a predefined cipher table. 

The cipher table maps each lowercase letter to a corresponding encrypted 
character as follows: 
Actual: abcdefghijklmnopqrstuvwxyz
Cipher: kptvwxyzabcdefghijlmnoqrsu

Each character in the Actual string is replaced by the character in the same
position in the Cipher string. 
Task Write a C program that: 

1. Reads an input string composed of lowercase letters only. 
2. Encrypts the string based on the cipher table. 
3.Prints the encrypted string. 
Input A single string strl consisting of lowercase letters only. (e.g., "hello)
Output The encrypted string based on the cipher table. (e.g., if str1 is"hello"

the output should be the encrypted result according to the cipher table.)


*/
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char actual[] = "abcdefghijklmnopqrstuvwxyz";
    char cipher[] = "kptvwxyzabcdefghijlmnoqrsu";
    char str1[100];
    int length;
    cout<<"Enter the string to encrypt"<<endl;
    //cin>>str1;  
    //this will not run if there is a space in between the character like aas  dfg
    // its better to use cin.getline(str1, 100) as it to not explode even if there is a space in between and work accurately
    cin.getline(str1, 100); // Read an entire line of text

    length = strlen(str1);
    cout<<length<<endl;
    
    for(int i=0;i<length;i++){
        for(int j=0;j<26;j++){
            if(str1[i]==actual[j])
            {
                str1[i]=cipher[j];
                break;
            }
        }
        
    }
    cout<<str1<<endl;
    return 0;
}
