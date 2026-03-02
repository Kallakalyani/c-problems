#include <iostream>
using namespace std;

int main() 
{
    int rows,stars;

   cout << "Enter number of lines (rows): ";
    cin >> rows;

    cout << "Enter number of stars per line: ";
    cin >> stars;

    for (int i = 1; i <= rows; ++i) 
	{
        for (int j = 1; j <= stars; ++j) 
		{
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
