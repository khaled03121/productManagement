#include <bits/stdc++.h>
typedef long long int ll;
#define pi 2 * acos(0.0)
#define vll vector<ll>
#define vi vector<int>
#define vii vector<pair<int, int>>
#define pb(a) push_back(a)
#define sp " "
#define sz(n) n.size()
bool odd(ll num) { return ((num & 1) == 1);}
bool even(ll num) { return ((num & 1) == 0);}
// bool isEqual(double a,double b) {return abs(a-b)<EPS;}
// bool isGreater(double a,double b) {return a>=b+EPS;}
// bool isGreaterEqual(double a,double b) {return a>b-EPS;}
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
#define ff(i,n) for(int i = 0; i < n; i++)
#define ff1(i,n) for(int i = 1; i <= n; i++)
#define lcm(a, b) (((a) * (b)) / __gcd(a, b))
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()
#define bye return 0;
const double eps = 1e-9;
using namespace std;
int main()
{
    int n,m;cin>>n>>m;
    int cnt=0;
    if(n>m) cout<<n-m<<endl;
    else
    {
        while(n!=m)
        {
            if(n-m>0)
            {
                cnt+=n-m;
                break;
            }
            if(m%2) 
            {
                cnt++;
                m++;
            }
            else
            {
                m/=2;
                cnt++;
            }
            
            
        }
        cout<<cnt<<endl;
    }
        
	bye
}