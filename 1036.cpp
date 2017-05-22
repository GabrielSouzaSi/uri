#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
 
int main() {
 
	double A, B, C;

	cin>>A>>B>>C;

	if ((B * B) -	4 * A * C < 0 || A * 2 == 0){
		cout<<"Impossivel calcular"<<endl;
	} else{
		cout << setiosflags(ios::fixed) << setprecision(5);
		cout<<"R1 = "<<((-B) + sqrt((pow(B,2) - 4*A*C)))/(2*A)<<endl;
        cout<<"R2 = "<<((-B) - sqrt((pow(B,2) - 4*A*C)))/(2*A)<<endl;
	}
 
    return 0;
}