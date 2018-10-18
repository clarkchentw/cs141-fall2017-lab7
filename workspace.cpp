#include <iostream>
#include <cstring>
using namespace std;



main()
{
	
	char inputLine[ ] = "first second third";
	int strLen = strlen(inputLine);
	int firstWordEnd = -1;
	int firstWordEndBackup = -1;
	int secondWordEnd = -1;
	char firstWord[ ] = "";
	string secondWord = "";
	for (int i = 0; i < strLen; i++){
		if (inputLine[i] == ' ' && firstWordEnd == -1){
			firstWordEnd = i;
			firstWordEndBackup = i;
		}
		else if (inputLine[i] == ' '){
			secondWordEnd = i;
			break;
		}
	}
	
	// assign first word into firstWord
	strncpy(firstWord, inputLine, firstWordEnd+0);
	cout << firstWord << endl;
	
	
	for (int i = firstWordEndBackup+1; i < secondWordEnd; i++){
		secondWord += inputLine[i];
	}
	cout << secondWord;
	

	return(0);
}