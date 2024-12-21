#include <iostream>     // 標準入出力に使用
#include <vector>       // 動的配列(std::vector)に使用
#include <string>       // 文字列(std::string)に使用
#include <set>          // 重複排除可能な集合(std::set)に使用

using namespace std;

int main(){
    int h,w,x,y;
    cin >> h >> w >> x >> y;
    --x, --y;

    vector<string> grid(h);
    for(int i = 0;i < h;i++){
        cin >> grid[i];
    }
    string t;
    cin >> t;
    set<pair<int,int>> memo;
    if(grid[x][y] == '@') memo.insert(pair(x, y));

    for(char c : t){
        int dx = x, dy = y;
        if(c == 'L')dy--;
        else if(c == 'R')dy++;
        else if(c == 'U')dx--;
        else if(c == 'D')dx++;

        if(0 <= dx && dx < h && 0 <= dy && dy < w && grid[dx][dy] != '#'){
            x = dx, y= dy;
            if(grid[x][y] == '@') memo.insert(pair(x,y));
        } 
    }
    cout << x + 1 << " " << y + 1 << " " << memo.size();
}
