#include <iostream>
 using namespace std;

int baseConvert(int num, int base) 
{
    int newNum;
    if(num / base < base)
        return num / base;
    else{
      newNum = num / base;
     return  baseConvert(newNum /base, base);
    }
}
int main() 
{
    int num;
    int base;

    cin >> num >> base;

    if(num < 0)
        cout << "Decimal number too small for this program .... " << endl;
    else if(num > 1000000000)
        cout << "Decimal number too large for this program .... " << endl;
    else
        cout << baseConvert(num, base) << endl;
}
