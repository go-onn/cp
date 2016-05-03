//      go_on
#include <bits/stdc++.h>
using namespace std;


//      LOOPS AND MEM
#define mz(a) memset(a,0,sizeof(a))
#define md(a,m,n) memset(a,-1,sizeof(a[0][0])*m*n);
#define mmin1(a) memset(a,-1,sizeof(a))
#define minf(a) memset(a,MEMSET_INF,sizeof(a));
#define f(i,a,n) for(int i=a;i<=n;++i)
#define fs(i,a,n) for(int i=a;i<n;++i)
#define fl(i,n,a) for(int i=n;i>=a;--i)


//       I/O
#define i(n) cin>>n
#define is(n) scanf("%s",n)
#define s(n) scanf("%d",&n)
#define sl(n) scanf("%lld",&n)
#define o(n) cout<<n
#define p(n) printf("%d",n)
#define pl(n) printf("%lld",n)
#define os cout<<" "
#define on cout<<"\n"


//       CONTAINERS
typedef vector <int> vi;
typedef pair<int, int> pii;
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(a)  a.begin(),a.end()
//#define fv(i,v) for(auto i = v.begin();i !=v.end(); ++i)


//        DEF AND INIT
#define ll long long int
#define M (ll)(1e9+7)
#define eps 1e-15
#define N (ll)(1e5+5)
/*
        freopen("in", "r", stdin);
        freopen("out", "w", stdout);
*/



int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll n;
    while(1)
    {
        i(n);
        if(!n)  break;
        o((n*(n+1)*(2*n+1))/6);on;
    }



    return 0;
}















