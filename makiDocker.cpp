#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(void) {
    char selection;
    do {

        cout << "\n TEAM MAKI MENU";

        cout << "\n========";

        cout << "\n 1 - 801A - Vicious Keyboard";

        cout << "\n 2 - 118A - String Task";

        cout << "\n 3 - 996B - World Cup";

        cout << "\n 4 - 281A - Capitalization";

        cout << "\n 5 - ";

        cout << "\n 6 - ";

        cout << "\n 7 - E X I T";

        cout << "\n Enter selection: ";

        // read the input of 'selection'

        cin >> selection;

        switch (selection) {

            case '1': {
                cout << "Enter Input[e.g. VK]: ";
                string s;
                cin >> s;
                int c = 0;
                for (int i = 1; s.length() > i; i++) {
                    if (s[i] == 'K' && s[i - 1] == 'V') {
                        c++;
                        s[i] = '-';
                        s[i - 1] = '-';
                    }
                }
                for (int i = 0; s.length() > i; i++) {
                    if ((s[i] == 'V' && s[i - 1] == 'V') || (s[i] == 'K' && s[i - 1] == 'K')) {
                        c++;
                        break;
                    }
                }
                cout << c++;
                main();
                return 0;
            }

                break;

            case '2': {
                cout << "Enter Input[e.g. tour]: ";
                string input, result;

                cin >> input;

                for (int i = 0; i < input.length(); i++) {

                    if (input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u' ||
                        input[i] == 'y' || input[i] == 'A' || input[i] == 'E' || input[i] == 'O' || input[i] == 'I' ||
                        input[i] == 'U' || input[i] == 'Y')
                        continue;

                    else {
                        result += '.';
                        result += towlower(input[i]);
                    }
                }
                cout << result;
                main();
                return 0;
            }

                break;

            case '3': {
                cout << "Enter Input[e.g. 4 \n 2 3 2 0]: ";
                const int INF = 1e9 + 90;
                cout << "\n To exit the menu";
                int n;
                scanf("%d", &n);

                vector<int> v(n);
                for (int &x: v)
                    scanf("%d", &x);

                int mn = INF, ind = -1;

                for (int i = 0; i < n; i++) {
                    int t = n;
                    int need = max(0, v[i] - i);
                    need = ceil((double) need / t);
                    if (mn > need) {
                        ind = i + 1;
                        mn = need;
                    }
                }
                printf("%d\n", ind);

                main();
                return 0;
            }

                break;

            case '4': {
                cout << "Enter Word: ";
                string word;
                cin >> word;

                    if (word.length() <= 1000){
                        for (int x = 0; x < word.length(); x++)
                        {
                            if (x == 0)
                            {
                                word[x] = toupper(word[x]);
                            }
                            else if (word[x - 1] == ' ')
                            {
                                word[x] = toupper(word[x]);
                            }
                        }} else {

                    }

                    cout << word;

            }
                break;

            case '5': {
            }
                break;

            case '6': {
            }
                break;

            case '7': {
            }
                break;

            default:
                cout << "\n Invalid selection";
        }

        cout << "\n";

        return 0;
    } while (selection != '7');
}