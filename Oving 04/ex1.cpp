#include <iostream>

using namespace std;


enum Beatle {JOHN, PAUL, GEORGE, RINGO};
bool isAlive(Beatle beatle);

int main(){
    int i = -1;
    cin >> i;
    cout << isAlive(Beatle(i)) << endl;
    return 0;
}

bool isAlive(Beatle beatle){
    switch(beatle){
        case PAUL:
        case RINGO:
            return true;
        case GEORGE:
        case JOHN:
            return false;
    }
        
}
