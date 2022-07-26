#include <bits/stdc++.h>

using namespace std;

bool example_find(string x, string y)
{
	// loop through all possible starting positions (0 to original string length - finding string length - 1)
	for(int i = 0; i < (x.length() - y.length()); i++)
	{
		if(x.substr(i, y.length()) == y)
		{
			return true;
		}
	}
	return false;
}

int main() {

	// Define Variables
    string org,mod,test;
    char holder;

    // String to be tested
    cin >> test;

    // Original string
    cin >> org;

    // Set length
    int length = org.length();

    // Test if original string is found (find function is linear time (length times size of sequence))
    // Example of an actual function could be found above
    int found = test.find(org);
    if(found != string::npos)
    {
        printf("yes");
        return 0;
    }

    // Go through all the shifts of Testing string
    for(int i = 0; i < (length-1); i++)
    {
    	// ABCDE
        holder = org[0];
        // A
        org.push_back(holder);
        // ABCDEA
        org.erase(org.begin());
        // BCDEA
        found = test.find(org);
        if(found != string::npos)
        {
            printf("yes");
            return 0;
        }
    }
    printf("no");
    return 0;
}