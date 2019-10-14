#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    double x, f, u, s=0;
    int i, k=0;
    cout << "Input x= ";
    cin >> x;
    cout << "\nResults:\n";

    do{ // do-while loop
        k++; // Increasing variable k on 1
        for(i=1,f=1; i<=k+3; i++)
            f *= i; // Calculation of factorial
        u = (pow(-1, k)*pow(x,2*k-1)) / (k*f); // Calculation of k-summand
        cout << k<<" summand = " << u << endl;
        s+=u; // Add the new addend to the sum
    }while(fabs(u)>=1e-4);

    cout << "sum = " << s << endl;
    cout << "count of summands = " << k << endl;
    system("pause");
    return 0;
}
