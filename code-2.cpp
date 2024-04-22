#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        int even=0;
        int ans=k;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]%2==0) even++;
            if(arr[i]%2==0)ans=0;
            ans=min(ans,k-arr[i]%k);
        }
        if(k==4)
        {
            if(even>=2)ans=0;
            else if(even==1)ans=min(ans,1);
            else ans=min(ans,2);
        }
        cout<<ans<<endl;
    }


    return 0;
}
