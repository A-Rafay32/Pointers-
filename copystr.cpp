//copystr.cpp

void copystr(char* dest , char* src){
	while(*src) // until null character appears
		*dest++ = *src++;
	*dest = '\0' ; //insert null character in dest when found in src
}  

int main (){
	
	char* str1 = "Hello";
	char str2[10];
	copystr(str1, str2) ;// func makes a pointer copy of str2
	cout << str2 << endl;  
	
}