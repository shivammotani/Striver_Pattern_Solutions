//     *    
//    ***
//   *****
//  *******
// *********

#include <iostream>
using namespace std;

int main(){
	cout << "Enter the number: ";
    int n;
    cin >> n;
    for(int i=1;i<=n; i++){
        for(int j=0; j<n+(n-1);j++){
            if (j < (n-i)) cout << " ";
            else if (j >= n+i-1 )cout << " ";
            else cout << "*";
        }
        cout<< endl;
    }
	return 0;
}