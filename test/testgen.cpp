#include<bits/stdc++.h>
using namespace std;
const int M  = 100005;
long long int N = 1e9 + 7;
long long int Z = 998244353;
/*int fac[M]={0};*/
//int dp[M]={0};
#define ll long long 
int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a%b); 
} 
// Use __gcd(int, int) as inbuilt function.
void precompute(){

}
int max3(int x, int y, int z){
    return max(x, max(y,z));
}
long long int power(long long int x, unsigned int y, int p) 
{ 
    long long int res = 1;      // Initialize result 
  
    x = x % p;  // Update x if it is more than or  
                // equal to p 
  
    while (y > 0) 
    { 
        // If y is odd, multiply x with result 
        if (y & 1) 
            res = (res*x) % p; 
  
        // y must be even now 
        y = y>>1; // y = y/2 
        x = (x*x) % p;   
    } 
    return res; 
} 
long long int modinv(long long int x, int p){
    return (power(x, p-2, p));
}
bool compare(const pair<int, int> &p1, const pair<int, int> &p2){
    return (p1.first> p2.first);
}
/*long long int nCrModP(long long int n, long long int r, long long int p) 
{ 
   if (r==0) 
      return 1;  
    return (fac[n] * modinv(fac[r], p) % p * modinv(fac[n-r], p) % p) % p; 
}*/

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    srand(time(0));
    long long int s = rand();     int d = rand()%20, r = 425, c = 425,  t = rand() % (r+c-1) ;
    s = s * (d) * (r+c-2);
    cout<<s<<" "<<d<<" "<<t<<"\n";
    cout<<r<<" "<<c<<"\n";
    for(int i = 0; i<r; i++){
    	for(int j = 0; j<c; j++){
    		cout<<rand()<<" "<<rand()<<" ";
    	}
    	cout<<"\n";
    }
   	return 0;
}
