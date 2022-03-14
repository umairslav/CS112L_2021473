#include<iostream>
#include<string>
using namespace std;
class stringType
{
private:
	string str1, str2;
public:
	stringType()
	{
		str1 = "a"; str2 = "b";
	}
	void setValues(string x, string y)
	{
		cout << "Enter first string : " << endl; cin >> x;
		cout << "Enter second string : " << endl; cin >> y;
		str1 = x;
		str2 = y;
	}
	void printValues()
	{
		cout << "First string is : " << str1 << endl;
		cout << "Second string is : " << str2 << endl;
	}
	int maxLength()
	{
		int num1 = 0;
		int num2 = 0;
		int i = 0;
		int j = 0;
		while (str1[i] != '\0')
		{
			num1++;
			i++;
		}
		while (str2[j] != '\0')
		{
			num2++;
			j++;
		}
		if (num1 > num2)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	int compare(string s1, string s2)
	{

		int i = 0;
		int j = 0;
		int n1 = 0;
		int n2 = 0;

		while (s1[i] != '\0')
		{
			n1++;
			i++;
		}
		while (s2[j] != '\0')
		{
			n2++;
			j++;
		}
		if (n1 != n2)
		{
			return 0;
		}
		else
		{
			int k = 0;
			int num = 0;
			while (s1[k] == s2[k] && s1[k] != '\0' && s2[k] != '\0')
			{
				if (s1[k] != s2[k])
				{
					return 0;
				}
				else {
					return 1;
				}
				k++;
			}
		}
	}
	void copy(string source, string destination)
	{
		source = destination;
	}
	string concatenate(string s1, string s2)
	{
		int count1 = 0;
		char temp[1000] = { ' ' };

		while (s1[count1] != '\0') {
			temp[count1] = s1[count1];
			count1++;
		}
		for (int i = 0; s2[i] != '\0'; i++) {
			temp[count1 + i] = s2[i];
		}
		return temp;
	}
	int searchWord(string word)
	{
		int k = 0;
		cout << "Compare the word with st1";
		for (int i = 0; str1[i] != '\0'; i++)
		{
			for (int j = 0; word[j] != '\0'; j++)
			{
				if (str1[j + i] == word[j])
				{
					return 1;
				}
				else
				{
					return 0;
					break;
				}

			}
		}
	}
	int searchChar(char ch)
	{
		int count = 0;
		for (int i = 0; str1[i] != '\0'; i++)
		{
			if (str1[i] != ch)
				count++;
		}
		if (count == 0)
			return 1;
		else
			return 0;
	}
};
int main()
{
	stringType s;
	while (true)
	{
		cout << "--------- MENU ---------" << endl;
		cout << "1. Set values" << endl;
		cout << "2. Print Values" << endl;
		cout << "3. Max Length" << endl;
		cout << "4. Compare" << endl;
		cout << "5. Copy" << endl;
		cout << "6. Concatenate" << endl;
		cout << "7. Search Word" << endl;
		cout << "8. Search Char" << endl;
		cout << "0. Exit" << endl;
		cout << "Enter any option: \n";
		int option;
		cin >> option;
		switch (option)
		{
		case 1:
		{
			cout << "Enter two values: ";
			string s1, s2;
			cin >> s1 >> s2;
			s.setValues(s1, s2);
			break;
		}
		case 2:
		{
			s.printValues();
			break;
		}
		case 3:
		{
			int c = s.maxLength();
			if (c == 1)
			{
				cout << "String 1 is longer.";
			}
			else
			{
				cout << "String 2 is longer.";
			}
			break;
		}
		case 4:
		{
			string s1, s2;
			cout << "Enter string 1: ";
			cin.ignore();
			getline(cin, s1);
			cout << "Enter string 2: ";
			getline(cin, s2);
			int k = s.compare(s1, s2);
			if (k == 1)
			{
				cout << "Strings are the same" << endl;
			}
			else
			{
				cout << "Strings are not the same" << endl;
			}
			break;
		}
		case 5:
		{
			cout << "Enter two strings: ";
			string s1, s2;
			cin >> s1 >> s2;
			s.copy(s1, s2);
			break;
		}
		case 6:
		{
			cout << "Enter two strings: ";
			string s1, s2;
			cin >> s1 >> s2;
			string s3 = s.concatenate(s1, s2);
			cout << s3;
			break;
		}
		case 7:
		{
			cout << "Enter word: ";
			string word;
			cin >> word;
			int k = s.searchWord(word);
			if (k == 0)
			{
				cout << "Word found" << endl;
			}
			else
			{
				cout << "Word not found" << endl;
			}
			break;
		}
		case 8:
		{
			cout << "Enter a Char to search in string : " << endl;
			char d;
			cin >> d;
			s.searchChar(d);
			if (s.searchChar(d) == 1)
				cout << "Char exists in string ..." << endl;
			else if (s.searchChar(d) == 0)
				cout << "Char does not exist in string ..." << endl;
			break;
		}
		case 0:
		{
			exit(0);
		}
		default:
		{
			cout << "Enter valid option: " << endl;
			break;
		}
		}
	}
	return 0;
}