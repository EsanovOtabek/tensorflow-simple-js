//#include <bits/stdc++.h>
//using namespace std;
//#define ll long long
//
//int main()
//{
//    map<int,int> mp;
//    map<int,int> ::iterator it;
//    
//    int n,a,c=0;
//    cin>>n;
//    for(int i=0;i<n;i++){
//    	cin>>a;
//    	mp[a]++;
//	}
//	
//	for(it=mp.begin();it!=mp.end();it++){
//		if(it->second%2==1) c++;
//	}
//	cout<<c;
//}         

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    
    int n,c=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
    	cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]==a[i+1]){
			i++;
			c++;
		}
	}
	
	cout<<n-2*c;
}         