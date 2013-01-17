#include <iostream>
using namespace std;

int main() {
	int i = 1;
	cout << "N\t10*N\t100*N\t1000*N" << endl;
	while(i < 5) {
		cout << i << "\t" << i*10 << "\t" << i*100 << "\t" << i*1000 << endl;
		i++;
	};
	return 0;
}