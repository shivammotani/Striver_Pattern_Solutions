// E 
// D E
// C D E
// B C D E
// A B C D E

#include <iostream>
using namespace std;

int main(){
	cout << "Enter the number: ";
    int n;
    cin >> n;
    
    for(int i=0;i<n;i++){
        char p = 'A';
        p = p + (n-i-1);
        for(int j=0; j<=i;j++) cout << p++ << " ";
        cout << endl;
        }
    
    return 0;
} 
 
