#include <bits/stdc++.h>
#include <sstream>
#include <vector>
using namespace std;

void printEmail(string s){
	vector<string>v;
	stringstream ss(s);
	string token;
	
	while(!ss.eof()){
		string tmp;
		ss >> tmp;
		v.push_back(tmp);
	}
	cout<<v.back();
	
	for(int i = 0; i < v.size() - 1; i++){
		cout<<v[i][0];
	}
	cout<<"@gmail.com\n";
}

int main(){
	int n; cin>>n;
	getchar();
	vector<string> s;
 
	while(n--){
		string tmp;
		getline(cin, tmp);
		s.push_back(tmp);	
	}
			
	for(int i = 0; i < s.size(); i++){
		for(char &x:s[i]){
			x = tolower(x);
		}
	}
	
	for(int i = 0; i < s.size(); i++){
		printEmail(s[i]);
	}
    return 0;
}
