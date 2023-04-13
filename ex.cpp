#include <iostream>
#include <string> 
#include <locale.h>

using namespace std;

@@ -54,19 +55,21 @@ class Contato {
};

int main() {
	setlocale(LC_ALL, "");

    Contato arrContatos[5];
    int numClasses = 0;
    bool exitLoop = false;
    while (numClasses < 5 && !exitLoop) {
    while (!exitLoop) {
        string selectedOption;
        cout << endl << "Você tem " << to_string(numClasses) << (numClasses == 1 ? " contato" : " contatos") << endl;
        cout << "1 - Criar mais um contato" << endl;
        cout << "1 - Sair" << endl;
        cout << "2 - Ler um contato" << endl;
        cout << "3 - Sair" << endl;
        if (numClasses < 5) cout << "3 - Criar mais um contato" << endl;
        cout << "Selecione uma opção: " << endl;
        cin >> selectedOption;
        getline(cin, selectedOption);

        if (selectedOption == "1") {
        if (selectedOption == "3" && numClasses < 5) {
            string nome;
            string email;
            string telefone;
@@ -76,17 +79,17 @@ int main() {
            struct data nascimento;

            cout << "Digite o seu nome: ";
            cin >> nome;
            getline(cin, nome);
            cout << "Digite o seu email: ";
            cin >> email;
            getline(cin, email);
            cout << "Digite o seu telefone: ";
            cin >> telefone;
            getline(cin, telefone);
            cout << "Digite o seu dia de nascimento: ";
            cin >> dia;
            getline(cin, dia);
            cout << "Digite o seu mês de nascimento: ";
            cin >> mes;
            getline(cin, mes);
            cout << "Digite o seu ano de nascimento: ";
            cin >> ano;
            getline(cin, ano);

            nascimento.dia = stoi(dia);
            nascimento.mes = stoi(mes);
@@ -103,14 +106,14 @@ int main() {
        if (selectedOption == "2") {
            string nmrContato;
            cout << "Digite o número do contato que você deseja pegar os dados sobre: " << endl;
            cin >> nmrContato;
            getline(cin, nmrContato);
            cout << "O nome do contato é: " << arrContatos[(stoi(nmrContato) - 1)].getNome() << endl;
            cout << "O email do contato é: " << arrContatos[(stoi(nmrContato) - 1)].getEmail() << endl;
            cout << "O telefone do contato é: " << arrContatos[(stoi(nmrContato) - 1)].getTelefone() << endl;
            cout << "A idade do contato é: " << arrContatos[(stoi(nmrContato) - 1)].idade() << endl;
        }

        if (selectedOption == "3") {
        if (selectedOption == "1") {
            exitLoop = true;
        }
    }