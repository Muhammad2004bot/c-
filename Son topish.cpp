#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int secret = rand() % 10 + 1;
    int guess;

    cout << "1-10 orasida sonni toping: ";
    cin >> guess;

    if(guess == secret) cout << "Tabrik! Topdingiz.";
    else cout << "Xato! Son: " << secret;

    return 0;
}
