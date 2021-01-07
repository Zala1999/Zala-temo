#include<iostream> 
using namespace std; 

// Function to count uppercase, lowercase, 

void Count(string str) 
{ 
	int upper = 0, lower = 0, number = 0, special = 0; 
	for (int i = 0; i < str.length(); i++) 
	{ 
		if (str[i] >= 'A' && str[i] <= 'Z') 
			upper++; 
		else if (str[i] >= 'a' && str[i] <= 'z') 
			lower++; 
		else if (str[i]>= '0' && str[i]<= '9') 
			number++; 
		else
			special++; 
	} 
	cout << "Upper case letters: " << upper << endl; 
	cout << "Lower case letters : " << lower << endl; 
	cout << "Number : " << number << endl; 
	cout << "Special characters : " << special << endl; 
} 


int main() 
{ 
	string str = "#YUvRAj01@ZAla07"; 
	Count(str); 
	return 0; 
}





