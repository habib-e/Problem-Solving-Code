#include<bits/stdc++.h>
using namespace std;


int main() {
    //freopen("in.txt", "r", stdin);
    int T, n, m;
    queue< pair<int, int> >q;
    priority_queue<int>pq;

    cin >> T;

    for(int cs=1; cs<=T; cs++) {
        int n, m;

        cin >> n >> m;

        for(int i=0, k; i<n; i++) {
            cin >> k;
            q.push( make_pair(k, i) );
            pq.push(k);
        }

        int ans = 0;
        while(!q.empty()) {
            if( q.front().first==pq.top() ) {
                ans++;
                if(q.front().second==m) break;
                q.pop();
                pq.pop();
            }
            else {
                q.push(q.front());
                q.pop();
            }
        }

        cout << ans << endl;

        while(!q.empty())q.pop();
        while(!pq.empty())pq.pop();



    }
    return 0;
}
