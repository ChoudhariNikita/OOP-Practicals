//Write a program in C++ to use map associative container. The keys will be the names of states 
//and the values will be the populations of the states. When the program runs, the user is 
//prompted to type the name of a state. The program then looks in the map, using the state 
//name as an index and returns the population of the state.

#include<iostream>
#include<map>
//#include<string>
using namespace std;

int main(){
	
	map<string,int> state;
	int flag=0;
	string search;
	
	state.insert(pair<string,int>("Maharashtra",900909));
	state.insert(pair<string,int>("Goa",67859));
	state.insert(pair<string,int>("Gujrat",700909));
	state.insert(pair<string,int>("Punjab",63267));
	state.insert(pair<string,int>("Odisha",85000));
	
	cout<<"Enter the state to be searched: "<<endl;
	cin>>search;
	
	map<string,int>::iterator i; // iterator for map
	
	// iterating state from begin to end
	for(i=state.begin();i!=state.end();i++){
		if(search==i->first){
			flag++;
			
			// to access key use iterator->first 
			// to access value use iterator->second
			cout<<"The population of "<<i->first<<" ="<<i->second;
		}
	}
	
	if(flag==0){
		cout<<"Key is not present in population map!!"<<endl;
	}
		
	return 0;
}

