#include <iostream>
#include "string.h"
using namespace std;
int main() {

    
    //int dimensiune_cuvinte = 10;
    //int * i = new int[dimensiune_cuvinte];
    
//     if(numar_cuvinte > dimensiune_cuvinte)
//     {
//         int * buffer = new int [dimensiune_cuvinte + 5];
//         for(int i = 0; i < numar_cuvinte ;i++)
//         {
//             buffer[i] = cuvinte[i];
//             &cuvinte = buffer;
//             delete(buffer);
//         }
//     }
    
    string text = "patric e cuminte foc !";
    int dimensiune_string = text.length();
    int numar_cuvinte = 0;
    string cuvinte[10];
    int cuvantul_incepe_de_la = 0;
    //i=0; 0->dimensiune_string;i++
    for (int i = 0; i <= dimensiune_string; i++) {
//         al [i] caracter din variabila text este egal cu ' ' sau
//         al [i] caracter din variabila text este egal cu '\0'
        if (text [i] == ' ' || text [i] == '\0'){
            //salvam in variabila cuvinte la casuta [numar_cuvinte]; cuvantul care ince pe de text{cuvantul_incepe_de_la,i - cuvantul_incepe_de_la}
            cuvinte [numar_cuvinte]  = text.substr(cuvantul_incepe_de_la,i - cuvantul_incepe_de_la);
            //atribuim valoare variabilei cuvantul_incepe_de_la cu valoarea i+1
            cuvantul_incepe_de_la = i + 1;
            //incrementam numar_cuvinte cu +1 //numar_cuvinte++
            numar_cuvinte=numar_cuvinte+1;
        }
    }
    //i=0; i->numar_cuvinte ; ++i
    for (int i = 0; i < numar_cuvinte; ++i) {
        //afisare
        cout << "Cuvantul["<< i <<"]: '" << cuvinte[i] << "'" <<endl;
    }
    //afisare
    cout << "Numar cuvine = " << numar_cuvinte << endl;

    //i=numar_cuvinte-1; numar_cuvinte-1 -> 0; --i
    for (int i = numar_cuvinte-1; i >= 0; --i) {
        //afisare cuvinte
        cout << cuvinte[i] << " ";
    }

    return 0;
}
