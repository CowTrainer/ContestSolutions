#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
	// intiliaze input variables, the string of instructions, the board (full of 0's (free real estate))
    int r,c,n;
    cin >> r >> c >> n;
    string ins[n];
    int board[r + 1][c + 1] = {};
    int robots[n][3];

    // take positional input, consturct it on the board and in the robots array
   	for (int i = 0; i < n - 1; i++)
   	{
		int y, x;
		cin >> y >> x;
		board[y][x] = 1;
		robots[i][0] = y;
		robots[i][1] = x;
   	}

   	// make copies for you to reset later
   	int boardcopy[r+1][c+1];
   	int robotscopy[n][3];
   	string inscopy[n];
  	copy(&board[0][0], &board[0][0]+(r+1)*(c+1),&boardcopy[0][0]);
   	copy(&robots[0][0], &robots[0][0]+(n*3),&robotscopy[0][0]);
   	// take the instructions
   	for (int i = 0; i < n; i++)
   	{
		string st;
		cin >> st;
		ins[i] = st;
   	}
   	copy(ins,ins+n,inscopy);
   	// simulation code
   	for (int i = 1; i <= r; i++)
   	{
   		for (int j = 1; j <= c; j++)
   		{
   			if(board[i][j] == 1)
   			{
   				continue;
   			}
   			else
   			{
   				// simulate a game
   				int killedrobots = 0;
   				robots[n][0] = i;
   				robots[n][1] = j;
   				while(true == true)
   				{
	   				for (int k = 0; k < n; k++)
	   				{
	   					if(robots[k][0] == -999)
	   					{
	   						continue;
	   					}
	   					int x,y,b,x2,y2;
	   					y = robots[k][0];
	   					x = robots[k][1];
	   					// go thorugh instructions
	   					for (int l = 0; l < ins[k].length(); l++)
	   					{
	   						b = l;
	   						// interpert the instruction
	   						pair<int,int> p;
	   						int xinc, yinc;
							if (ins[k][0] == '1')
							{
								xinc = 0;
								yinc = 1;
							}
							else if(ins[k][0] == '2')
							{
								xinc = 1;
								yinc = 1;
							}
							else if (ins[k][0] == '3')
							{
								xinc = 1;
								yinc = 0;
							}
							else if (ins[k][0] == '4')
							{
								xinc = 1;
								yinc = -1;
							}
							else if (ins[k][0] == '5')
							{
								xinc = 0;
								yinc = -1;
							}
							else if (ins[k][0] == '6')
							{
								xinc = -1;
								yinc = -1;
							}
							else if (ins[k][0] == '7')
							{
								xinc = -1;
								yinc = 0;
							}
							else if (ins[k][0] == '8')
							{
								xinc = -1;
								yinc = 1;
							}
							// see if you can go there
							if((x + xinc <= c) && (x + xinc > 0) && (y + yinc <= r) && (y + yinc > 0) && board[x+xinc][y+yinc] == 0)
							{
								p.first = y + yinc;
								p.second = x + xinc;
							}
							else
							{
								p.first = -1;
								p.second = -1;
							}
	   						y2 = p.first;
	   						x2 = p.second;
	   						if(x2 != -1)
	   						{
	   							break; 
	   						}
	   					}
	   					if (b == ins[k].length() - 1)
	   					{
	   						robots[k][0] = -999;
	   						killedrobots++;
	   					}
	   					else
	   					{
	   						robots[k][0] = y2;
	   						robots[k][1] = x2;
	   						board[y2][x2] = 1;
	   						ins[k].append(ins[k],0,(b+1));
	   						ins[k].erase(0,(b+1));
	   					}
	   					if(n-killedrobots == 1)
	   					{
	   						break;
	   					}
	   				}
	   			}
	   			if(robots[n][0] != -999)
	   			{
	   				cout << robots[n][0] << " ," << robots[n][1];
	   				cout << "hello";
	   			}

   			}
   			//reset the board
   			copy(&boardcopy[0][0], &boardcopy[0][0]+(r+1)*(c+1),&board[0][0]);
   			copy(&robotscopy[0][0], &robotscopy[0][0]+(n*3),&robots[0][0]);
   			copy(inscopy,inscopy+n,ins);
   		}
   	}



}