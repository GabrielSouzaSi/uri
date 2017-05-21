#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	float n1, n2, n3, n4, m, ex;
	
	cin>>n1;
	cin>>n2;
	cin>>n3;
	cin>>n4;
	
	m = (n1*2 + n2*3 + n3*4 + n4*1)/10;
	
	printf("Media: %0.1f\n", m);
	
	if(m >= 7){
		cout<<"Aluno aprovado."<<endl;
	}
	else if(m >= 5){
			cout<<"Aluno em exame."<<endl;
			cin>>ex;
			printf("Nota do exame: %0.1f\n", ex);
			if(ex + ex / 2 >= 5){
				cout<<"Aluno aprovado."<<endl;
			} else{
				cout<<"Aluno reprovado."<<endl;
			}
			printf("Media final: %0.1f\n", (m + ex)/2);
	} else {
		cout<<"Aluno reprovado."<<endl;
	}
	
	return 0;
}
