#include <iostream>
using namespace std;

int main() {
    int a,b; cin >> a >> b;
    if(b==0 or a<-1000000 or b<-1000000 or a>1000000 or b>1000000){
        cout << "Invalid input";
        return 0;
    }
    if(a<0 and b>0){
        cout << '-';
        a=-a;
    }
    else if(b<0 and a>0){
        cout << '-';
        b=-b;
    }
    else if(a<0 and b<0){
        a=-a;
        b=-b;
    }
    if(a/b==0 and a%b==0){
        cout << 0;
    }
    else{
        if(a%b==0){
            cout << a/b;
        }
        else if(a/b==0){
            cout << a%b << '/' << b;
        }
        else{
            cout << a/b << ' ' << a%b << '/' << b;
        }
    }
    return 0;
}
