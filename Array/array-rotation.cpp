#include<bits/stdc++.h>
using namespace std;
void reverse(int *arr,int n,int d){
    int j=0;
    while(j<d){
        int temp=arr[0];
        int i;
        for(i=0;i<n-1;i++){
            arr[i]=arr[i+1];
        }
        arr[i]=temp;
        j++;
    }
}
int gcd(int n,int d){
    if(d==0){
        return n;
    }
    else{
        return gcd(d,n%d);
    }
}
void reverseinGCD(int *arr,int n,int d){
    d=d%n;
    for(int i=0;i<gcd(n,d);i++){
        int temp=arr[i];
        int j=i;
        while(1){
            int k=j+d;
            if(k>=n){
                k=k-n;
            }
            if(k==i){
                break;
            }
            arr[j]=arr[k];
            j=k;
        }
        arr[j]=temp;
    }
}
int main(){
     #ifndef ONLINE_JUDGE 
  

    // For getting input from input.txt file 
    freopen("ss.txt", "r", stdin); 
  
    // Printing the Output to output.txt file 
    freopen("output.txt", "w", stdout); 
  
#endif
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //reverse(arr,n,2);
    reverseinGCD(arr,n,2);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
