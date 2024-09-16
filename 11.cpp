/*
1. The person first moves right (east) by 10 units. 
2. The second move is upward (north) by 20 units. 
3. The third move is to the left (west) by 30 units. 
4. The fourth move is downward (south) by 40 units. 
5. The fifth move is to the right (east) again by 50 units. 
6. This pattern of movement continues, with each successive move increasing in 
distance by an additional 10 units.

Given the number of moves, calculate the final position of the person after 
completing these moves. Input:


*/
#include <iostream>
using namespace std;

int main() {
    int x = 0; // x-coordinate
    int y = 0; // y-coordinate
    int distance = 10; // Initial distance for the first move
    int moves;

    cout << "Enter the number of moves: ";
    cin >> moves;

    for (int i = 0; i < moves; ++i) {
        switch (i % 4) {
            case 0: // Move right (east)
                x =x+ distance;
                break;
            case 1: // Move up (north)
                y =y+ distance;
                break;
            case 2: // Move left (west)
                x =x- distance;
                break;
            case 3: // Move down (south)
                y =y- distance;
                break;
        }
        distance =distance+ 10; // Increase distance for the next move
    }

    cout << "Final position is (" << x << ", " << y << ")" << endl;

    return 0;
}
