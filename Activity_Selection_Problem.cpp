#include <bits/stdc++.h>
using namespace std;

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    if(a.second == b.second){
        return (a.first < b.first);
    }
    return (a.second < b.second);
}

int main() {
	int n;
	cin>>n;
	vector<pair<int,int>>act;
    int s,d;
	for(int i=0;i<n;i++){
	    cin>>s>>d;
	    act.push_back(make_pair(s,d));
	}
	sort(act.begin(),act.end(),sortbysec);
	int c = 1,j=0;
	cout<<act[0].first<<" "<<act[0].second<<endl;
	for(int i=1;i<n;i++){
	    if(act[j].second<=act[i].first){
	        c++;
	        j=i;
	       cout<<act[i].first<<" "<<act[i].second<<endl;
	    }
	}
	cout<<c;
	return 0;
}
