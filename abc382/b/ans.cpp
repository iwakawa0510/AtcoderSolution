int main () {
    int n, m;
    string str;
    cin >> n >> m;
    cin >> str;
    int count = 0;
    for (int i=n-1; i>=0; i--) {
        if (str.at(i) == '@') {
            str.at(i) = '.';
            count++;
            if (count == m) {
                break;
            }
        }
    }
    cout << str << endl;
}