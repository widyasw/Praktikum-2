#include<iostream>
using namespace std;

int main(){
	int matA[2][2] = {4, 2, 8, 10};
	int transpose[2][2];
	
	cout << "Matriks A" << endl;
	for (int i=0; i<2; i++){
		for (int j=0; j<2; j++){
			cout << matA[i] [j] << " ";
		}
		cout << endl;
	}
	cout << "Transpose Matriks A" << endl;
		for (int i=0; i<2; i++){
			for (int j=0; j<2; j++){
			//soal transpose matriks
			transpose[i][j] = matA[j][i];
			cout << transpose[i][j] << " ";
		}
	cout << endl;
	}
	system("PAUSE");
	return 0;
}
