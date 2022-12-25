#include <iostream>
#include <string> 
using namespace std;

int main() {
    string name;
    cout << "Digite o seu primeiro nome: ";
    getline (cin, name);
    cout << "Seja muito bem vindo ao mundo C++" << name;
    return 0;
}