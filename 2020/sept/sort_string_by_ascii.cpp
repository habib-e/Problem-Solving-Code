#include <iostream>
#include <cstring>
#include <map>
using namespace std;
map<char, int> mp;
int main()
{
   mp.clear();
   ---C1 = O(1);
   string s = "bAcabc12B";
   ---C2 = O(1);
   //cin>>s;
   for (int i = 0; i < s.length(); i++)
      ---C3 = O(n + 1);
   {
      mp[s[i]]++;
      ---C4 = O(n + 1);
   }
   for (char i = '0'; i <= '9'; i++)
      ---C5 = O(10);
   {
      if (mp[i])
         ---C6 = O(10);
      cout << i;
      ---C7 = O(10);
   }
   for (char i = 'A'; i <= 'Z'; i++)
      ---C8 = O(27);
   {
      if (mp[i])
         ---C9 = O(27);
      cout << i;
      ---C10 = O(27);
   }
   for (char i = 'a'; i <= 'z'; i++)
      ---C11 = O(27);
   {
      if (mp[i])
         ---C12 = O(27);
      cout << i;
      ---C13 = O(27);
   }
   cout << endl;
   ---C14 = O(1);
}
Now Calculating all cost with times : T(n) = C1 + C2 + C3 + C4 + C5 + C6 + C7 + C8 + C9 + C10 + C11 + C12 + C13 = 1 + 1 + (n + 1) + (n + 1) + 10 + 10 + 10 + 27 + 27 + 27 + 27 + 27 + 27 = 2 + 2(n + 1) + 30 + 162 = 2(n + 1) + 194 = 2n + 196 we ignore constant with taking the upper_bound
                                                                                                                                                                                                                                      so the time complexity is O(n)