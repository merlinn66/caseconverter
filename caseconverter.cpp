#include <iostream>
#include <string>

using namespace std;

const int char_storage = 100;
int main(){

    char lowercase[char_storage];
    cout << "Enter your name: ";
    cin >> lowercase;

    int n = strlen(lowercase);

    for(int i = 0; i < n; i++ ){

        if(lowercase[i] >= 'A' && lowercase[i] <= 'Z'){
            cout << static_cast<char>(lowercase[i] + 32);
        }
        else 
            {
                cout << static_cast<char>(lowercase[i] - 32);
            }
    }

    cout << endl;

    return 0;
}