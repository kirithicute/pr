#include <iostream>
#include <iomanip>
#include <cmath>
int main()
{
    int n1, n2, count, n;
    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter second number: ";
    cin >> n2;

    cout << "The prime numbers" << n1 << " and " << n2 << " are: " << endl;
    for (n = num1; n <= num2; n++){
        count = 0;
        for (int i = 2; i <= n/2; i++){
            if(n%i==0){
                count++;
                break;
            }
        }
        if(count==0 && n!=1){
            cout << n << endl;
        }
    }
    return 0;
}
