#include <iostream>
#include <cmath>

using namespace std;
    
    double calculate_median(double a, double b, double c){
        return 0.5*sqrt(2*pow(b,2)+2*pow(c,2)-pow(a,2));
    }
    
int main(){   
     cout << calculate_median(10, 33, 12) << endl;
     system("pause");
}


