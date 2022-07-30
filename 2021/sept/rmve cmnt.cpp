#include <iostream>
using namespace std;
string removeComments(string prgm)
{
    int n = prgm.length();
    string res;

    bool s_cmt = false;
    bool m_cmt = false;

    for (int i=0; i<n; i++)
    {

        if (prgm[i] == '/' && prgm[i+1] == '/')
            s_cmt = true, i++;
        else if (prgm[i] == '/' && prgm[i+1] == '*')
            m_cmt = true, i++;

        else if (s_cmt == true && prgm[i] == '\n')
            s_cmt = false;


        else if (m_cmt == true && prgm[i] == '*' && prgm[i+1] == '/')
            m_cmt = false, i++;

        else if (s_cmt || m_cmt)
            continue;

        else res += prgm[i];
    }
    return res;
}
void Detect_Comments(string prgm)
{
    int n = prgm.length();
    for(int i=0; i<n; i++)
    {

        if(prgm[i]=='/' and prgm[i+1]=='/')
        {
            for(int j=i+2; j<n; j++)
            {
                if(prgm[j]=='\n')
                {
                    for(int k=i; k<j; k++)
                    {
                        printf("%c",prgm[k]);
                        i++;

                    }
                }
            }
        }
        else if(prgm[i]=='/' and prgm[i+1]=='*')
        {

            for(int j=i+2; j<n; j++)
            {

                if(prgm[j-1]=='*' and prgm[j]=='/')
                {
                    for(int k=i; k<j; k++)
                    {
                        printf("%c",prgm[k]);
                        i++;

                    }
                }
            }
        }
    }

}
int main()
{
    string prgm,s;
    while (getline(cin, s)) {
		prgm += s + "\n";
	}
    cout << " Detected Comments "<<endl;
    Detect_Comments(prgm);
    cout<<endl;
    cout << " Modified Program "<<endl;
    cout << removeComments(prgm);

    return 0;
}
