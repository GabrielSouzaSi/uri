#include <iostream>

using namespace std;

int main(){
	
	/*int a, b, c;
	cin>>a>>b>>c;
	
	if(a < b && a < c){
		cout<<a<<endl;
		if(b<c){
			cout<<b<<endl;
			cout<<c<<endl;
		}else{
			cout<<c<<endl;
			cout<<b<<endl;
		}
	}else if(b<c && b < c){
		cout<<b<<endl;
		if(a<c){
			cout<<a<<endl;
			cout<<c<<endl;
		}else{
			cout<<c<<endl;
			cout<<a<<endl;
		}
	}else if(c<a && c < b){
		cout<<c<<endl;
		if(a<b){
			cout<<a<<endl;
			cout<<b<<endl;
		}else{
			cout<<b<<endl;
			cout<<a<<endl;
		}
	}
	
	cout<<endl<<a<<endl<<b<<endl<<c<<endl;
	return 0;
}

/*#include <math.h>
using namespace std;

int main(){
	float a ,b, c;
	
	cin>>a;
	cin>>b;
	cin>>c;
	
	if((abs(c - b) < a && a < (b + c)) ||
	(abs(a - c) < b && b < (a + c))||
	(abs(a - b) < c && c < (a + b))
	){
		cout<<"perimetro"<<
	}
		
	
	
	return 0;
}


/*int main(){
	int cont=0;
	float n, soma=0.0;
	
	for(int i=0; i<6; i++){
		cin>>n;
		if(n>0){
			soma += n;
			cont++;
		}
	}
	
	//media = (float) soma/cont;
	printf("%d valores positivos\n%.1f\n", cont, soma/cont);
	
	return 0;
}
	
	/*int x, cont;
	cont = 0;
	cin>>x;
	
	if(x % 2 == 0){
		x++;
	}
	
	while(cont < 6){
		cout<<x<<endl;
		x+=2;
		cont++;		
	}
	return 0;
}*/


