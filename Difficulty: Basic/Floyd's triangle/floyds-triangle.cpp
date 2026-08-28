#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int num=1 ;

    // code here
    for(int i=1; i<n+1; i++){
        for(int j=0;j<i ; j++){
            cout<<num <<" ";
            num= num+1;
        }
        cout<<endl;
        
    }

    return 0;
}