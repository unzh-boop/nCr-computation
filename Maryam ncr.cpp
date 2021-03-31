#include <chrono>
#include <ctime>
#include<iostream>
#include<conio.h>
#include<stdio.h>
long factorial(int number);
using namespace std;
int main()
{

 int MySize;
 cout << "Enter size of array:";
 cin >> MySize;

 int n[MySize];
 int r[MySize];
 long ncr[MySize];

  int  nr, factorial_n, factorial_r, factorial_nr;


 cout << "Enter n " << MySize << " times\n";
 for(int i=0; i<MySize; i++){
	cout << "N" << i << " = ";
    cin >> n[i];
 }

  cout << "Enter r " << MySize << " times \n";
 for(int i=0; i < MySize; i++){
	cout << "R" << i << " = ";
    cin >> r[i];
 }
cout<<"\n";
cout << "Now calculating:-\n";

for(int i=0; i<MySize; i++){

	factorial_n=factorial(n[i]);
       factorial_r=factorial(r[i]);

       nr=n[i]-r[i];

       factorial_nr=factorial(nr);

       ncr[i]=factorial_n/(factorial_r*factorial_nr);

       cout << "NCR of " << n[i] << "C" <<r[i] << " is " << ncr[i] << "\n";

}

 auto timenow =
      chrono::system_clock::to_time_t(chrono::system_clock::now());
	cout << "\n";
    cout << "The current time is " << ctime(&timenow) << endl;

    return 0;
 }

long factorial(int number)
    {
       long factorial=1;

       if(number==0 || number==1);

       else
      {
         for(int count=1;count<=number;count++)
        factorial=factorial*count;
      }
       return factorial;
    }
