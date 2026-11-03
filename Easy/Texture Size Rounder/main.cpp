#include <iostream>
using namespace std;
int main(){
    unsigned long long n; cin >> n;
    if(n<1 or n>1073741824){
        cout << "Invalid input";
        return 0;
    }
    int prev=n, next=n;
    if( !(n & (n-1)) ){
        cout << n << " is a power of two";
    }
    else{
        cout << n << " is not a power of two";
        while( prev & (prev-1) ){
            prev--;
        }
        while( next & (next-1) ){
            next++;
        }
    }

    cout << "\nPrevious: " << prev;
    cout << "\nNext: " << next;

    return 0;
}