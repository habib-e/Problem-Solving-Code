#include<bits/stdc++.h>
using namespace std;
/*
	Habib
	ID: 080
*/
string remain;
string rmvfun(string cod)
{
	int n = cod.length();
	string res;
	bool isSingleLineCmntStarted = false;
	bool isMultiLineCmntStarted = false;
	for (int i = 0; i < n; i++)
	{
		if (isSingleLineCmntStarted == true and cod[i] == '\n'){//comments ends here check
			isSingleLineCmntStarted = false;
			remain+=cod[i];
		}
		else if (isMultiLineCmntStarted == true and cod[i] == '*' and cod[i + 1] == '/'){//also comment ends here check
			remain+=cod[i];
			remain+=cod[i+1];
			remain+="\n";
			isMultiLineCmntStarted = false, i++;
		}
		else if (isSingleLineCmntStarted or isMultiLineCmntStarted){//according previous two condition
			remain+=cod[i];
			continue;
		}
		else if (cod[i] == '/' and cod[i + 1] == '/'){//single line started
			remain+=cod[i];
			remain+=cod[i+1];
			isSingleLineCmntStarted = true, i++;
		}
		else if (cod[i] == '/' and cod[i + 1] == '*'){// multiple line started
			remain+=cod[i];
			remain+=cod[i+1];
			isMultiLineCmntStarted = true, i++;
		}
		else res += cod[i];// the only line that doesn't contain comment
	}
	return res;
}
int main()
{
	string cod;
	string s;
	while (getline(cin, s)) {
		cod += s + "\n";
		if(s=="#"){
			break;
		}
	}
	cout << "Before Removing Comment...\n";
	cout << cod << endl;
	cout << "After Removing Comment...\n";
	cout << rmvfun(cod);
	cout << "Removed Comment is : \n";
	cout << remain << "\n";
	return 0;
}

