// //Swap every k th element;
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int N, K;
//     cin >> N >> K;
//     vector<int> arr(N);
//     for (int i = 0; i < N; i++) {
//         cin >> arr[i];
//     }

   
//     for (int i = 0; i < N; i += 2 * K) {
//         for (int j = 0; j < K; j++) {
//             swap(arr[i + j], arr[i + K + j]);
//         }
//     }

//     for (int i = 0; i < N; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N ;
    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    for(int i=0;i<N;i++){
        if(arr[i]==1){
        arr.erase(arr.begin() + i + 1);
        }

    }
    for(int j=0;j<N;j++){
        cout<<arr[j];
    }
}