#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);


	ll t;
	cin >> t;

	while(t--)
	{
		ll n;
		cin >> n;
    	
    	ll temp, evcount = 0;
    	
    	for(ll i = 0; i<n; i++)
    	{
    		cin >> temp;
    		
    		if(temp%2==0)
    			evcount++;
		}
    	
    	ll ans = evcount*(n-evcount);

		cout << ans << "\n";

	}

}
