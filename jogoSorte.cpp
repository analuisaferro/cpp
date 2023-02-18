#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
int aleat = 0;
void estrutura(int &pontos, int nJogador){
    system("clear");
    aleat = rand()%10+1;
    pontos = pontos + aleat;
    cout << "Pontuacao jogador "<< nJogador << ": "<< pontos <<".\n";

}
int calculaDistancia(int d){
    d = abs(d);
    return d;
}
main()
{
	srand (time(NULL));
    int restart = 1;
    while(restart == 1){
        int indicadorDePararEMais = 1;
        int i=0;
        int ponto1 =0;
        int ponto2 = 0;

        cout << "------- JOGO DE SORTE --------- \n Os jogadores irao sortear numeros aleatorios \n que serao somados a pontuacao de cada um. Ao \n final da rodada, o jogador que tiver a pon- \n tuacao mais proxima de 12, ganha! \n \n";
        while (indicadorDePararEMais == 1){
            cout << "Jogador 1, deseja sortear um numero? \n1: SIM!\n0: NAO!\n";
            cout<<">";
            cin>>indicadorDePararEMais;

            if (indicadorDePararEMais == 1){
                estrutura(ponto1, 1);
            }
            else {
                system("clear");
                cout<< "pontuacao final do jogador 1: "<< ponto1 << "\n";
            };
        }
        indicadorDePararEMais = 1;
        while (indicadorDePararEMais == 1){
            cout << "Jogador 2, deseja sortear um numero? \n1: SIM!\n0: NAO! \n";
            cout<<">";
            cin>>indicadorDePararEMais;

            if (indicadorDePararEMais == 1){
                estrutura(ponto2, 2);
            }
            else {
                system("clear");

            };
        }
        cout<<"RESULTADOS::::: \n \n";
        cout<< "pontuacao final do jogador 1: "<< ponto1 << "\n";
        cout<< "pontuacao final do jogador 2: "<< ponto2 << "\n \n";
        int distanciaGamer1= 0;   //vai definir o modulo, mas em relação a 12
        int distanciaGamer2 = 0;

        distanciaGamer1 = ponto1 - 12;
        distanciaGamer2 = ponto2 - 12;
        if(distanciaGamer1 < 0){
            distanciaGamer1 = calculaDistancia(distanciaGamer1);
        }
        if(distanciaGamer2 < 0){
            distanciaGamer2 = calculaDistancia(distanciaGamer2);
        }
        cout<<distanciaGamer2;
        cout<<distanciaGamer1;
        if(distanciaGamer1>distanciaGamer2){
            cout <<"O vencedor e o jogador 2! ";
        }
        else{
            if(distanciaGamer1<distanciaGamer2){
            cout <<"O vencedor e o jogador 1! ";
        }
            else{
            cout<<"Empate! ";
        }
        }
        cout<<"Revanche? \n1: SIM!\n0: NAO! \n";
        cin>>i;
        if(i==0){
            break;
        }
        system("clear");
    }
}

