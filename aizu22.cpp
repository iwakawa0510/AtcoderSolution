#include <iostream>
using namespace std;

int main(){
    bool cards[4][13] = {false};
    int n;
    cin >> n;
    const char suits[] = {'S', 'H', 'C', 'D'};

    for(int i = 0;i < n; i++){
        char suit;
        int rank;
        cin >> suit >> rank;

        int suit_index = 0;
        if(suit == 'S') suit_index = 0;
        else if(suit == 'H') suit_index = 1;
        else if(suit == 'C') suit_index = 2;
        else if(suit == 'D') suit_index = 3;
        
        cards[suit_index][rank-1] = true;
    }

    for(int i =0;i < 4;i++){
        for(int j = 0;j < 13;j++){
        if(cards[i][j] == false)
        cout <<  suits[i] << " " << (j+1) << endl;
        }
    }
    return 0;
} 