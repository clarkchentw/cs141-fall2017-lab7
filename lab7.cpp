#include <iostream>
using namespace std;

#define LIMIT 25

/*
Swap the ith and jth elements of the character array letters[].

Example: swapping the 2nd and 4th elements of "palindrome" is "panildrome"
*/
void swap(char letters[], int i, int j){
	char temp = letters[j];
	letters[j] = letters[i];
	letters[i] = temp;
}

/*
Display the contents of the character array letters[].

Example: if letters[] = "palindrome", then this function should print "palindrome" to the output console.
*/
void displayLetters(char letters[]){
	cout << letters << endl;
}

/*
Reverse the contents of the character array letters[].

Example: if letters[] = "palindrome", then this function updates to letters[] = "emordnilap"
*/
void reverseLetters(char letters[]){
	for(int i=0; i<LIMIT; i++) {
	   int j = LIMIT - i - 1;
	   swap( letters, i, j);
	}
}

/*
This program will reverse the contents of the character array letters[].
*/
main()
{
	//initialize the character array letters[]
	char letters[]="Rats live on no evil star";

	//display the contents of the character array letters[]
	displayLetters(letters);

	//reverse the contents of the character array letters[]
	reverseLetters(letters);

	//display the contents of the character array letters[]
	displayLetters(letters);

	return(0);
}