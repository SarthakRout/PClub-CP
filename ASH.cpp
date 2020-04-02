// DYNAMIC PROGRAMMING SOLUTION O(n^2) By Sarthak Rout

#include<bits/stdc++.h>
using namespace std;
const int M  = 100005;
long long int N = 1e9 + 7;
long long int Z = 998244353;
long long int ar[1000][1000],dp[1002][1002];
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
    long long int s; 
    int d, t,r,c; 
    cin>>s>>d>>t>>r>>c;
    int  x, y;
    for(int i = 0; i<r; i++){
    	for(int j =0; j<c; j++){
    		cin>>x>>y;
    		ar[r-1 -i][j] =  x + d * y; 
    	}
    }

    for(int i = 0; i<=r; i++){
    	for(int j = 0; j<=c; j++){
    		dp[i][j] = 0;
    	}
    }
    dp[0][1] = s;
    int maxm = 0;
    for(int i = 1 ; i<=r; i++){
    	for(int j = 1; j<=c; j++){
    		dp[i][j] = max(dp[i-1][j]-ar[i-1][j-1], dp[i][j-1] - ar[i-1][j-1]);
    		if((dp[i][j]<=0)&&((dp[i-1][j]>0)||(dp[i][j-1]>0))){
    			maxm = max(maxm, i + j - 2);
    		}
    	}
    }
    if(dp[r][c]>0){
    	maxm = max(maxm,  r+c -1);
    }
    /*for(int i= 0; i<=r; i++){
    	for(int j = 0; j<=c; j++){
    		cout<<dp[i][j]<<" ";
    	}
    	cout<<"\n";
    }*/
    //cout<<maxm;
    if(maxm>=t){ 
    	cout<<"YES\n";
    }
    else{
    	cout<<"NO\n";
    }
   	return 0;
}