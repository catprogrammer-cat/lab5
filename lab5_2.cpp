#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
	double sum = 0, formula, x; //sum , formula, x in formula;
	int k = 1; //k - varible in external loop,
									  //step_factorial - varible in internal loop 
	cout << "Input x = "; // aler about "input x"
	cin >> x; // input x

   while (k<=9)
   {    
       k++;
       formula = (sin(2*k*x)+0.2)/(2*k+5);
       sum+=formula;
       cout << "k - " << k << " ---> " << formula << "\n";
   }
    cout << "\nSum = " << sum << endl;
	system("pause");
}





