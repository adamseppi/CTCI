#include <iostream>
#include <string>

using namespace std;

int fib(int n, int sum){
	string suffix = "";
	if(n%10==1) suffix="st";
	else if(n%10==2) suffix="nd";
	else if(n%10==3) suffix="rd";
	else suffix="th";
	cout<< n << suffix <<": "<< sum <<endl;

	if(n<=0){
		return sum+0;
	}
	else if(n==1){
		return sum+1;
	}
	else{
		return fib(n-1,n+sum) + fib(n-2,n+sum);
	}
}

int main(int argc, char* argv[]){

	if(argc<2){

		cout<<"You fudged up w/ parameters"<<endl;

		return 0;
	}

	int num = stoi(argv[1]);
	

	if(num==0){

		cout<<"Use some sense bruhhhhh"<<endl;

		return 0;
	}

	//fib(num,0);

	float last=1;
	float lastlast=0;
	float fib=1;
	string suffix = "";
	

	for(int i=1; i<num; i++){
		
		if(i%10==1) suffix="st";
		else if(i%10==2) suffix="nd";
		else if(i%10==3) suffix="rd";
		else suffix="th";
		cout<< i << suffix <<": "<< fib <<endl;
		fib = last + lastlast;
		lastlast=last;
		last=fib;
	}

	return 0;
}



