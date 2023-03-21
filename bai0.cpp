#include <bits/stdc++.h>
#include <sstream>
using namespace std;

int main(){
	string s,_s; 
	getline(cin, s);
	stringstream ss;
	ss << s;
	int count_word = 0;
	
	while(!ss.eof()){
		ss >> _s;
		count_word++;
	}
	cout<<count_word;
    return 0;
}
