#include <iostream>
using namespace std;

int main() {
	// first code
    int t,x,y;
    
    cin >> t;
    while(t--){
        cin >> x >>y;
        if(x>y){
            cout << "A"<< endl;
        }
        else{
            cout << "B"<<endl;
        }
    }
	return 0;
}