/*    ***Bismillahir Rahmanir Rahim***   */
#include<bits/stdc++.h>
#include  <stdio.h>
#include  <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include<sys/wait.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nn "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define point(a) fixed << setprecision(a)

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}


void ChildP(int ar[1000],int n)
{
    int   i;
    for (i = 0; i <n ; i++)
    {
        printf("This line is from child, array value = %d\n", ar[i]);
    }
    printf("   *** Child process is done ***\n");
}

void ParentP(int ar[1000],int n)
{
    int   i;
    for (i = 0; i < n; i++)
    {
        if(ar[i]%2!=0)
        {
            printf("This line is from parent, Odd Value = %d\n",ar[i]);
        }
    }
    printf("*** Parent is done ***\n");
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif
	fastio();
	
	int n;
    int ar[1000];
    pid_t  pid;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    pid = fork();
    if (pid == 0)
    {
        sort(ar,ar+n);
        ChildP(ar,n);
    }
    else
    {
        ParentP(ar,n);
    }

	return 0;
}

