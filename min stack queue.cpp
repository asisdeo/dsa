#include "bits/stdc++.h"
using namespace std;

#define pb             push_back
#define mp             make_pair
#define eb             emplace_back
#define ll             long long
#define all(x)         x.begin(),x.end()
#define ff 			   first	
#define ss 			   second

void inint(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

int main(){inint();

	stack< pair<int,int> >s;

	int n;
	cin>>n;

	for (int i = 0; i < n; ++i)
	{
	    int z;
	    cin>>z;

	    if(s.empty()){
	    	s.push({z,z});
	    }
	    else{
	    	int m=min(z,s.top().ss);
	    	s.push({z,m});
	    }
	}

	//s.top().ff;
	//s.pop();
	//s.top().ss;

	



	   






















    
return 0;} 
