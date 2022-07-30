#include<iostream>
#include<map>
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
#define mx 1000000005
#define ll long long
int main()
{
    FASTIO;
    int t = 0;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if(n<2)
        {
            cout << "0\n";
            continue;
        }
        int ans = 0;
        while(n>=2)
        {
            n-=2;
            int i=1;
            while((i*3)+2<=n)
            {
                //cout<<"i*3+2 : "<<(i*3)+2<<endl;
                n -= (i*3)+2;
                //cout<<"n : "<<n<<endl;
                i++;
            }
            ans++;
            //cout<<"ans : " << ans ;
        }
        cout<<ans << endl;
    }



//    ll t,i;
//    scanf("%lld",&t);
//    while(t--)
//    {
//        ll card,cnt=0;
//        cin>>card;
//        map<ll,ll>mp;
//        ll p=2;
//        ll x=1;
//        for(i=2; i<=mx; i+=p)
//        {
//            mp[i]=x++;
//            p+=3;
//        }
//        p=2;
//        for(i=2; i<=1000; i+=p)
//        {
//            cout<<"mp["<<i<<"] : "<<mp[i]<<endl;
//            p+=3;
//        }
//        cout<<endl<<endl<<endl;
//        ll take=0;
//        while(card>=2)
//        {
//            p=2;
//            for(i=2; i<=mx; i+=p)
//            {
//                if(i>card)
//                {
//                    //cout<<"i : "<<i<<endl;
//                    cnt++;
//                    //cout<<"cnt : "<<cnt<<endl;
//                    take=card-(i-p);
//                    //cout<<"take : "<<take<<endl;
//                    break;
//                }
//                p+=3;
//            }
//            card=take;
//            //cout<<"card : "<<card<<endl;
//        }
//        //cout<<"final cnt : "<<cnt<<endl;
//        //cout<<cnt<<endl;
//        mp.clear();
//    }
}
