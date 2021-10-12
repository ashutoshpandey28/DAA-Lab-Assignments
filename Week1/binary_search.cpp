#include<iostream>
#include<math.h>
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
        int min=0,max=n-1;
        while(abs(min-max)>1){
            
            int mid=(min+max)/2;
            c++;
            if (a[max]==k || a[min]==k){
                  temp=1;
                  break;
            }
            if(a[mid]==k){
                temp=1;
                break;
            }
            else{
                if(a[mid]<k){
                    min=mid;
                }else{
                    max=mid;
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