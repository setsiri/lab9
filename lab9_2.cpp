#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt");
	dest.open("cheerbook_copy.txt");
	
	string textline;
	getline(source,textline);
	dest << "-------------------- BOOM ---------------------"<<endl;
	dest << textline << endl;
	int i = 0;
	while(i<8){
		getline(source,textline);
		dest << textline << endl;
		i++;
	}
	dest << "-------------------- HA!! ---------------------";


    source.close();
    dest.close();
	return 0;
}