#include <iostream>
#include <math.h>

using namespace std;
int main()
{
  double S1=0, S2=0, S3 = 0, x;
  int k;
  cout<<"Input x: "; cin>>x;

  //for loop
  for (k=1; k<=5; k++)
    S1 += pow(x,k+1)/(pow(2.,k)+k);

  //while loop
  k = 1;
  while (k <= 5){
    S2 += pow(x,k+1)/(pow(2.,k)+k);
    k++;
  }
  //do..while loop
  k = 1;
  do {
    S3 += pow(x,k+1)/(pow(2.,k)+k);
    k++;
  }
  while (k <= 5);

  cout<<"Results:\n";
  cout<<"for loop: S1="<<S1<<endl;
  cout<<"while loop: S2="<<S2<<endl;
  cout<<"do..while loop: S3="<<S3<<endl;
  system("pause");
  return 0;
}
