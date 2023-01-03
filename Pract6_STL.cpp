//Write C++ program using STL for sorting and searching user defined records such as Item 
//records (Item code, name, cost, quantity etc) using vector container.


#include <iostream> //standard input output stream header file
#include <algorithm> //The STL algorithms are generic because they can operate on a variety of data structures
#include <vector> //The header file for the STL vector library is vector.
using namespace std;

class items{
	private:
		string name;
		int cost;
		int quantity;
	public:
		int code;
		
		items(int code, string name, int cost, int quantity){
			code=code;
			name=name;
			cost=cost;
			quantity=quantity;			
		}
		
		void display(){
			cout<<"Item Code: "<<code;
			cout<<"Item Name: "<<name;
			cout<<"Item Cost: "<<cost;
			cout<<"Item Quantity: "<<quantity;
			
		}
		
};

int main(){
	vector<items> v1;
	int ch;
	
	while(1){
		
		cout<<"\n Choose \n1: Insert item \n2: Display Items \n3: Search an item \n4: Sort \n5: Exit";
		cin>>ch;
		
		if(ch==1){
						
			string name;
			int cost,quantity,code;
			
			cout<<"Enter item details: Code| Name| Cost| Quantity :"<<endl;
			cin>>code>>name>>cost>>quantity;
			
			// Call constructor for adding every new item
			items it1(code,name,cost,quantity);
			
			// add item in vector
			v1.push_back(it1);
		}
		else if(ch==2){
			for(int i=0;i<v1.size();i++){
				v1[i].display();
			}
		}
		else if(ch==3){
			int c,flag=0;
			
			cout<<"Enter item code to be searched: "<<endl;
			cin>>c;
			
			for(int i=0;i<v1.size();i++){
				if(v1[i].code==c){
					v1[i].display();
					flag=1;
					break;
				}
			}
			if(flag==0){
				cout<<"Item not found!!";
			}
			
		}
		else if(ch==4){
			
		}
		else if(ch==0){
			cout<<"Exited.."<<endl;
		}
	}
}

