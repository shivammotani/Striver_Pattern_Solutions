// A 
// A B
// A B C
// A B C D
// A B C D E


#include <iostream>
using namespace std;

int main(){
	cout << "Enter the number: ";
    int n;
    cin >> n;
    
    for(int i=1;i<=n;i++){
        char cnt = 'A';
        for(int j=1; j<=i;j++){
            cout << cnt++ << " ";
        }
        cout << endl;
    }
    return 0;
} 
 
