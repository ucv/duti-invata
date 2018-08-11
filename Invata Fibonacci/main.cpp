#include <iostream>
using namespace std;

int main() {

    int casuta_zero = 0;
    int casuta_unn = 1;
    int suma;
    cout << casuta_zero << endl;
    cout << casuta_unn << endl;
    // i=0; 0->20 ; ++i;
    for (int i = 0; i < 20; ++i) {      
        //Metoda canilor   
        suma = casuta_zero + casuta_unn;
        casuta_zero = casuta_unn;
        casuta_unn = suma;
        
        cout << suma << endl;
    }

    return 0;
}
