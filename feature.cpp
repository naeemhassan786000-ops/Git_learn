#include <iostream>
using namespace std;
int main()
{
        int num;
        cout << "Enter * count lines to make: ";
        cin >> num;
        for (int i = 0; i < 5; i++)
        {
                if (num > 0)
                {
                        for (int j = i; j < 5; j++)
                        {
                                cout << "* ";
                        }
                        cout << "\n";
                }
        }
        return 0;
}