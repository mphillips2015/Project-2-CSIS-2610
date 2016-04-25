#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;



int main ()





{
int factor = 1;
int n;
cout << "Enter in number :\n";
cin >> n;
while (n >1)
{
factor *= n--;
}
cout << "the the sum is " << factor << endl;

int a = factor;


int factor1 = 1;
int k;
cout << "Enter in number :\n";
cin >> k;
while (k >1)
{
factor1 *= k--;
}
cout << "the the sum is " << factor1 << endl;
int b = factor1;


int factor2 = 1;
int w;
cout << "Enter in number :\n";
cin >> w;
while (w >1)
{
factor2 *= w--;
}
cout << "the the sum is " << factor2 << endl;
int c = factor2;


cout << (a/(b*w));
















return 0;

}
