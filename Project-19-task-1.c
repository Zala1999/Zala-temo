
#include <iostream>
#include <string.h>

using namespace std;

char* removeUtil(char *str, char *last_removed)
{
	
	if (str[0] == '\0' || str[1] == '\0')
		return str;

	
	if (str[0] == str[1])
	{
		*last_removed = str[0];
		while (str[1] && str[0] == str[1])
			str++;
		str++;
		return removeUtil(str, last_removed);
	}

	
	char* rem_str = removeUtil(str+1, 
							last_removed);

	if (rem_str[0] && rem_str[0] == str[0])
	{
		*last_removed = str[0];
	
		// Remove first character
		return (rem_str+1); 
	}

	// If remaining string becomes 
	// empty and last removed character
	// is same as first character of 
	// original string. This is needed
	// for a string like "acbbcddc"
	if (rem_str[0] == '\0' && 
				*last_removed == str[0])
		return rem_str;

	// If the two first characters 
	// of str and rem_str don't match, 
	// append first character of str 
	// before the first character of
	// rem_str. 
	rem_str--;
	rem_str[0] = str[0];
	return rem_str;
}

// Function to remove
char *remove(char *str)
{
	char last_removed = '\0';
	return removeUtil(str, &last_removed);
}

int main()
{
	char str1[] = "yuvrajzala";
	cout << remove(str1) << endl;

	char str2[] = "azxxxzy";
	cout << remove(str2) << endl;

	char str3[] = "caaabbbaac";
	cout << remove(str3) << endl;

	char str4[] = "gghhg";
	cout << remove(str4) << endl;

	char str5[] = "aaaacddddcappp";
	cout << remove(str5) << endl;

	char str6[] = "aaaaaaaaaa";
	cout << remove(str6) << endl;

	char str7[] = "qpaaaaadaaaaadprq";
	cout << remove(str7) << endl;

	char str8[] = "acaaabbbacdddd";
	cout << remove(str8) << endl;

	char str9[] = "acbbcddc";
	cout << remove(str9) << endl;

	return 0;
}


