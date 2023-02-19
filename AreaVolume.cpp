#include <iostream>
#include <math.h>
using namespace std;
void * areavol(float c, float lar, float p, float &vol, float &a)
{
	vol=p*c*lar;
	a=c*lar;
}
main()
{
	float comp, larg, prof, volume, area;
	cout<<"Digite o comprimento da piscina: ";
	cin>>comp;
	cout<<"digite a largura: ";
	cin>>larg;
	cout<<"digite a profundidade: ";
	cin>>prof;
	areavol(comp, larg, prof, volume, area);
	cout<<"\nO valor do volume e area respectivamente sao: "<<volume<<" e "<<area<<".";
	return 0;
}
