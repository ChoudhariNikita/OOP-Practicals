#include<iostream>
#include<fstream>
using namespace std;

int main(){
	fstream file;
	
	file.open("demo.txt",ios::out);
	
	if(!file){
		cout<<"Cannot open file!!";
	}
	cout<<"File created successfully!!";
	
	file<<"Welcome to my world!!";
	file.close();
	
	file.open("demo.txt",ios::in);
	
	if(!file){
		cout<<"Error in opening file!!";
	}
	
	string data;
	
	while(!file.eof()){
		file>>data;
		cout<<data<<" ";
	}
	
	file.close();
	return 0;
}
