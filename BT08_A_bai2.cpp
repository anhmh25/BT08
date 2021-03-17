#include <iostream>
using namespace std;


int main()
{
    /*char a[4] = "abc";
    for (char* cp = a; (*cp) != '\0'; cp++) {
        cout << (void*)cp << " : " << (*cp) << endl;
    }
    return 0;*/


    /*int a[4] = {1,2,3};
    for (int* cp = a; (*cp) != 0 ; cp++) {
        cout << (void*)cp << " : " << (*cp) << endl;
    }
    return 0;*/

    double a[5] = { 1.1, 1.2, 1.3, 1.4, 1.5 };
    for (double* cp = a; (*cp) != 0; cp += 2) {
        cout << (void*)cp << " : " << (*cp) << endl;
    }
    return 0;
}
