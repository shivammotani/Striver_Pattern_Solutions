// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *

#include <iostream>
using namespace std;

int main(){
	cout << "Enter the number: ";
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0; j<=i;j++){
            cout << "*";
        }
        cout<< endl;
    }
    for(int i=n-2;i>=0;i--){
        for(int j=0; j<=i;j++){
            cout << "*";
        }
        cout<< endl;
    }

	return 0;
} 
 
