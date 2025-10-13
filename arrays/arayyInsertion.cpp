#include <iostream>
using namespace std;

// int main() {                     // Array Insertion at the end
//     int arr[6] = {10, 20, 30, 40, 50, 60};
//     for(int i = 0; i<5; i++) {
//          arr[i]=arr[i+1];
//     }
//     arr[5] = 5;
//     for(int i = 0; i < 6; i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// int main() {                     // Array Insertion at the beginning
//     int arr[6] = {10, 20, 30, 40, 50, 60};
//     for(int i = 5; i>0; i--) {
//          arr[i]=arr[i-1];
//     }
//     arr[0] = 5;
//     for(int i = 0; i < 6; i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

int main() {                     // Array Insertion at any position
    int arr[6] = {10, 20, 30, 40, 50, 60};
    int inx = 3;                 
    for(int i = 5; i>=inx; i--) {
         arr[i]=arr[i-1];
    }
    arr[inx-1] = 5;             
    for(int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}