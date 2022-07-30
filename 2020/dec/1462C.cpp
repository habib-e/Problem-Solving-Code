#include<bits/stdc++.h>
using namespace std;
int sumDigits(int no)
{
   return no == 0 ? 0 : no%10 + sumDigits(no/10) ;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,s=0;
        cin>>x;
        if(x>=1 and x<=9) cout<<x<<endl;
        else if(x>=10 and x<=17){
            s=sumDigits(x);
            cout<<s<<9<<endl;
        }
        else if(x>=18 and x<=24){
            s=x-17;
            cout<<s<<89<<endl;
        }
        else if(x>=25 and x<=30){
            s=x-24;
            cout<<s<<789<<endl;
        }
        else if(x>=31 and x<=35){
            s=x-30;
            cout<<s<<6789<<endl;
        }
        else if(x>=36 and x<=39){
            s=x-35;
            cout<<s<<56789<<endl;
        }
        else if(x>=40 and x<=42){
            s=x-39;
            cout<<s<<456789<<endl;
        }
        else if(x>=43 and x<=44){
            s=x-42;
            cout<<s<<3456789<<endl;
        }
        else if(x==45){
            cout<<123456789<<endl;
        }
        else
            cout<<-1<<endl;
    }



}
