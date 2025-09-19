#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int number, hours;
    double salary;
    cin >> number >> hours >> salary;
    salary = hours * salary;
    cout << "NUMBER = " << number << endl;
    cout << fixed << setprecision(2);
    cout << "SALARY = U$ " << salary << endl;
    return 0;
}