#include <iostream>
using namespace std;

//Está sendo utilizado o metodo insert Sort

void print(int *a, int s){
	for(int i = 0; i < s; i++){
		cout << a[i] << endl;
	}
}

void insertSort(int *a, int s){
	int val, j;
	
	for(int i = 1; i < s; i++){
		val = a[i];
		j = i;
		while(j > 0 && a[j-1] > val){
			a[j] = a[j-1];
			j--;
		}
		a[j] = val;
	}
}

int main(int argc, char** argv)
{
	int v[8] = {49, 38, 58, 87, 34, 93, 26, 13};
	
	insertSort(v, 8);
	print(v, 8);
	return 0;
}