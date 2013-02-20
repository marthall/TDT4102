#include <iostream>
#include <cmath>

using namespace std;

struct Musician{
    string name;
    int weight;
    int height;
    int beardLength;
};

struct Band{
    string name;
    bool rockBand;
    int releases;
    Musician musicians[4];
};

int totalBeardLength(Band band){
    if(band.rockBand){
        int totalLength = 0;
        for(int i = 0; i < 4; i++){
            totalLength += band.musicians[i].beardLength;
        }
        return totalLength;
    }
    return -1;
}

int main(){
    Musician espen = {"Espen", 70, 176, 2};
    Musician guro = {"Guro", 58, 168, 0};
    Musician sverre = {"Sverre", 63, 180, 3};
    Musician martin = {"Martin", 78, 182, 5};
    Band band = {"Parnasset", true, 5, {espen, guro, sverre, martin}};
    cout << totalBeardLength(band) << endl;
    return 0;
}
