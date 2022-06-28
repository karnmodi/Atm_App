#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

void User_Menu (){
    cout <<"**********User Menu**********" << endl;
    cout << "Select You ID :" << endl;
    cout << "a. 24012" << endl;
    cout << "b. 54012" << endl;
    cout << "c. 84012" << endl;

}

void Show_Menu(){
    cout << "**********Menu**********" << endl;
    cout << "1. Check Balance"<< endl;
    cout << "2. WidthDraw Money"<< endl;
    cout << "3. Deposit Money"<< endl;
    cout << "4. Exit"<< endl;
    cout << "************************" << endl;
    
}

int main()
{

    char OptionsforUser,d;
    int Option;
    double balance1 = 500;
    double balance2 = 500;
    double balance3 = 500;
    int Widthdraw;  
    double Deposit;
    string FirstName;
    int ContactNumber;  
    int id=3;
    string x = "Karan";
    string y = "Krish";
    string z = "Keval";
    string a , b , c;
    
    string Name;

    do{

    User_Menu();
    cout << "Enter Suitable Option : ";
    cin >> OptionsforUser;

    cout << "Enter your First name for Confirmation : \n" ;
    cin >> Name;


    if ((Name == x) || (Name == y) || (Name == z))
    {
        cout << "\nWelcome Back " << Name << endl << endl;

        if (Name == x)
        {
            do{
    
            Show_Menu();
            cout << "Enter Suitable Option : ";
            cin >> Option;

            system("cls");
            switch (Option)
            {
            case 1:
                 cout << "Balance is : " << balance1 << " INR \n\n";
                break;

            case 2: 
                cout << "Widthdraw Money \n";
                cout << "Enter the Amount you want to Widthdraw : \n";  
                cin >> Widthdraw ;
                if (Widthdraw>=balance1)
                {
                    cout << "Not Enough Balance";
                }
                else
                {
                balance1 -= Widthdraw;
                cout << "Balance After Widthdrawl : " << balance1 << endl << endl;
                }

                break;

            case 3: 
                cout << "Deposit Money \n";
                cout << "Enter the Amount you want to Deposit : \n";  
                cin >> Deposit;
                balance1 += Deposit;
                cout << "Balance After Deposit : " << balance1 << endl << endl;
                break;

            default:
                break;
            }
            } while (Option != 4);
        }
        else if (Name == y)
        {
            do{
    
            Show_Menu();
            cout << "Enter Suitable Option : ";
            cin >> Option;

            system("cls");
            switch (Option)
            {
            case 1:
                 cout << "Balance is : " << balance2 << " INR \n\n";
                break;

            case 2: 
                cout << "Widthdraw Money \n";
                cout << "Enter the Amount you want to Widthdraw : \n";  
                cin >> Widthdraw ;
                if (Widthdraw>=balance2)
                {
                    cout << "Not Enough Balance";
                }
                else
                {
                balance2 -= Widthdraw;
                cout << "Balance After Widthdrawl : " << balance2 << endl << endl;
                }

                break;

            case 3: 
                cout << "Deposit Money \n";
                cout << "Enter the Amount you want to Deposit : \n";  
                cin >> Deposit;
                balance2 += Deposit;
                cout << "Balance After Deposit : " << balance2 << endl << endl;
                break;

            default:
                break;
            }
            } while (Option != 4);
        }
        else if (Name == z)
        {
            do{
    
            Show_Menu();
            cout << "Enter Suitable Option : ";
            cin >> Option;

            system("cls");
            switch (Option)
            {
            case 1:
                 cout << "Balance is : " << balance3 << " INR \n\n";
                break;

            case 2: 
                cout << "Widthdraw Money \n";
                cout << "Enter the Amount you want to Widthdraw : \n";  
                cin >> Widthdraw ;
                if (Widthdraw>=balance3)
                {
                    cout << "Not Enough Balance";
                }
                else
                {
                balance3 -= Widthdraw;
                cout << "Balance After Widthdrawl : " << balance3 << endl << endl;
                }

                break;

            case 3: 
                cout << "Deposit Money \n";
                cout << "Enter the Amount you want to Deposit : \n";  
                cin >> Deposit;
                balance3 += Deposit;
                cout << "Balance After Deposit : " << balance3 << endl << endl;
                break;

            default:
                break;
            }
            } while (Option != 4);
        }
        
    } 
    else 
    {
        cout << "Please enter Correct Details \n\n";
    }

    } while (OptionsforUser != d);

    

    return 0;
}



// do{
    
//         Show_Menu();
//         cout << "Enter Suitable Option : ";
//         cin >> Option;

//         system("cls");
//         switch (Option)
//         {
//         case 1:
//             cout << "Balance is : " << balance << " INR \n\n";
//          break;

//         case 2: 
//             cout << "Widthdraw Money \n";
//             cout << "Enter the Amount you want to Widthdraw : \n";  
//             cin >> Widthdraw ;
//             if (Widthdraw>=balance)
//             {
//                 cout << "Not Enough Balance";
//             }
//             else
//             {
//             balance -= Widthdraw;
//             cout << "Balance After Widthdrawl : " << balance << endl << endl;
//             }
        
//             break;

//         case 3: 
//             cout << "Deposit Money \n";
//             cout << "Enter the Amount you want to Deposit : \n";  
//             cin >> Deposit;
//             balance += Deposit;
//             cout << "Balance After Deposit : " << balance << endl << endl;
//             break;

//         default:
//             break;
//         }
//         } while (Option != 4);