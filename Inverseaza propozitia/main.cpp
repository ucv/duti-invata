#include <iostream>
#include "string.h"
using namespace std;
int main() {

    string text = "patric e cuminte foc !";
    int dimensiune_string = text.length();
    int numar_cuvinte = 0;
    string cuvinte[10];
    int cuvantul_incepe_de_la = 0;
    for (int i = 0; i <= dimensiune_string; i++) {
        if (text [i] == ' ' || text [i] == '\0'){
            cuvinte [numar_cuvinte]  = text.substr(cuvantul_incepe_de_la,i - cuvantul_incepe_de_la);
            cuvantul_incepe_de_la = i + 1;

            numar_cuvinte=numar_cuvinte+1;
        }
    }

    for (int i = 0; i < numar_cuvinte; ++i) {
        cout << "Cuvantul["<< i <<"]: '" << cuvinte[i] << "'" <<endl;
    }

    cout << "Numar cuvine = " << numar_cuvinte << endl;

    for (int i = numar_cuvinte-1; i >= 0; --i) {
        cout << cuvinte[i] << " ";
    }

    return 0;
}