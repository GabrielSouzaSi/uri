#include <iostream>
#include <iomanip>

using namespace std;

int main(){
 double n, sp;
 int np = 0;

 for (int i=0; i < 6; i++){
  cin >> n;

  if(n > 0){ 
    sp += n;
    np++;
  }

 }

 cout << setiosflags(ios::fixed) << setprecision(0);
 cout << np <<" valores positivos" << endl;

 cout << setiosflags(ios::showpoint) << setprecision(1);
 cout << sp/np << endl;

 return 0;

}