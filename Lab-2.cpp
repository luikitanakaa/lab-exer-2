#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
void max();
int main()
{
    float n1, n2, n3;
    cout << "Enter x: ";
    cin >> n1;
 cout << "Enter y: ";
    cin >> n2;
    
    if((n1 >= n2) && (n1 >= n3))
        cout << "The Largest number is " << n1;
    else if ((n2 >= n1) && (n2 >= n3))
        cout << "The Largest number is " << n2;
    
    
    return 0;
}
