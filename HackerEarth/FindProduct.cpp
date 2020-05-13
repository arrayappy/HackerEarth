/*
 * Created : 2020-01-02 09:41:09
 * Author : Appala Naidu Gadu
 * Handle : arrayappy
 * Email : arrayappy@gmail.com
 * StopStalk : https://www.stopstalk.com/user/profile/arrayappy
 * Motto : Keep Calm and Code On.
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{   
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	unsigned long long int n,product=1;
	cin>>n;
	unsigned int arr[1000];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		product=(product*arr[i])%(1000000007);
	}
	cout<<product;
	return 0;
}

