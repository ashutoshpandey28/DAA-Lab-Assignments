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

        for(int i=0;i<n;i++){
            c++;
            if(a[i]==k){
                temp=1;
                break;
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