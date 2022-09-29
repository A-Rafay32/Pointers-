//Pointers and Strings
#include<iostream>
using namespace std; 

int main(){
	char* str1 = "Testing string pointer " ;
	cout << str1++ << endl; // no change
	str1++;  // pointer now points to e
	cout << str1 << endl; 
	
	cout << "\n";
	char* str2 = "Testing 2" ; 
	cout << *str2 << endl; // prints  T only 
	while(*str2) // while null character
	    cout << *str2++ ;  // idk what * does on this line but it sure does smth   
	cout << endl;
	cout <<"\n";    
	
	char* str3 = "Testing 3";
	cout << *str3++  << endl; //prints T and moves to e  
	cout << str3 << endl;
	 
}