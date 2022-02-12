#include <bits/stdc++.h>
using namespace std;

void symbol(int n){
    for(int i=0; i<n; i++)
        cout <<'-';
    cout << "\n" ;
}

int main(){
    string name_of_the_player;
    int amount, paid, guess, rand_num;
    char ch;
 
    srand(time(0));

    symbol(100);
    cout << "\n\n\t\t\t\tGUESS THE NUMBER GAME\n\n\n";
    symbol(100);

    cout << "\n\n";
    symbol(100);
    cout << "\t\t\t\tRULES\n";
    symbol(100);
    cout << "\t1. First Enter Your Name and Proceed..\n"<<
            "\t2. Next Deposit your Amount of money and continue\n"<<
            "\t3. Pay some Amount towards your Guess\n"<<
            "\t2. Choose any number between 1 to 10\n"<<
            "\t3. You will get double the  money you paid if you win\n"<<
            "\t4. If you guess the  wrong number you will lose your paid amount\n\n";
    symbol(100);
 
    cout << "\n\nEnter Your Name : ";
    getline(cin, name_of_the_player);
 
    cout << "\n\nHello "<<name_of_the_player<<"\n\nEnter Deposit amount in the  game : $ ";
    cin >> amount;
    
    do{
        cout << "\n\nYour current balance is $ " << amount << "\n\n";
        do{
            cout <<"Good next Enter Amount to pay : $ ";
            cin >> paid;
            if(paid > amount)
                cout << "\nYour paying amount is more than your  balance in the Account !!!\n"<<"\nEnter Again :)\n ";
        }while(paid > amount);
        do{
            cout << "\nGuess your number  between 1 to 10 : ";
            cin >> guess;
            if(guess <= 0 || guess > 10)
                cout << "\nPlease enter the number between 1 to 10 !!!\n"<<"\nEnter Again :)\n ";
        }while(guess <= 0 || guess > 10);
 
        rand_num = rand()%10 + 1;
    
        if(rand_num == guess){
            cout << "\n\nCongratulations!!! You won $ " << paid *2;
            amount += paid *2;
        }
        else{
            cout << "\nBad Luck !! You lost $ "<<paid <<"\n";
            amount -= paid;
        }
 
        cout << "\nThe winning number was : " << rand_num <<"\n";
        cout << "\n"<<name_of_the_player<<", You have $ " << amount << "\n";
        if(!amount){
            cout << "Your Account Balance is ZERO :(";
            break;
        }
        cout << "\n\n-->Do you want to play the game again (y/n)? ";		
        cin >> ch;
    }while(ch =='Y'|| ch=='y');
    
    cout << "\n\n\n";
    symbol(70);
    cout << "\n\nThanks for playing the  game. Your balance amount is $ " << amount << "\n\n";
    symbol(70);
    return 0;
}