#include<bits/stdc++.h>
using namespace std;
void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}


int main()
{
	init_code();
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	int cum_sum = 0,max_s = -1,start;
	for(int i=0;i<n-1;i++){
		if(ar[i]==0)
			cum_sum=-1;
		else
			cum_sum=1;

		for(int j=i+1;j<n;j++){
			if(ar[j]==0)
				cum_sum+=-1;
			else
				cum_sum+=1;

			if(cum_sum == 0 && max_s < j-i+1){
				max_s = j-i+1;
				start = i;
			}
		}
	}
	if(max_s==-1)
		cout<<"No such subarray"<<endl;
	else
		cout<<"Subarray from "<<start<<" to "<<max_s<<endl;
}
