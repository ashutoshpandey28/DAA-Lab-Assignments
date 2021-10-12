#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){

    
    int n,k;
   
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>k;
    int l=0,r=n-1,c=0,res=0,mid,ans=0;
    while(l<r){
        if (c==0){
            mid = l + (r-l)/2;
        }
        if(a[mid]==k){
            c=1;
            ans=a[mid];
            mid++;
            res++;
          
        }else{
            if (c==1){
                break;
            }
            if(a[mid]>k){
                r--;
            }else{
                l--;
            }
        }
        
    }
    if(c){
        cout<<ans<<"-"<<res<<endl;
    }else{
        cout<<"number not exist"<<endl;
    }
    }
    
    return 0;
}