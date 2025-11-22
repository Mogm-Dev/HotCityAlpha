#include<bits/stdc++.h>
using namespace std;

struct gameConfig {
    int itemNumber;
};
struct systemConfig {
    int defaultMoneyOfContry = 100;
    int defaultPeopleOfContry = 10;
    int defaultWarlikesOfContry = 100;
    int defaultProtectionOfContry = 10 * defaultWarlikesOfContry;//Please edit first number in this row.
};
struct player {
    int id;
    int cname;
    int moneyw = 100;
    int pepm = 10;
    int warw = 100;
    int pctap = 1000; 
    //string item {};
};
struct item {
    int id;
    int name;
    int pi;
    string tt;
};
int in;
gameConfig configFromData;
systemConfig configFromCode;
player pl[15];
item il[50];
void start();
bool getConfig() {
    
    return true;
}
void archive();
void addmoney(int id);
void shop(int id);
void game();
int main() {
    start();
    return 0;
}
void start() {
    cout << "Welcome to Hot City!!!\n";
    cout << "Getting configurations...\n";
    getConfig();
    cout << "Press 1 to start game.\n";
    cout << "Press 2 to see version message.\n";
    cout << "Press 3 to exit.\n";
}
/*void shop(int id) {
    cout << "Welcome to HOTCITY SUPER SHOP!!!\n";
    cout << "What item do you want to buy? Please choose!\n";
    for(int i = 1;i <= in;i++) {
        cout << i << ".   " << il[i].id << "  " << il[i].name << "  Hcoin" << il[i].pi << "w.\n";
    }
    cout << "\nPlease input item id(First number):";
    int itemId;
    cin >> itemId;
    system("cls");
    cout << "How many do you want to buy?";
    int num;
    cin >> num;
    if(pl[id].moneyw >= il[itemId].pi * num) {
        cout << "Ok,you're have " << num << " " << il[itemId].name << "!";
        //pl[id].
    }
}*/
void addmoney(int id) {
    cout << "We're add 10w money to your accout.\n";
    pl[id].moneyw += 10;
    system("cls");
}

void archive() {
    cout << "Please input your id";
}

void game() {
    int nmb;
    cout << "Please input player count:\n";
    cin >> nmb;
    system("cls");

    for(int i = 1;i <= nmb;i++) {
        cout << "Please enter No." << i << "'s id(This id will for archiving (may be added in the future)):\n";
        cin >> pl[i].id;
        system("cls");
        cout << "Please enter No." << i << "'s country name:\n";
        cin >> pl[i].cname;
        system("cls");
        
    }

    for(int i = 1;i <= nmb;i++) {
        cout << "Now is " << pl[i].id << "'s turn!\n";
        cout << "Country name: " << pl[i].cname << ".\n";
        cout << "Money: " << pl[i].moneyw << "w.\n";
        cout << "Ordinary People: " << pl[i].pepm << "m.\n";
        cout << "Warlikes: " << pl[i].warw << "w.\n";
        cout << "Defense Value: " << pl[i].pctap << "point.\n\n";
        cout << "What want you do(Please input number)?\n";
        cout << "1.Add money.\n";
        cout << "2.Recruiting soldiers.\n";
        cout << "3.Go shopping.\n";
        cout << "4.\"What can I say?\" Go to next player!\n\n";
        cout << "Please input ope. number:\n";
        char ope;
        ope = getch();
        system("cls");
        if(ope == '1') {
            addmoney(i);
        } else if(ope == '2') {
            //shop(i);
        } else if(ope == '3'){
            continue;
        }
    } 
}