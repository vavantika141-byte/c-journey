// Right half pyramid
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    for(int i=0; i<=n; i++){
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
       cout<<endl;
    }
    return 0;
}
*/

// Floyd's triangle
/*
1
2 3
4 5 6
7 8 9 10
   
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1; i<n; i++){
        for(int j=1; j<=i; j++){
          cout<<n++<<" ";
        }
        cout<<"\n";
    }
}
    */

// Inverted  Right triangle
/*
*****
****
***
**
*

*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=n; i>=1; i--){
      for(int j=1; j<=i; j++){
        cout<<"*"<<" ";
      }
      cout<<endl;
    }
}
// LEFT HALF PYRAMID
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
     
        for(int j=0;j<n-i-1; j++){
            cout<<" ";
        }
        for(int k=0; k<=i; k++){
            cout<<"*";
        }
    }
    return 0;
}