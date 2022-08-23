#include<bits/stdc++.h> 
#include<fstream>
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
#define YES cout<<"YES\n";
#define yes cout<<"yes\n";
#define NO cout<<"NO\n";
#define no cout<<"no\n";
#define bye return 0;
const double eps = 1e-9;
using namespace std; 
class Product
{ 
    public: 
        string product_category,product_name; 
        ll product_id; 
    void ReadProduct() 
    { 
        ifstream in("productIN.txt"); 
        in>>product_id; 
        in.ignore(); 
        getline(in,product_category); 
        getline(in,product_name); 
        in.close(); 
    } 
    void WriteProduct() 
    { 
        ofstream out("productOut.txt"); 
        out<<"ProductID : "<<product_id<<endl; 
        out<<"Product Category : "<<product_category<<endl; 
        out<<"Product Name : "<<product_name<<endl; 
    } 
}; 
class soldProduct : public Product 
{ 
    public: 
        ll customer_id, price; 
    void R_sold_product() 
    { 
        ifstream in("customerIN.txt"); 
        in>>customer_id>>price; 
        in.close(); 
    } 
    void W_sold_product() 
    { 
        ofstream out("customerOut.txt"); 
        out<<"Customer ID: "<<customer_id<<endl; 
        out<<"Price: "<<price<<"$"<<endl; 
    } 
}; 
class boughtProduct : public Product 
{ 
    public: 
        ll buyer_id,price; 
        string buyer_name; 
 
    void R_bought_product() 
    { 
        ifstream in("buyerIN.txt"); 
        in>>buyer_id>>price; 
        in.ignore(); 
        getline(in,buyer_name); 
        in.close(); 
    } 
    void W_bought_product() 
    { 
        ofstream out("buyerOut.txt"); 
        out<<"BuyerID : "<<buyer_id<<endl; 
        out<<"Buyer Name : "<<buyer_name<<endl; 
        out<<"Price : "<<price<<" $"<<endl; 
    } 
};  
 
 
  
int main() 
{ 
    Product x; 
    x.ReadProduct(); 
    x.WriteProduct(); 
    soldProduct y; 
    y.R_sold_product(); 
    y.W_sold_product(); 
    boughtProduct z; 
    z.R_bought_product(); 
    z.W_bought_product(); 
    return 0; 
}