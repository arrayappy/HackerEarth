/*
 * Created : 2020-01-02 09:41:09
 * Author : Appala Naidu Gadu
 * Handle : arrayappy
 * Email : arrayappy@gmail.com
 * StopStalk : https://www.stopstalk.com/user/profile/arrayappy
 * Motto : Keep Calm and Code On.
 */
#include <bits/stdc++.h> 
using namespace std; 
int main() 
{
    string str1,str2;  
 	cin>>str1;
 	str2=str1;
    reverse(str1.begin(), str1.end()); 
  	if(str2==str1)
  		cout<<"YES";
  	else
  		cout<<"NO";
}
