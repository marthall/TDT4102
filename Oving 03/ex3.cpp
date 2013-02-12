#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

char randomChar();
void readInput(char guess[]);
int checkCharactersAndPosition(char code[], char guess[]);
int checkCharacters(char code[], char guess[]);
const int SIZE = 4;
const int LETTERS = 6;	

int main() {
    srand(time(NULL));	
    char code[SIZE];
    char guess[SIZE];

    for(int i = 0; i < SIZE; i++)
        code[i] = randomChar();

    for(int i = 0; i < SIZE; i++)
        cout << code[i];
    cout << endl;

    do{
        readInput(guess);
        cout << "Antall på riktig plass: " << checkCharactersAndPosition(code, guess) << endl;
        cout << "Antall riktige bokstaver: " << checkCharacters(code, guess) << endl;
    }while(checkCharactersAndPosition(code, guess) < SIZE);

    cout << "Gratulerer!!!" << endl;
    return 0;
}

char randomChar(){
    const char MIN = 'A';
    const char MAX = MIN + LETTERS;
    return rand() % LETTERS + MIN;
}

void readInput(char guess[]){
    char letter;
    cout << "Skriv inn fire bokstaver fra " << 'A' << " til "
       << (char)('A' + LETTERS - 1) << ": ";
    for(int i = 0; i < SIZE; i++){
        cin >> letter;
        guess[i] = toupper(letter);
	}
}

int checkCharactersAndPosition(char code[], char guess[]){
    int correct = 0;
    for(int i = 0; i < SIZE; i++){
        if(guess[i] == code[i])
            correct++;    
    }
    return correct;
}

int checkCharacters(char code[], char guess[]){
    int tempCodeCount;
    int tempGuessCount;
    int correct = 0;
    for(int letter = 65; letter < 65 + LETTERS; letter++){
        tempCodeCount = 0;
        tempGuessCount = 0;
        for(int j = 0; j < SIZE; j++){
            if(code[j] == (char)letter)
                tempCodeCount++;
            if(guess[j] == (char)letter)
                tempGuessCount++;
        }
        correct += min(tempCodeCount, tempGuessCount);
    }
    return correct;
}
