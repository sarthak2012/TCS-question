/*
DRAWING BOOK PROBLEM
Hobo's Drawing teacher asks his class to open their books to a page number.
Hobo can either start turning pages from the front of the book or from the back of the book.
He always turns pages one at a time. When she opens the book, page 1 is always on the right side: 
When he flips page 1, he sees pages 2 and 3. Each page except the last page will always be printed on both sides.
The last page may only be printed on the front, given the length of the book. 
If the book is n pages long, and he wants to turn to page p, 
what is the minimum number of pages he will turn? He can start at the beginning or the end of the book. 
Given n and p, find and print the minimum number of pages Hobo must turn in order to arrive at page p. 
Function Description Complete the countpage function in the editor below. It should return the minimum number of pages Hobo must turn. 
countpage has the following parameter(s):
n: the number of pages in the book 
p: the page number to turn to Input Format 
The first line contains an integer n, the number of pages in the book.
The second line contains an integer, p, the page that Hobo's teacher wants her to turn to.
*/
#include <iostream>
using namespace std;
int countthepage(int n,int p){
    int frontpages=p/2;
    int backpages=(n/2)-(p/2);
    return(min(frontpages,backpages));
}
int main(){
    int n,p;
    cout<<"enter the number of pages in the book"<<endl;
    cin>>n;
    cout<<"enter the  page number to turn to  in the book"<<endl; 
    cin>>p;
    
    cout<<"The min number of pages neede to be turned is :"<<countthepage( n, p);
   
}
