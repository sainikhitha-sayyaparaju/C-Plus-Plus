#include <bits/stdc++.h>
using namespace std;
void towerOfHanoi(int n, char src, char dest,
                  char inter)
{
    if (n == 0) {
        return;     // if n is zero there is nothing to be done.
    }
    towerOfHanoi(n - 1, src, inter, dest);     // our first step is, we move the ring from the source rod to intermediate rod.
    cout << "Move disk " << n << " from rod " << from_rod << " to rod " << to_rod << endl;  // here we print the moves made.
    towerOfHanoi(n - 1, inter, dest, src);     // finally we move the ring form the intermediate rod to the destination rod.
}
 
int main()
{
    int N = 3; // Numbere of rings on the rod
    towerOfHanoi(N, 'A', 'C', 'B'); // here A, B, C are the names of the src, inter and dest rods
    return 0;
}