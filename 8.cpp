/*
PROBLEM 1 Share S A City Bus is a Ring Route Bus which runs in circular fashion. 
That is, Bus once starts at the Source Bus Stop, halts at each Bus Stop in its Route and at the end it reaches the Source Bus Stop again. 
If there are n number of Stops and if the bus starts at Bus Stop 1, then after nth Bus Stop, the next stop in the Route will be Bus Stop number 1 always.
If there are n stops, there will be n paths. One path connects two stops. 
Distances (in meters) for all paths in Ring Route is given in array Path[] as given below: Path=1800, 600, 750, 900, 1400, 1200, 1100, 1500] 
Fare is determined based on the distance covered from source to destination stop as Distance between Input Source and Destination 
Stops can be measured by looking at values in array Path[] and fare can be calculated as per the following criteria: If d=1000, 
then fare = 5 INR (When calculating fare for others, the calculated fare containing any fraction value should be ceiled. 
For example, for distance 900m, when fare initially calculated is 4.5, it must be ceiled to 5.) 
Write a code with function getFare (String Source, String Destination) which takes input as source and destination stops 
and calculates and returns the travel fare.
*/



#include <iostream>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

// Function to calculate fare based on source and destination
float getFare(const string& source, const string& destination) {
    vector<int> Path = {800, 600, 750, 900, 1400, 1200, 1100, 1500};
    vector<string> BusStops = {"TH", "GA", "IC", "HA", "TE", "LU", "NI", "CA"};
    int src = -1;
    int dest = -1;
    float result = 0;

    // Find index of source and destination
    for (int i = 0; i < BusStops.size(); i++) {
        if (BusStops[i] == source) {
            src = i;
        }
        if (BusStops[i] == destination) {
            dest = i;
        }
    }

    // Check if source and destination are valid
    if (src == -1 || dest == -1 || src == dest) {
        return 0;
    }

    // Calculate fare
    int i = src;
    while (i != dest) {
        result += Path[i];
        i = (i + 1) % Path.size();
    }
    
    result = floor(result * 0.005);
    return result;
}

int main() {
    string source, destination;
    cout << "Enter the source" << endl;
    cin >> source;    
    cout << "Enter the destination" << endl;
    cin >> destination;

    float answer = getFare(source, destination);
    if (answer == 0) {
        cout << "Invalid input" << endl;
    } else {
        cout << "INR " << answer << endl;
    }

    return 0;
}
