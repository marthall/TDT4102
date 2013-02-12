#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void printNumbers(int weekdays[][7], int size);
void randomizeList(int weekdays[][7], int antallOpprigninger);
int countCalls(int weekdays[][7], int size, int weekdayIndex);

int weekdays[5][7];
const int size = sizeof(weekdays)/sizeof(weekdays[0]);
int antallOpprigninger = 1000;
int weekdayIndex = 3;

int main() {
	srand(time(NULL));
	randomizeList(weekdays, antallOpprigninger);
	printNumbers(weekdays, size);
	cout << "Antall opprigninger: " << countCalls(weekdays, size, weekdayIndex) << endl;
	return 0;
}

void printNumbers(int weekdays[][7], int size) {
	for (int i = 0; i < size; i++){
		for (int j = 0; j < 7; j++) {
			cout << weekdays[i][j] << "\t";
		}
		cout << "\n";
	}
}

void randomizeList(int weedays[][7], int antallOpprigninger){
	for(int i = 0; i < antallOpprigninger; i++){
		int randY = rand() % 7;
		int randX = rand() % size;
		weekdays[randX][randY]++;
	}
}

int countCalls(int weekdays[][7], int size, int weekdayIndex){
	int sumOpprigninger = 0;
	for(int i = 0; i < size; i++){
		sumOpprigninger += weekdays[i][weekdayIndex];
	}
	return sumOpprigninger;
}
