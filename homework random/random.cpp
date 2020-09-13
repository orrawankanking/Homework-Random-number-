#include<iostream>
#include <time.h> 
using namespace std;

int main()
{
    int num1, num, x = 1;
       srand(time(NULL));
        num1 = rand() % 20;
         cout << "-------------------------------------------\n";
        do
        {
          
            cout << " Enter luckynumber  " << x++ << "(1-20) : ";
            cin >> num;

            if (num1 != num)
            {
                cout << "This is wrong number\n";
            }
            else if (num1 == num)
            {
                cout << "Lucky!!!!!!\n";
            }
        }
        while  (num1 != num);
        cout << "You got 1,000,000 bath!\n";
        cout << "-------------------------------------\n";
        return 0;
    
}