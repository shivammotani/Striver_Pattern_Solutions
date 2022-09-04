// 4 4 4 4 4 4 4 
// 4 3 3 3 3 3 4
// 4 3 2 2 2 3 4
// 4 3 2 1 2 3 4
// 4 3 2 2 2 3 4
// 4 3 3 3 3 3 4
// 4 4 4 4 4 4 4


#include <iostream>
using namespace std;

int main(){
	cout << "Enter the number: ";
    int n;
    cin >> n;
    int i, j;

    for(i=n; i>1; i--)
    {
        for(j=n;j>=1;j--)
        {
            if(j>i) cout << j << " ";
            else cout << i << " ";
        }
        for(j=2;j<=n;j++)
        {
            if(j>i) cout << j << " ";
            else cout << i << " ";
        }
        cout << endl;
    }    
    for(i=1; i<=n; i++)
    {
        for(j=n;j>=1;j--)
        {
            if(j>i) cout << j << " ";
            else cout << i << " ";
        }
        for(j=2;j<=n;j++)
        {
            if(j>i) cout << j << " ";
            else cout << i << " ";
        }
        cout << endl;
    }



    
    return 0;
} 
 