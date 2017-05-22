#include <iostream>

using namespace std;
 
int main() {
 
	int ti,tf,tempo;

 	cin>> ti >> tf;

  	if(ti > tf){
   		
   		tempo = (24 - ti) + tf;
   	}

  	if(hi < hf){
  		tempo = tf - ti;
  	}

  	if(hi == hf){
  		tempo = 24;
  	}

    cout<<"O JOGO DUROU "<< tempo<<" HORA(S)\n";
 
    return 0;
}