/*
 * Created : 2020-01-01 09:41:09
 * Author : Appala Naidu Gadu
 * Handle : arrayappy
 * Email : arrayappy@gmail.com
 * StopStalk : https://www.stopstalk.com/user/profile/arrayappy
 * Motto : Keep Calm and Code On.
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{   ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n,c;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		c=0;
		for(int j=1;j<n;j++)
		{
			if(i%j==0)
			{
				c++;
			}
		}
		if(c==2)
		{
			cout<<i<<" ";
		}
	}
	return 0;
}

