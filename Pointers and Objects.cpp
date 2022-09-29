/*new operator : C++ provides a different approach to obtaining blocks of memory: the new 
operator. This versatile operator obtains memory from the operating system and returns a 
pointer to its starting point.A pointer is always necessary to store the memory block obtained from 
new operator*/
#include<iostream>
using namespace std; 
 

class person{
	private :
		string name;
		string education ;
		
	public :
	   	void get(){
	   		cout << "name : " << name ; cin >> name ; cout << endl;
			cout <<  "Education : "  ; cin >> education ; cout << endl; 
		   }
		void display(){
			cout << "name : " <<  name << endl;
			cout <<  "Education : "  << education  << endl; 
		}   
		
};

int main(){
	person* pobj = new person;
	pobj->get() ;
	pobj->display() ;
	delete pobj;
	
	/*the delete operator deletes the memory reserved by new operator but doesn't delete 
	pointer that points to it .
	if you want to delete an array reserved by new , you do it like this
	delete[] parray;*/

}
 

