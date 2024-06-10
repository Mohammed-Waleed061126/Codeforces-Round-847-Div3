#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define pl pair<ll, ll>
#define vi vector<ll>
#define sortx(X) sort(X.begin(),X.end());
#define el "\n"
#define yes cout<<"YES"<<el;
#define no cout<<"NO"<<el;
#define MW_HY ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;


void solution(){
  string s = "314159265358979323846264338327";
  string num;
  cin >> num;
  int count = 0;
  for (ll i = 0; i < num.size(); i++)
  {
    if (num[i] == s[i])
    {
      count++;
    }
    else
    {
      break;
    }
  }
  cout << count << el;
}

int main(){ MW_HY
  int ntimes  = 1;
  cin >> ntimes;
  while (ntimes--)
  {
    solution();
  }
}