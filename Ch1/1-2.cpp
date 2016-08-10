#include <iostream>
#include <string>

using namespace std;

bool permutations(string one, string two){
	int holder[128] = {0};
	int unique = 0;

	if(one.size() != two.size()){
		return false;
	}

	for(int i=0; i<one.size(); i++){

		if(holder[one.at(i)]==0)
			unique++;
		holder[one.at(i)]++;
	}

	for(int i=0; i<two.size(); i++){

		if(holder[two.at(i)] == 0)
			return false;
		else if((holder[two.at(i)]-1) == 0)
			unique--;

		holder[two.at(i)]--;
	}

	return unique ? false : true;
}

int main(int argc, char* argv[]){

	bool permutation = false;

	if(argc>2){
		int y = 5;
		char* check1 = argv[1];
		char* check2 = argv[2];
		string s1(check1);
		string s2(check2);
		permutation = permutations(s1,s2);
	}
	cout<< (permutation ? "yes" : "no") <<endl;

	return 0;
}

