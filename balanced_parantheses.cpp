#include<bits/stdc++.h>
using namespace std;
void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

class Node
{
public:
	int data;
	Node *next;	
};


int main()
{
	init_code();
	string str;
	cin>>str;
	stack<char>s;
	for(int i=0;i<str.size();i++){
		if(str[i]=='(' || str[i]=='{' || str[i]=='['){
			s.push(str[i]);
			continue;
		}
		else if(!s.empty() && (str[i]==')' && s.top() == '(' 
			|| str[i]=='}' && s.top() == '{' || str[i]==']' && s.top() == '[')){
			s.pop();
		}
	}
	if(s.empty())
		cout<<"Balanced"<<endl;
	else
		cout<<"Not Balanced"<<endl;
}
