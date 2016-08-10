#include <iostream>
#include <string>

using namespace std;

bool uniqueOrNot(string str){
	int hold=0;
	char c = 'a';

	for(int i=0; i<str.size(); i++){
		c = str.at(i);
		if((hold & (1<<(c-'a'))) != 0)
			return false;
		else
			hold = hold | (1<<(c-'a'));
	}

	return true;
}

int main(int argc, char* argv[]){

	bool unique = false;

	if(argc>1){
		char* check = argv[1];
		string s(check);
		unique = uniqueOrNot(s);
	}

	cout<< (unique ? "all unique" : "not unique") <<endl;

	return 0;
}

