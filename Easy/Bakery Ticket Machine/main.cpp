#include <iostream>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    if(n<0 or n>99 or k<1 or k>30){
        cout << "Invalid input";
        return 0;
    }
    int j=n+k;
    int i, t;
    for(i=n; i<j; i++){
        t=(i>=100? i-100 : i);
        if(t%13){
            cout << "Ticket " << t << '\n';
        }
        else {
            j++;
        }
    }
    cout << "Display shows " << (i>=100? i-100 : i);
    return 0;
}
