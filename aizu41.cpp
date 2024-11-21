#include <iostream>
using namespace std;

class Dice {
private:
     int surface[6];
     int top,front,right;
public:
    Dice(const int input_surface[]) : top(1),front(2),right(3){
        for(int i = 0; i < 6;i++){
            surface[i] = input_surface[i];
        }
    }

    void roll(char direction){
        int bottom = 7 - top;
        int back = 7 - front;
        int left = 7 - right;

        if(direction == 'N'){
            int new_top = front;
            front = bottom;
            top = new_top;
        }else if(direction == 'S'){
            int new_top = back;
            back = bottom;
            top = new_top;
            front = 7 - back;
        }else if(direction == 'E'){
            int new_top = left;
            left = bottom;
            top = new_top;
            right = 7 - left;
        }else if(direction == 'W'){
            int newTop = right;
            right = bottom;
            top = newTop;
            left = 7 - right;
        }

    }
    int get_top_value()const{
        return surface[top - 1];
    }
};

int main(){
    int surface[6];
    for(int i = 0;i < 6;i++){
        cin >> surface[i];
    }

    Dice dice(surface);

    char direction;
    while(cin >> direction){
        dice.roll(direction);
    }
    cout << dice.get_top_value() << endl;
    return 0;
}