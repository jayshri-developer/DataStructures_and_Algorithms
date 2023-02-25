// Approach 1 (recursion)
//article link: https://www.geeksforgeeks.org/mutual-recursion-example-hofstadter-female-male-sequences/
// TC: O(n)


#include <bits/stdc++.h>
using namespace std;

int hofstadterFemale(int);
int hofstadterMale(int);

// Female function
int hofstadterFemale(int n)
{
	if (n < 0)
		return 0;
	else
		if (n == 0)
			return 1;
		else
			return (n - hofstadterFemale(n - 1));
}

// Male function
int hofstadterMale(int n)
{
	if (n < 0)
		return 0;
	else
		if (n == 0)
			return 0;
		else
			return (n - hofstadterMale(n - 1));
}

// Driver Code
int main()
{
	int i;
	cout << "F: ";
	for (i = 0; i < 20; i++)
		cout << hofstadterFemale(i) << " ";
	
	cout << "\n";

	cout << "M: ";
	for (i = 0; i < 20; i++)
		cout << hofstadterMale(i)<< " ";

	return 0;
}


o/p:-
F: 1 0 2 1 3 2 4 3 5 4 6 5 7 6 8 7 9 8 10 9 
M: 0 1 1 2 2 3 3 4 4 5 5 6 6 7 7 8 8 9 9 10 
