#include<iostream>
using namespace std;
class heater
{
	private:
		int temp;
	public:
		
		heater()
		{
			temp = 15;
		}
		void warmer()
		{
			temp += 5;
		}
		void cooler()
		{
			temp -= 5;
		}
		void print()
		{
			cout << "Temperature is : " << temp << endl;
		}
		~heater()
		{
			cout << "Memomry freed ......" << endl;
		};
};
int main()
{
	int n;
	heater h;
	cout << ".....MENU....." << endl << endl;
	cout << "Press 1 for warmer mutator....." << endl;
	cout << "Press 2 for cooler mutator....." << endl;
	cout << "Press 3 for printing....." << endl;
	cout << "Press 4 to exit....." << endl;
	do
	{
		cin >> n;
		switch (n)
		{
		case 1:
		{
			h.warmer();
			break;
		}
		case 2:
		{
			h.cooler();
			break;
		}
		case 3:
		{
			h.print();
			break;
		}
		case 4:
		{
			break;
		}
		default:
		{
			cout << "Enter valid option....." << endl;
		}
		}
	} while (n != 4);
	return 0;
}
