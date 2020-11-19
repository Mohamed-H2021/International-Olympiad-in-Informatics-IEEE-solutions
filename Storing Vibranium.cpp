#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
  int n;
    cin>>n;
    int rt = sqrt(n);
    int i;
    for(i = rt; i >=1; --i) {
        if((i * (n/i)) == n) {
            break;
        }
    }
    cout<<2*(i+n/i)<<endl;


 }
