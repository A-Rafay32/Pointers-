/*What are pointers for? Here are some common uses:
• Accessing array elements
• Passing arguments to a function when the function needs to modify the original argument
• Passing arrays and strings to functions
• Obtaining memory from the system
• Creating data structures such as linked lists*/

#include<iostream>
using namespace std;

int main(){
	
//accessing the address of a variable with address-of operator(&);
int var1 = 11 , var2 = 22 , var3 =33 ; 
cout << "address of var1 "  << &var1 << endl;
cout << "address of var2 "  << &var2 << endl;
cout << "address of var3 "  << &var3 << endl;
cout << "donno" << *(&var3) << endl;

/*The addresses appear in descending order because local variables 
are stored on the stack, which grows downward in memory. 
If we had used global variables, they would have ascending addresses,
since global variables are stored on the heap, which grows upward.*/
///////////////////////////////////////////////////////////////////

//pointers are variables that hold address value ,it points to the address of something   
int *pvar = &var1;
cout << "a pointer variable " << pvar << endl ;  //memory address

//accessing the value of var1  with dereference operator 
cout << " value of var1 " << *pvar << endl;

//a int pointer must be assigned to int
//void pointer is general purpose and can be assigned to any data type
float var4 = 2345.223;
void *pvar2 = &var2;
void *pvar4 = &var4; 
cout << "void pointers " << pvar2 <<"\n"<<pvar4 << endl;

/*If for some unusual reason you really need to assign one kind 
of pointer type to another, you can use the reinterpret_cast*/
//ptrint = reinterpret_cast<int*>(flovar);
//ptrflo = reinterpret_cast<float*>(intvar); 

     
 
    
 
  	
	
}  