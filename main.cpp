#include <iostream>
using namespace std;

int main() {
  int user;
  int cpu_value;
  int total;
  int par = 2;
  int impar = 1;
  
  
  srand(time(0));

  cout << "---------Pedra, Papel ou Tesoura---------\n\n";

  cout << "Digite 1 (Pedra), 2 (Papel) ou 3 (Tesoura): " << endl;
  cin >> user;
  while(user != 1 && user != 2 && user != 3){
    cout << "Informe o valor '1' para PEDRA, '2' para PAPEL ou '3' para TESOURA" << endl;
    cin >> user;
  }

  if(user == 1) cout << "Você escolheu Pedra.\n\n";
  if(user == 2) cout << "Você escolheu Papel.\n\n";
  if(user == 3) cout << "Você escolheu Tesoura.\n\n";

  cpu_value = rand() % (3)+1;
  cout  << "Valor do pc = " << cpu_value << endl;


  if(cpu_value == 1) cout << "CPU escolheu Pedra.\n\n";
  if(cpu_value == 2) cout << "CPU escolheu Papel.\n\n";
  if(cpu_value == 3) cout << "CPU escolheu Tesoura.\n\n";


  
  if(user == 1){
    if(cpu_value == 1){
      cout << "Empate";
    }else if(cpu_value == 2){
      cout << "Desculpe, você perdeu! Tente novamente";
    }else{
      cout << "Parabéns, você ganhou!!!";
    }
  }else if(user == 2){
    if(cpu_value == 1){
      cout << "Parabéns, você ganhou!!!";
    }else if(cpu_value == 2){
      cout << "Empate!!!";
    }else{
      cout << "Desculpe, você perdeu! Tente novamente";
    }
  }else{
    if(cpu_value == 1){
      cout << "Desculpe, você perdeu! Tente novamente";
    }else if(cpu_value == 2){
      cout << "Parabéns, você ganhou!!!";
    }else{
      cout << "Empate!!!";
    }
  }
}