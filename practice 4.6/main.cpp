#include <iostream>

using namespace std;

int main()
{   int num;
    int total;
    int time;
    int counter;
    cout << "Enter how many integers do you want to input: " << endl;
    cin >> time;
    cout << "Enter some number less than 9999 ( press enter to calculate the average): " << endl;

    for ( int counter = 1; counter <= time; counter++)
    {
      cin >> num;
      total = num + total;
    }
    cout << " " << endl;
    cout << "Your total is: " << total << endl;
    cout << "Average is: " << total / time  << endl;
    cout << ":)" << endl;

    return 0;
}
