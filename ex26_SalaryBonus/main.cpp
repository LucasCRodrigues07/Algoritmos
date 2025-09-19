#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    char name[21];
    double salary, sells;
    cin >> name >> salary >> sells;
    salary = (0.15 * sells) + salary;
    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << salary << endl;
    return 0;
}