int main()
{
 //O_O ;
   ll t;
   cin>>t;
   while(t--){
        ll n;cin>>n;
   string s ;cin>>s;
   map<char,ll>mp;ll x=0;
   for(ll i=0;i<n;i++)
   {
       if(mp[s[i]]==0){
            mp[s[i]]++;
        while(s[i]==s[i+1]&&i+1<n)i++;
 
       }
       else x=1;
 
   }
   if(x) no;
   else yes;
mp.clear();
 
 
 
 
   }