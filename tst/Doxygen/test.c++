#include <iostream.h>
#include <ctype.h>   							///another lib to use toupper

void main ()
{
	char grade = ' ';
	cout << "Enter a grade: ";
	cin >> grade;
	grade = tolower ( grade );  					///moves char to lower case (like toupper)
	switch ( grade )  						///puts 'grade' to a switch to cases below
	{          							///inner barcket
		case 'a': cout << "Excellent" << endl; break; 		///break cuts exe at once
		case 'b': cout << "Above Average" << endl; break;
		case 'c': cout << "Average" << endl; break;
		case 'd':                     				///this points to the statement below
		case 'f': cout << "Below Average" << endl; break;
		case 'i': cout << "Incomplete" << endl; break;
		case 'w': cout << "Withdrawl" << endl; break;
		default: cout << "Not recognized" << endl;  		///default
 }
 }


