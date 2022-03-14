#include<iostream>
using namespace std;
class parity
{
	private:
		int s;
		int* arr = new int[s];
	public:
		parity()
		{
			s = 0;
		}
		void put(int n);
		void print();
		void dlete();
		int test();
		~parity()
		{
			cout << "Memory freed....." << endl;
		}
};
void parity::put(int n)
{
	int num = s;
	s += 1;
	int* temp = new int[s];
	for (int i = 0; i < num; i++)
		temp[i] = arr[i];
	delete[]arr;
	arr=temp;
	arr[num] = n;
}
void parity::dlete()
{
	int num = s;
	s -= 1;
	int* temp = new int[s];
	for (int i = 0; i < num; i++)
		temp[i] = arr[i];
	delete[]arr;
	arr = temp;
}
void parity::print()
{
	for (int i = 0; i < s; i++)
		cout << arr[i] << "\t";
	cout << endl;
}
int parity::test()
{
	if (s % 2 == 0)
		return 1;
	else
		return 0;
}
int main()
{
	int n;
	parity p;
	cout << ".....MENU....." << endl << endl;
	cout << "Press 1 to add member....." << endl;
	cout << "Press 2 to delete last member....." << endl;
	cout << "Press 3 for printing....." << endl;
	cout << "Press 4 to test if even or odd....." << endl;
	cout << "Press 5 to exit....." << endl;
	do
	{
		cin >> n;
		switch (n)
		{
		case 1:
		{
			cout << "Enter member to put : ";
			int y;
			cin >> y;
			p.put(y);
			break;
		}
		case 2:
		{
			p.dlete();
			break;
		}
		case 3:
		{
			p.print();
			break;
		}
		case 4:
		{
			int c;
			c = p.test();
			if (c == 0)
				cout << "False .. Odd members ....." << endl;
			else
				cout << "True .. Even members ....." << endl;
		}
		case 5:
		{
			break;
		}
		default:
		{
			cout << "Enter valid option....." << endl;
		}
		}
	} while (n != 5);
	return 0;
}
