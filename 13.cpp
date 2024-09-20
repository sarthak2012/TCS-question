/*
Find the minimum number of coins required to form any value between 1 to N, 
both inclusive. Cumulative value of coins should not exceed N. Coin 
denominations are 1 Rupee, 2 Rupee, and 5 Rupee. Let's understand the problem 
using the following example. 

Consider the value of N is 13, 
then the minimum number of coins required to formulate any value between 1 and 
13 is 6.
One 5 Rupee, 
three 2 Rupee, 
two 1 Rupee coins are required to realize any value between 1 and 13.
Hence, this is the answer. However, 
if one takes two 5 Rupee coins, one 2 Rupee coin, and two 1 Rupee coins,
then too all values between 1 and 13 are achieved. 
But since the cumulative value of all coins equals 14, i.e., exceeds 13,this is
not the answer. 

Input Format: A single integer value. 
Output Format: Four space-separated integer values. 
1st Total number of coins. 
2nd number of 5 Rupee coins.
3rd number of 2 Rupee coins. 
4th number of 1 Rupee coins. 

it has to form ALL THE VALUES FROM 1 TO N
ALSO
THE MAX NUMBER THAT COULD BE FORMED SHOULD NOT EXCEES THE N

APPRAACH

IF TH UNIT DIGIT OF THE  NUMBER IS GREATER THAN 5 THEN WE GENERATE UPTO THE LAST AND REST USING THE CHANGE 
EXAMPLE 39 = 30 + 9
=>6(5 VALUE COIN) + 4 (2 VALUED COIN ) +1 (1 VALUE COIN)
BUT 

IF TH UNIT DIGIT OF THE  NUMBER IS SMALLAR THAN 5 THEN WE GENERATE UPTO THE LAST AND REST USING THE CHANGE 
EXAMPLE 34 = 25 + 9
=>5(5 VALUE COIN) + 3 (2 VALUED COIN ) +1 (1 VALUE COIN)

BUT IF UNIT DIGIT IS EQUAL TO 5 , USE ANY OF THE EITHER CASES 


*/ 




#include <iostream>
using namespace std;
int main() {
    return 0;
}
