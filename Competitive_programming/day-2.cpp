// Scope- a region of the program
//break- exits the current /innermost loop
// continue- skips the next iteration
  // for, while- entry controlled
  // do-while-exit controlled
//Arrays-
  /*
 a collection of multiple items of the same datatype.
 are ordered , size cannot be changed once declared
 SYNTAX- datatype name[size];
 int a[9];
 for(int i=0; i<5; i++){
 cin>> a[i];
 cout<<a[i]<<" ";
   }
 cout<< endl;


  

//Challenge yourself- Module-2
// Factorial of a number
#include<iostream>
using namespace std;
int main(){
  int n;
  cin>> n;
  int fact=1;
  for(int i=1; i<=n; i++){
    fact=fact*i;
  }
  cout<<fact<<endl;
  return 0;
}



// Largest number in the array
#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0; i<=n; i++){
    cin>>a[i];
  }
  int ans=a[0];
  for(int i=0; i<=n; i++){
    ans=max(ans, a[i]);
    cout<<ans<<"";
  }
  cout<<ans<<endl;
  return 0;
  }
*/
//print all possible pairs of int in an array with distinct integers
#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0; i<=n; i++)
  {
    cin>>a[i];
  }
  for(int i=0; i<n; i++){
    for(int j=i; j<n; j++){
       cout<<a[i]<<" "<<a[j]<<endl;
    }
  }
    return 0;
  }

  

