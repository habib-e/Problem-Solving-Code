/* ***Bismillahir Rahmanir Rahim*** */
#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MAX 1000005
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
#define arrsize(a) (sizeof(a) / sizeof(a[0]))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define CLR(p) memset(p, 0, sizeof(p))
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


struct Node {
    Node *next;
    Node *prev;
    string url;
};
 
class BrowserHistory {
public:
    Node *current;
    BrowserHistory(string homepage) {
        current = new Node();
        current->url = homepage;     
    }
    
    void visit(string url) {
        Node *visit = new Node();
        visit->url = url;
        current->next = visit;
        visit->prev = current;
        current = visit;
    }
    
    string back(int steps) {
        string result;
        for (int i = 0; i < steps; i++) {
            if (current->prev == NULL) {
                return result;
            } else {
                current = current->prev;
            }
            result = current->url;
        }
        if (result.size() == 0) {
            return current->url;
        } else {
            return result;
        }
    }
    
    string forward(int steps) {
        string result;
        for (int i = 0; i < steps; i++) {
            if (current->next == NULL) {
                return result;
            } else {
                current = current->next;
            }
            result = current->url;
        }
        if (result.size() == 0) {
            return current->url;
        } else {
            return result;
        }
    }
};
int main(){

#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif

    BrowserHistory* obj = new BrowserHistory(homepage);
    obj->visit(url);
    string param_2 = obj->back(steps);
    string param_3 = obj->forward(steps);



}
/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */