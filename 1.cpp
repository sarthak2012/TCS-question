/*
there are n people in a room and they all shake there hand with each other such that no same 2 person can shake hands together 
find the total no of handshakes
formula = n*(n+1)/2
*/
#include <iostream> 
using namespace std; 
  
int main() {
int no_of_people;
int handshake;
cout<<"enter the number of people in the party"<<endl;
cin>>no_of_people;
if(no_of_people <2){
    cout<<"cannot have any handshake here";
}
else
handshake=(no_of_people *(no_of_people +1))/2;


    cout<< handshake ;
}
