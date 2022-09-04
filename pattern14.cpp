// A B C D E 
// A B C D
// A B C
// A B
// A


#include <iostream>
using namespace std;

int main(){
	cout << "Enter the number: ";
    int n;
    cin >> n;
    
    for(int i=n;i>=1;i--){
        char cnt = 'A';
        for(int j=1; j<=i;j++){
            cout << cnt++ << " ";
        }
        cout << endl;
    }
    return 0;
} 
 
