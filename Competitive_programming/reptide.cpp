#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
{  
    int a, b,c;
    cin>>a>>b>>c;
    int rounds=0;
    bool gameover= false;
    while(gameover== false){
        
        if(a==b || b==c || c==a){
            gameover=true;
        }
        else{ 
            // finding biggest
            int biggest;
            if(a>=b && a>=c){
                biggest=a;
            }
            else if(b>=a && b>=c){
                biggest=b;
            }
            else if(c>=a && c>=b){
                biggest=c;
            }
            
            // finding smallest
            int smallest;
            if(a<=b && a<=c){
                smallest=a;
            }
            else if(b<=a && b<=c){
                smallest=b;
            }
            else if(c<=a && c<=b){
                smallest=c;
            }
            
            if(a==biggest){
                a=a-1;
            } 
            else if(b==biggest){
                b=b-1;
            }
            else if(c==biggest){
                c=c-1;
            }
            
            if(a==smallest){
                a=a+1;
            }
            else if(b==smallest){
                b=b+1;
            }
            else if(c==smallest){
                c=c+1;
            }
            rounds=rounds+1;
           
        }
    }
    cout<<rounds<<endl;
    }
    return 0;
}