//#include <stdafx.h>
#include <iostream>
#include <conio.h>
using namespace std;
    int fim_jogo = 0;
    int posicao[9]={1,2,3,4,5,6,7,8,9};
    char define[9]={'1','2','3','4','5','6','7','8','9'};
    int escolhido[9]={0,0,0,0,0,0,0,0,0};
    char jogador1 = 'X';
    char jogador2 = 'O';

void imprime_tabuleiro_inicial(){
    cout<<"Bem vindo ao Jogo do Galo."<<endl;
    cout<<""<<endl;
    cout<<"     "<<"|"<<posicao[6]<<"|"<<posicao[7]<<"|"<<posicao[8]<<"|"<<endl;
    cout<<"     "<<"-------"<<endl;
    cout<<"     "<<"|"<<posicao[3]<<"|"<<posicao[4]<<"|"<<posicao[5]<<"|"<<endl;
    cout<<"     "<<"-------"<<endl;
    cout<<"     "<<"|"<<posicao[0]<<"|"<<posicao[1]<<"|"<<posicao[2]<<"|"<<endl;
    cout<<"     "<<"-------"<<endl;
    cout<<""<<endl;
}

void introduzido_x(int user_posicao_x){
    define[user_posicao_x-1]= 'X';
}

void introduzido_y(int user_posicao_y){
    define[user_posicao_y-1]= 'O';
}

void tabuleiro_resultado_final() {
    cout<<""<<endl;
    cout<<"     "<<"|"<<define[6]<<"|"<<define[7]<<"|"<<define[8]<<endl;
    cout<<"     "<<"-------"<<endl;
    cout<<"     "<<"|"<<define[3]<<"|"<<define[4]<<"|"<<define[5]<<endl;
    cout<<"     "<<"-------"<<endl;
    cout<<"     "<<"|"<<define[0]<<"|"<<define[1]<<"|"<<define[2]<<endl;
    cout<<"     "<<"-------"<<endl;
    cout<<""<<endl;
}

int verifica_fim_jogo(){
//***---Verificação se o jogo acabou.***---//

 //1 Possibilidade
 if(define[0] == define[1] && define[2] == define[0]) {
    cout<<"Fim Jogo!"<<endl;
    fim_jogo = 1;
    if(define[0] == jogador1){
        cout<<"Ganha o Jogador 1!"<<endl;
    }else{
        cout<<"Ganha o Jogador 2!"<<endl;
    }
 }

  //2 Possibilidade
 if(define[0] == define[3] && define[6] == define[0]){
    cout<<"Fim Jogo!"<<endl;
    fim_jogo = 1;
    if(define[0] == jogador1){
        cout<<"Ganha o Jogador 1!"<<endl;
    }else{
        cout<<"Ganha o Jogador 2!"<<endl;
    }
 }

 //3 Possibilidade
 if(define[0] == define[4] && define[8] == define[0]){
  cout<<"Fim Jogo!"<<endl;
  fim_jogo = 1;
    if(define[0] == jogador1){
        cout<<"Ganha o Jogador 1!"<<endl;
    }else{
        cout<<"Ganha o Jogador 2!"<<endl;
    }
 }

 //4 Possibilidade
 if(define[1] == define[4] && define[7] == define[1]){
  cout<<"Fim Jogo!"<<endl;
  fim_jogo = 1;
    if(define[1] == jogador1){
        cout<<"Ganha o Jogador 1!"<<endl;
    }else{
        cout<<"Ganha o Jogador 2!"<<endl;
    }
 }

 //5 Possibilidade
 if(define[2] == define[5] && define[2] == define[8]){
  cout<<"Fim Jogo!"<<endl;
  fim_jogo = 1;
    if(define[2] == jogador1){
        cout<<"Ganha o Jogador 1!"<<endl;
    }else{
      cout<<"Ganha o Jogador 2!"<<endl;
    }
 }

 //6 Possibilidade
 if(define[2] == define[4] && define[4] == define[6]){
  cout<<"Fim Jogo!"<<endl;
  fim_jogo = 1;
    if(define[2] == jogador1){
        cout<<"Ganha o Jogador 1!"<<endl;
    }else{
        cout<<"Ganha o Jogador 2!"<<endl;
    }
 }

 //7 Possibilidade
 if(define[6] == define[7] && define[8] == define[6]){
  cout<<"Fim Jogo!"<<endl;
  fim_jogo = 1;
    if(define[2] == jogador1){
        cout<<"Ganha o Jogador 1!"<<endl;
    }else{
        cout<<"Ganha o Jogador 2!"<<endl;
    }
 }
 return fim_jogo;
}
int verifica_duplicado(int i){
    while(escolhido[i-1] == 1){
        cout<<i<<" ja esta escolhido, por favor escolha outro lugar: ";
        cin>>i;
    }
    return i;
}


/* Começa o Jogo */

int main(){
    int count = 0;
    int x_posicao,y_posicao;
    imprime_tabuleiro_inicial();
    cout<<""<<endl;
    cout<<"Jogador 1 : X"<<endl<<"Jogador 2 : O"<<endl;
    while(fim_jogo==0 && count<=8){
        count++;
        cout<<""<<endl;
        cout<<"Introduz a posicao para X :"<<endl;cin>>x_posicao;
            while(x_posicao>9 || x_posicao <1 ) {
                cout<<"Jogada Invalida! Por favor introduz uma posicao de 0 a 9:  ";
                cin>>x_posicao;
            }

            if(escolhido[x_posicao-1] == 1){
                x_posicao=verifica_duplicado(x_posicao);
            }
            introduzido_x(x_posicao); //define a posicao de X.
            escolhido[x_posicao -1] = 1; //atribui a posicao escolhida ao array escolhido
            verifica_fim_jogo();  //verifica se o jogo acabou.
            if(fim_jogo == 1){
                break;
            }
            if(count == 9) //Se houveram 9 jogadas, o jogo para
            {
                break;
            }
            count++;
            tabuleiro_resultado_final(); //imprime o tabuleiro actual
            cout<<"Introduz a posicao para O : "<<endl;
            cin>>y_posicao;
            while(y_posicao>9 || y_posicao <1 ) {
                cout<<"Jogada Invalida! Por favor introduz uma posicao de 0 a 9:  ";
                cin>>y_posicao;
            }
            if(escolhido[y_posicao-1] == 1){
                y_posicao=verifica_duplicado(y_posicao);
            }
            introduzido_y(y_posicao); //define a posicao de Y.
            escolhido[y_posicao -1] = 1; //atribui a posicao escolhida ao array escolhido
            verifica_fim_jogo();  //verifica se o jogo acabou
            tabuleiro_resultado_final(); //imprime o tabuleiro actual
            if(fim_jogo == 1) //Se o jogo acabar, esta parte do codigo ira terminar o while
            {
            break;
            }
    }
    if(fim_jogo == 0) {
        cout<<"Empate"<<endl;
    }
    tabuleiro_resultado_final();
    getch();
}
