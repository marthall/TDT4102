#include <string>

using std::string;

class Card{

    private:
        int value;
        string suit; 

    public:
        int getValue();
        void setValue(int value);
        
        string getSuit();
        void setSuit(string suit);

        string getFace();
};
