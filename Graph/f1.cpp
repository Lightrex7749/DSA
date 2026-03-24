#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n=5;
    
    vector<vector<int>> arr(n, vector<int>(n));
      arr = {
        {0, 1, 1, 0, 0},
        {1, 0, 0, 1, 0},
        {1, 0, 0, 1, 1},
        {0, 1, 1, 0, 1},
        {0, 0, 1, 1, 0}
    };

    
    vector<int> adj[n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(arr[i][j] == 1) {
                adj[i].push_back(j);
            }
        }
    }
    
    for(int i = 0; i < n; i++) {
        cout << i << " -> ";
        for(int j : adj[i]) {
            cout << j << " ";
        }
        cout << endl;
    }
    
    return 0;
}