#include <iostream>
using namespace std;

int main(){
   int matA [2][2] = {4, 2, 8, 10};
   int J,K; 
   cout << "Matriks A" << endl;
   for (int i=0; i<2; i++){
       for(int j=0; j<2; j++){
        cout << matA[i][j] << " ";
       }
       cout << endl;
   }
  cout << "Perkalian Matriks A dengan Eksponen 5 \n";
  for (int i=0; i<2; i++){
       for (int j=0; j<2; j++){
    
           cout << matA[i][j] * 5 << " ";
       }
       cout << endl;
   }
    return 0;
}
