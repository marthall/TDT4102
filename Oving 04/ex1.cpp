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
            return true;
            break;
        case RINGO:
            return true;
            break;
        case GEORGE:
            return false;
            break;
        case JOHN:
            return false;
            break;
    }
        
}
