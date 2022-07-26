#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
	char a;
	int counter = 0;
	int pts = 0;
	int total = 0;
	cin >> a;
	cout << "Cards Dealt              Points\n" << "Clubs ";
	while(cin >> a)
	{
		switch (a)
		{
			case 'A':
				pts += 4;
				counter++;
				cout << "A ";
				break;
			case 'K':
				pts += 3;
				counter++;
				cout << "K ";
				break;
			case 'Q':
				pts += 2;
				counter++;
				cout << "Q ";
				break;
			case 'J':
				pts++;
				counter++;
				cout << "J ";
				break;
			case 'D':
				if (counter == 0)
				{
					pts += 3;
				}
				else if (counter == 1)
				{
					pts += 2;
				}
				else if (counter == 2)
				{
					pts++;
				}
				cout << " " << pts << '\n';
				cout << "Diamonds ";
				total += pts;
				counter = 0;
				pts = 0;
				break;
			case 'H':
				if (counter == 0)
				{
					pts += 3;
				}
				else if (counter == 1)
				{
					pts += 2;
				}
				else if (counter == 2)
				{
					pts++;
				}
				cout << " " << pts << '\n';
				cout << "Hearts ";
				total += pts;
				counter = 0;
				pts = 0;				
				break;
			case 'S':
				if (counter == 0)
				{
					pts += 3;
				}
				else if (counter == 1)
				{
					pts += 2;
				}
				else if (counter == 2)
				{
					pts++;
				}
				cout << " " << pts << '\n';
				cout << "Spades ";	
				total += pts;
				counter = 0;
				pts = 0;			
				break;
			default:
				counter++;
				cout << a << ' ';
		}
	}
	if (counter == 0)
	{
		pts += 3;
	}
	else if (counter == 1)
	{
		pts += 2;
	}
	else if (counter == 2)
	{
		pts++;
	}
	cout << " " << pts << '\n';
	total += pts;

	cout << "Total " << total << '\n';
}