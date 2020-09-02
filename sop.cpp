#include<bits/stdc++.h>

using namespace std;

int sop(int n){
    int i , j;
    int sum = 0;
    for(i = 1 ; i <= n ; i++){
        j = n / i; 
        sum = sum + (i*j);
        
    }
    return sum;
}

int main(){
    int n;
    cout << "n:";
    cin >> n;
    cout << sop(n) << endl;

    return 0;
}
