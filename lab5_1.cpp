#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
	double sum = 0, formula, x; //sum , formula, x in formula;
	int k = 1, step_factorial = 1, factorial; //k - varible in external loop,
									  //step_factorial - varible in internal loop 
	cout << "Input x = "; // aler about "input x"
	cin >> x; // input x

   while (k<=7)
   {    
       k++;
       factorial = 1;
       while (step_factorial<=k+3)
       {
           step_factorial++;
           factorial *= step_factorial;
		formula = (pow(-1,k)*pow(x,2*k-1))/(k*factorial);
		sum += formula;
        cout << "k - " << k << " ---> " << formula << endl;
       }
   }
    cout << "\nSum = " << sum << endl;
	system("pause");
}





