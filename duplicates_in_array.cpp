#include<bits/stdc++.h>
using namespace std;
void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}


void duplicates(int arr[], int n)
{
    map<int,int>m;
    for(int i=0;i<n;i++){
    	if(m.find(arr[i])==m.end()){
    		m[arr[i]] = 1;
    	}
    	else
    		m[arr[i]]++;
    }
    for(auto& it:m){
    	if(it.second>1){
    		cout<<it.first<<it.second<<endl;
    	}
    }
}


int main()
{
	init_code();
	int arr[] = { 1, 5, 7, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    duplicates(arr, n);
    return 0;
}
