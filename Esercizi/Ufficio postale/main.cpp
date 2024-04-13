/*
*Vignali Nicolò-3CIN
*06/04/2024
*Esercizio 16 A
*/

#include <iostream>
using namespace std;
#include "UfficioPostale.cpp"

int main(){
UfficioPostale up = UfficioPostale("Saliceto");
up.nuovoCliente('f');
up.nuovoCliente('f');
up.nuovoCliente('r');
up.nuovoCliente('s');
up.nuovoCliente('r');
up.nuovoCliente('s');
up.nuovoCliente('r');
up.nuovoCliente('s');
up.nuovoCliente('F');
up.stampaTabellone();
}