#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int k,temp=0,c=0; 
        cin>>k;
        for(int i=0;(2<<(i-1))<n;i++){
           int y = 2<<(i-1);
           int x = 2<<(i);
           c++;
           if(x>n-1){
               x=n-1;
           }
           if(a[y]>=k){
               for(int j=y;j<=x;j++){
                   if(a[j]==k){
                    temp=1;
                    break;
                    } 
                }
                if(temp){
                    break;
                }
           }
        }
        if(temp){
            cout<<"Present "<<c<<endl;
        }else{
             cout<<"Not Present "<<c<<endl;
        } 

         
    }
    return 0;
}
//101 246 438 561 796 896 899 4644 7999 8545