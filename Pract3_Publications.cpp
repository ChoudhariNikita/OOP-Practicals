//Imagine a publishing company which does marketing for book and audio cassette versions. 
//Create a class publication that stores the title (a string) and price (type float) of publications. 
//From this class derive two classes: book which adds a page count (type int) and tape which 
//adds a playing time in minutes (type float).
//Write a program that instantiates the book and tape class, allows user to enter data and 
//displays the data members. If an exception is caught, replace all the data member values with 
//zero values.

#include<iostream>
#include<stdio.h>
using namespace std;

class publications{
	private:
		string title;
		float price;
	
	public:
		void add(){
			cout << "\nEnter the Publication information.......... " << endl;
			cout << "Enter Title of the Publication : ";
			cin.ignore(); 
			getline(cin, title);
			cout << "Enter Price of Publication : ";
			cin >> price;
		}
		void display(){
			cout << "\n--------------------------------------------------";
			cout << "\nTitle of Publication : " << title;
			cout << "\nPublication Price : " << price;
		}
};

class book:public publications{
	private:
		int page_count;
	
	public:
		void add_book(){
			try{
				add();
				cout << "Enter Page count of book : ";
				cin >> page_count;
				
				if(page_count<=0)
					throw page_count;
			}
			catch(...){
				cout<<"\nPage count should be greator than 0!!";
				page_count=0;
			}
	}
		
		void display_book(){
			display();
			cout<<"\nPage count :"<<page_count;
		}
};

class tape:public publications{
	private:
		float play_time;
	
	public:
		void add_tape(){
			try{
				add();
				cout << "Enter play duration of tape : ";
				cin >> play_time;
				
				if(play_time<=0)
					throw play_time;	
			}
			catch(...){
				cout<<"Play duration of tape should be greator than 0!!";
				play_time=0;
			}
		}
		
		void display_tape(){
			display();
			cout<<"\nPlay duration :"<<play_time<<" min";
		}
};

int main(){
	book b1[10];
	tape t1[10];
	int ch;
	int b_count=0,t_count=0;
	int i;
	do{
		 cout << "\n* * * * * PUBLICATION DATABASE SYSTEM * * * * *";
		 cout << "\n--------------------MENU-----------------------";
		 cout << "\n1. Add Information to Books";
		 cout << "\n2. Add Information to Tapes";
		 cout << "\n3. Display Books Information";
		 cout << "\n4. Display Tapes Information";
		 cout << "\n5. Exit";
		 cout << "\n\nEnter your choice : ";
		 cin>>ch;
		 
		 switch(ch){
		 	case 1:
		 		b1[b_count].add_book();
			 	b_count++;
				break;
			 
			case 2:
				t1[t_count].add_tape();
				t_count++;
				break;
			
			case 3:
				for(i=0;i<b_count;i++){
					b1[i].display_book();
				}
				break;
			
			case 4:
				for(i=0;i<t_count;i++){
					t1[i].display_tape();
				}
				break;
						
			case 5:
				exit(0);	
		 } 
	}while (ch != 5);
	return 0;
}

