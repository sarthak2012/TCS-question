/*
Day of the Programmer
Jaya invented a Time Machine and wants to test it by time traveling to visit Russia on the Day of Programmer (the 256th day of the year) during a year in the inclusive range from 1700 to 2700.
From 1700 to 1917, Russia's official calendar was the Julian Calendar since 1919 they used the Gregorian calendar system. 
The transition from the Julian to Gregorian calendar system occurred in 1918, 
when the next day after 31 January was February 14. This means that in 1918, February 14 was the 32nd day of the year in Russia. 
In both calendar systems, February is the only month with a variable amount of days; 
it has 29 days during a leap year, and 28 days during all other years. 
In the Julian calendar, leap years are divisible by 4; 
in the Gregorian calendar, leap years are either of the following: 
• Divisible by 400 
• Divisible by 4 and not divisible by 100 

Given a year, y, find the date of the 256th day of that year according to the official Russian calendar during that year. 
Then print it in the format dd.mm.yyyy, where dd is the two-digit day, mm is the two-digit month, and yyyy is y. 

For example, the given year is 1984.
1984 is divisible by 4, so it is a leap year. 
The 256 day of a leap year after 1918 is September 12,
so the answer is 12.9.1984. 

Function Description 
• Complete the programmerday function in the editor below. 
It should return a 
• string representing the date of the 256th day of the year given. 
• Programmerday has the following parameter(s): o year: an integer Input Format 
• A single integer denoting year y. Output Format 
• Print the full date of programmerday during year y in the format dd.mm.yyyy,
where dd is the two-digit day, mm is the two-digit month, and yyyy is y.

Sample Input 2017 Sample Output 13.09.2017

*/
#include <iostream>
using namespace std;
int main() {
    cout<<"enter the year you want to check for :"<<endl;
    int year;
    cin>>year;
    if(year==1918)
    {
        cout<<"the 256the day is "<<"26.09.1918";
    }
    else if (year>=1700 && year<=1917) // if year is in between 1700 and 1917
    {
        if(year%4==0)// if divisible by 4 ...leap year
        {
            cout<<"the 256the day is "<<"12.09."<<year<<endl;
        }
        else
        {
            cout<<"the 256the day is "<<"13.09."<<year<<endl;
        }
    }
    else if (year>=1919 && year<=2700)
    {
        if((year%400==0) || (year%4==0 && year%100!=0))
        cout<<"12.09."<<year;
        else
        cout<<"13.09."<<year;
    }
    else
    cout<<"NOT A VALID YEAR";
    return 0;
}
