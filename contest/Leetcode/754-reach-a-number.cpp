#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0)
#define ll long long 
using namespace std;

int main() {
    fast;
    int target = 9;
    int current_position = 0, distance_remaining = target, counter = 0;
    string directions[2] = {"left", "right"};

    // check target position first
    int i = 0;
    while (current_position != target) {
        i++;
        
        if (current_position + i <= target) {
            current_position += i;
        } else {
            current_position -= i;
            // cout << current_position << endl;
        }
            counter++;
    }
        cout << counter << endl;

    return 0;
}
