#include<bits/stdc++.h>
using namespace std;

int main()
{
long long t;
cin>>t;
while(t--){
    long long n,tot=0,mn=INFINITY,f=0,idx=-1,cosn=0,sub=0;
    cin>>n;
    long long a[n],b[n],c[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]<50){
            tot+=(50-a[i])*c[i];
            a[i]=50;
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]>b[i]){
            f=1;
        }
    }
    if(f==0){
        for(int i=0;i<n;i++){
            if(((b[i]-a[i]+1)*c[i]<mn) && b[i]!=100){
                mn=(b[i]-a[i] +1)*c[i];
                idx=i;
            }
        }
        if(idx!=-1){
          tot+=(b[idx]-a[idx]+1)*c[idx];
        a[idx]=b[idx]+1;
        }

    }
    for(int i=0;i<n;i++){
        if(a[i]>b[i]){
            cosn=1;
            break;
        }
    }

    if(cosn==1){
        cout << tot << endl;
    }
    else
        cout << -1 << endl;

}



}


 
