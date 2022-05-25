#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main () {
	int number;
	cout<< "How many platforms are there? ";
	cin>> number;
	cin.ignore();
	string* pPlatforms = new string[number];
	//pointer
	for (int i = 0; i < number; i++) {
		cout<< "Enter platform #"<< " "<< i + 1;
		getline(cin,pPlatforms[i]);
	}
	cout<< "Following are the trains present here \n";
	cout<< "---------------------------\n";
	for (int i = 0; i < number; i++) {
		cout<< "Platform #"<< i + 1<< " "<< pPlatforms[i]<< endl;
		
		
		
	}
	
}
