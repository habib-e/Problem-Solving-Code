#include <iostream>
#define ll long long
using namespace std;
/*
    C++ Program for
    Sum of XOR of all subarrays
*/
class Subarray
{
	public: void sumSubarrayXor(ll arr[], ll n)
	{
		// Define some auxiliary variables
		ll sum = 0;
		ll multiplier = 1;
		ll oddBits = 0;
		bool isOdd = false;
		// Working on initial 30 bits
		for (ll i = 0; i < 30; i++)
		{
			// Count active bits in alternate elements
			for (ll j = 0; j  < n; j++)
			{
				// Check (1 << i) bit is active or not
				if ((arr[j] &(1 << i)) != 0)
				{
					// Change the status
					isOdd = !isOdd;
				}
				if (isOdd == true)
				{
					// Increase counter position
					oddBits++;
				}
			}
			for (ll j = 0; j < n; j++)
			{
				// Change resultant sum
				sum = sum + (multiplier *oddBits);
				if ((arr[j] &(1 << i)) != 0)
				{
					oddBits = (n - j - oddBits);
				}
			}
			// Reset odd counter indicator
			isOdd = false;
			oddBits = 0;
			// Increase the multiplier by twice
			multiplier = multiplier *2;
		}
		// Display calculated result
		cout<< sum<<endl;
	}
};
int main()
{
	ll t;
	cin>>t;
	while(t--){	
		ll m;
		cin>>m;
		ll arr[m];
		for(ll i=0;i<m;i++){
			cin>>arr[i];
		}
		Subarray *task = new Subarray();
		// Get the size of arr
		ll n = sizeof(arr) / sizeof(arr[0]);
	/*
	    (7) + (2) + (5) + (1) + 
	    (7 ^ 2) + (2 ^ 5) + (5 ^ 1) + 
	    (7^ 2^ 5) + (2^ 5 ^ 1) +
	    (7^ 2^ 5^ 1)
	    --------------
	    38
	    --------------         
	*/
		task->sumSubarrayXor(arr, n);
	}
	
	return 0;
}