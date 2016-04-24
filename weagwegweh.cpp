#include <iostream>

using namespace std;

int main(){

int num, factorial=1;
cout <<" enter number to find factorial: ";
cin >> num;

for(int a=1; a<=num; a++)
{
    factorial=factorial*a;
}
cout <<" the factorial of "<<num<<" = "<<factorial<<endl;




/*int factorial(int n)
{
  return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}
*/ this might be how we implement factorials for code 39










return 0;

}
