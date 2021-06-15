#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll t;
int main()
{
	#ifndef ONLINE_JUDGEbb
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);

    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
     cin>>t;
     while(t--)
     {
      ll n;
      cin>>n;
      vector<ll> ar(n);
      for(auto &i:ar)
         cin>>i;
      queue<ll> q;
      stack<ll> s;
      vector<ll> ans;
      for(auto i=0;i<ar.size();i++)
      {
         if(ar[i]%2==0)
         {
            if(ar[i]%5==0)
            {
               ans.push_back(ar[i]);
            }
            else
            {
               s.push(ar[i]);
            }
         }
         else
         {
            q.push(ar[i]);
         }
      }
     sort(ans.begin(),ans.end(),greater<int>());

     while(!s.empty())
     {
         ans.push_back(s.top());
         s.pop();
     }

     while(!q.empty())
     {
      ans.push_back(q.front());
      q.pop();
     }
     
     for(auto i:ans)
      cout<<i<<" ";
   cout<<endl;


     }
   return 0;
}
