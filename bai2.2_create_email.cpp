#include <bits/stdc++.h>
#include <sstream>
#include <vector>
using namespace std;

void creatEmail(string s, string &returnString){
	vector<string>v;
	stringstream ss(s);
	string token;
	
	while(!ss.eof()){
		string tmp;
		ss >> tmp;
		v.push_back(tmp);
	}
	
	string res = v.back();
	for(int i = 0; i < v.size() - 1; i++){
		res = res + v[i][0];
	}
	returnString = res;
}

int main(){
	int n; cin>>n;
	getchar();
	int count_s[n] = {0};
	vector<string> s;
 	vector<string> line_s(n,"");
 	
	while(n--){
		string tmp;
		getline(cin, tmp);
		s.push_back(tmp);	
	}
			
	for(int i = 0; i < s.size(); i++){
		for(char &x:s[i]){
			x = tolower(x);
		}
		creatEmail(s[i], line_s[i]);
	}
	
	for(int i = 0; i < line_s.size(); i++){
		count_s[i]++;
		for(int j = i + 1; j <line_s.size(); j++){
			if(line_s[i] == line_s[j]){
				count_s[j]++;
			}
		}
	}	
	
	for(int i = 0; i < line_s.size(); i++){
		if(count_s[i] > 1){
			cout<<line_s[i]<<count_s[i]<<"@gmail.com"<<endl;			
		}else{
			cout<<line_s[i]<<"@gmail.com"<<endl;
		}

	}
    return 0;
}
