#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> a(N);
    for(int i = 0; i < N; i++) {
        cin >> a[i];
    }
 for(int i = 0; i <= N - K; i++) {
        int maximo = a[i];

        for(int j = i; j < i + K; j++) {
            if(a[j] > maximo) {
                maximo = a[j];
            }
        }

        cout << maximo;
        if(i < N - K) cout << " ";
    }

    cout << endl;

    return 0;
}

   
