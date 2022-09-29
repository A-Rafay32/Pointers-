// bsort.cpp
#include<iostream>   
using namespace std;
void order(int* numb1, int* numb2) //orders two numbers
{
    if(*numb1 > *numb2) //if 1st larger than 2nd,
    {
    int temp = *numb1; //swap them
    *numb1 = *numb2;
    *numb2 = temp;
    }
}
//----------------------------------------------------------------------------

void display(int *parr, int n ){
    for(int j=0; j<n; j++) //print out sorted array
        cout << *(parr++) << " "; 
    cout << endl;
}


void bsort(int *parr, int n)
{
    int j, k;                  //indexes to array
    for(j=0; j<n-1; j++)       //outer loop
        for(k=j+1; k<n; k++)   //inner loop starts at outer
            order(parr+j, parr+k); //addition to memory addresses 
}
//--------------------------------------------------------------

int main()
{
    
    const int N= 10; 
    int arr[N]= { 3, 8, 6, 9, 1, 5, 7, 2, 4, 10 };
    bsort(arr, N);
    display(arr ,N );
    
    
    return 0;
}
//--------------------------------------------------------------
