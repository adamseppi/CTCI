#include <iostream>
#include <string>

using namespace std;

string URLify(string input, int n){
	string output;
	for(int i=0; i<n; i++){
		if(input.at(i) == ' ')
			output.append("%20");
		else
			output.push_back(input.at(i));
	}
	return output;
}

int main(int argc, char* argv[]){

	bool unique = false;

	if(argc>1){
		char* check = argv[1];
		int num = stoi(argv[2]);
		string s(check);
		cout<<endl<<URLify(s, num)<<endl<<endl;
	}

	//cout<< (unique ? "all unique" : "not unique") <<endl;

	return 0;
}

