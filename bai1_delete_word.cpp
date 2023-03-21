#include <bits/stdc++.h>
#include <sstream>
using namespace std;

int main(){
	string s, w;
	getline(cin, s);
	cin >> w;
	stringstream ss(s);
	string token;
	
	while(ss>>token){
		if(token != w){
			cout<< token <<" ";
		}
	}
	
    return 0;
}
