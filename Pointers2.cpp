#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////////////////////////
int main()
{   
//Pointers and Arrays
    int intarray[] = { 31, 54, 77, 52, 93 }; //array
    int* ptrint;             //pointer to int
    ptrint = intarray;       //points to intarray
    for(int j=0; j<5; j++)   //for each element,
        cout << *(ptrint++) << endl;  //print value
     
    ///////////////////////////////////////////////////////////////////////////////
    
    double var = 15.464;
	centimize1(var);  //func manipulates the original var;
	centimize1(&var);
	///////////////////////////////////////////////////////////////////////////////

//Passing Arrays
    double  array[]= {1.0 , 1.5 , 2.0 , 2.5 , 3.0 };
	centimize3(array); // double* is equivalent here to double[], 

///////////////////////////////////////////////////////////////////////////////
//Ordering Array
   int num1 = 11, num2 = 22 , num3 = 33 , num4 = 44 ;
   order(&num1,&num2  ) ;
   order(&num3,&num4  ) ;
     
    

   return 0;
}

////////////////////////////////////////////////////////////////////////////////

//Pointers and Functions 
   /*there are three ways to pass arguments to a function: by value, by
   reference/memory , and by pointer. */
   
   //1. By reference/memory (the variable is passed along with address-of operator)
   void centimize1(double &v)
   {     v *= 2.54;    // v and var is same   
         cout <<"var" << v << endl;   
   }   
   //2. By pointer note : pointer holds memory address
    void centimize2(double *pv)
   {     *pv *= 2.54; //dereference operator to access the value from memory addres  
         cout <<"var" << *pv << endl;   
   }   
    
//Passing Arrays
    void centimize3(double *pvars){
    	for(int j=0 ; j<5 ; ++j){
    		*(pvars++) *= 2.54 ;
    		 cout << "varray[" << j << "]=" 
			      << *(pvars++) << " centimeters" << endl;		}  	
    }   		
    		
//Ordering Arrays
void order(int *num1, int *num2 ){
	if (*num1 > *num2  ){
		int temp = *num1; //dereference operator 
		*num1 = *num2  ; // dereference operator
		*num2 = temp ;  //dereference operator
		cout << "num1" << *num1 << endl;
		cout << "num2" << *num2 << endl ; 
	}
	
} 
		    
   
