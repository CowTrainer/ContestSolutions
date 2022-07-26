#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int check(int n, int x, string cards[])
{
	// function to check if next x from position n are "high cards"
	if((n + x) > 51)
	{
		return 0;	
	}
	else
	{
		for (int i = 1; i <= x; i++)
		{
			if(cards[i+n] == "jack" || cards[i+n] == "queen" || cards[i+n] == "king" || cards[i+n] == "ace")
			{
				return 0;
			}
		}
	}
	return 1;
}

int main()
{
	// variable initilization;
	string cards[52];
	int pointsA = 0;
	int pointsB = 0;

	// boolean to alternatve between A's draw and B's draw
	bool isA = true;

	// input cards
    for (int i = 0; i < 52; i++)
    {
    	cin >> cards[i];
    }

    // go through each card and check for scoring oppourtunities
    for(int i = 0; i < 52; i++)
    {
    	// if the card is a scoring opportunity and the next few cards are valid, add points;
    	if(cards[i] == "ace" && check(i,4,cards) == 1)
    	{
    		// determine who to add points
    		if(isA)
    		{
    			cout << "Player A scores 4 point(s).\n";
    			pointsA += 4;
    		}
    		else
    		{
    			cout << "Player B scores 4 point(s).\n";
    			pointsB += 4;
    		}

    	}

    	// do the same for the rest
    	else if(cards[i] == "king" && check(i,3,cards) == 1)
    	{
    		if(isA)
    		{
    			cout << "Player A scores 3 point(s).\n";
    			pointsA += 3;
    		}
    		else
    		{
    			cout << "Player B scores 3 point(s).\n";
    			pointsB += 3;
    		}
    	}
    	else if(cards[i] == "queen" && check(i,2,cards) == 1)
    	{
    		if(isA)
    		{
    			cout << "Player A scores 2 point(s).\n";
    			pointsA += 2;
    		}
    		else
    		{
    			cout << "Player B scores 2 point(s).\n";
    			pointsB += 2;
    		}
    	}
    	else if(cards[i] == "jack" && check(i,1,cards) == 1)
    	{
    		if(isA)
    		{
    			cout << "Player A scores 1 point(s).\n";
    			pointsA += 1;
    		}
    		else
    		{
    			cout << "Player B scores 1 point(s).\n";
    			pointsB += 1;
    		}
    	}
    	// switch who has the draw next turn
    	isA = !isA;
    }
    // print output;
    cout << "Player A: " << pointsA << " point(s).\n";
    cout << "Player B: " << pointsB << " point(s).\n";
}