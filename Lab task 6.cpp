
//TASK 1
#include <iostream>
using namespace std;

int main () {
	
int terms, first=0, second=1,next;
cout<<"Enter the number of terms you want in the sequence: ";     //Determines the amount of values displayed
cin>>terms;
cout<<"The sequence is: "<<endl;
for (int i=1; i<terms; i++) {                                     //Outer loop that prints total number of terms
	for (int j=1; j<=i; j++) {                                    //Inner loop that prints the terms using i
		cout<<first<<endl;
		next=first+second;                                        //Adding the terms for appropriate fibonacci values
		first=second;                                             //Assigns the value of the first to second term
		second=next;                                              //Swaps the value of the second term with the next term
	}
	cout;
}
return 0;
}

//TASK 2
#include <iostream>
using namespace std;
int main () {

int size,number=1;
cout<<"Enter the size of the triangle: "; cin>>size;  //Determines the number of rows
for  (int i = 0; i<=size; ++i){                       //Outer loop for number of values to be printed
for  (int j=0; j<=i; ++j) {                           //Inner loop to print the next value in each row
	cout<<number<<" ";                                //Prints the spaces in front of each number
	++number;
}
cout<<endl;                                           //Prints the numbers
}
return 0;
}

