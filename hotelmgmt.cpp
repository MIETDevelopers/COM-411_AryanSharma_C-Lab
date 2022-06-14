// Hotel Management System
// Project By : Himanish Mishra, Archit Gandotra, Ayush Bhat and Aryan Sharma

#include <iostream>
using namespace std;

int main()
{
    int quant;
    int choice;

    //Quantity
    int qrooms = 0, qpasta = 0, qburger = 0, qnoodles = 0, qshake = 0, qchicken_roll = 0;
    //food items sold
    int srooms = 0, spasta = 0, sburger = 0, snoodles = 0, sshake = 0, schicken_roll = 0;
    //total price of items
    int total_rooms = 0, total_pasta = 0, total_burger = 0, total_noodles = 0, total_shake = 0, total_chicken_roll = 0;

    cout << "\n Quantity of items we have";
    cout << "\n Rooms Available : ";
    cin >> qrooms;
    cout << "\n Quantity of Pasta : ";
    cin >> qpasta;
    cout << "\n Quantity of Burger : ";
    cin >> qburger;
    cout << "\n Quantity of Noodles : ";
    cin >> qnoodles;
    cout << "\n Quantity of Shake : ";
    cin >> qshake;
    cout << "\n Quantity of Chicken-Roll : ";
    cin >> qchicken_roll;

    menu:
    cout << "\n Please select from the menu option ";
    cout << "\n\n1) Rooms";
    cout << "\n2) Pasta";
    cout << "\n3) Burger";
    cout << "\n4) Noodles";
    cout << "\n5) Shake";
    cout << "\n6) Chicken-Roll";
    cout << "\n7) Information regarding sales and collection ";
    cout << "\n8) Exit ";

    cout << "\nPlease Enter your choice :-> ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "\n\n Enter the number of rooms you want : ";
            cin >> quant;
            if(qrooms-srooms >= quant)
            {
                srooms = srooms + quant;
                total_rooms = total_rooms + (quant * 1200);
                cout << "\n " << quant << " room/rooms have been alloted to you!";
            }
            else
                cout << "\n Only " << qrooms-srooms << " Rooms remaining in hotel";
                break;

        case 2:
            cout << "\n\n Enter the quantity of pasta : ";
            cin >> quant;
            if(qpasta-spasta >= quant)
            {
                spasta = spasta + quant;
                total_pasta = total_pasta + (quant * 250);
                cout << "\n " << quant << " Pasta is the order!";
            }
            else
                cout << "\n Only " << qpasta-spasta << " Pasta remaining in hotel";
                break;

        case 3:
            cout << "\n\n Enter the quantity of burger : ";
            cin >> quant;
            if(qburger-sburger >= quant)
            {
                sburger = sburger + quant;
                total_burger = total_burger + (quant * 100);
                cout << "\n " << quant << " Burger is the order!";
            }
            else
                cout << "\n Only " << qburger-sburger << " Burger remaining in hotel";
                break;

        case 4:
            cout << "\n\n Enter the quantity of Noodles : ";
            cin >> quant;
            if(qnoodles-snoodles >= quant)
            {
                snoodles = snoodles+ quant;
                total_noodles = total_noodles + (quant * 140);
                cout << "\n " << quant << " Noodle is the order!";
            }
            else
                cout << "\n Only " << qnoodles-snoodles << " Noodles remaining in hotel";
                break;

        case 5:
            cout << "\n\n Enter the quantity of Shakes : ";
            cin >> quant;
            if(qshake-sshake >= quant)
            {
                sshake = sshake+ quant;
                total_shake = total_shake + (quant * 140);
                cout << "\n " << quant << " Shake/Shakes is the order!";
            }
            else
                cout << "\n Only " << qshake-sshake << " Shakes remaining in hotel";
                break;

        case 6:
            cout << "\n\n Enter the quantity of Chicken-roll : ";
            cin >> quant;
            if(qchicken_roll-schicken_roll >= quant)
            {
                schicken_roll = schicken_roll+ quant;
                total_chicken_roll = total_chicken_roll + (quant * 140);
                cout << "\n " << quant << " Chicken-roll is the order!";
            }
            else
                cout << "\n Only " << qchicken_roll-schicken_roll << " Chicken-roll remaining in hotel";
                break;

        case 7:
            cout << "\nDetails of sales and collection ";
            cout << "\n\nNumber of rooms we had : " << qrooms;
            cout << "\nNumber of rooms we gave for rent : " << srooms;
            cout << "\nRemaining rooms : " << qrooms - srooms;
            cout << "\nTotal Rooms collection for the day : " << total_rooms;

            cout << "\n\nNumber of Pastas we had : " << qpasta;
            cout << "\nNumber of Pastas we sold : " << spasta;
            cout << "\nRemaining Pastas : " << qpasta - spasta;
            cout << "\nTotal Pasta collection for the day : " << total_pasta;

            cout << "\n\nNumber of Burger we had : " << qburger;
            cout << "\nNumber of Burger we sold : " << sburger;
            cout << "\nRemaining Burger : " << qburger - sburger;
            cout << "\nTotal Burger collection for the day : " << total_burger;

            cout << "\n\nNumber of Noodles we had : " << qnoodles;
            cout << "\nNumber of Noodles we sold : " << snoodles;
            cout << "\nRemaining Noodles : " << qnoodles - snoodles;
            cout << "\nTotal Noodles collection for the day : " << total_noodles;


            cout << "\n\nNumber of Shakes we had : " << qshake;
            cout << "\nNumber of Shakes we sold : " << sshake;
            cout << "\nRemaining Shakes : " << qshake - sshake;
            cout << "\nTotalShakes collection for the day : " << total_shake;

            cout << "\n\nNumber of Chicken-roll we had : " << qchicken_roll;
            cout << "\nNumber of Chicken-roll we sold : " << schicken_roll;
            cout << "\nRemaining Chicken-roll : " << qchicken_roll - schicken_roll;
            cout << "\nTotal Chicken-roll collection for the day : " << total_chicken_roll;

            cout <<"\n\n Total Collection for the day : Rs" << total_rooms + total_burger + total_pasta + total_noodles + total_shake + total_chicken_roll << endl;
            break;

        case 8:
            exit(0);
            break;

        default:
            cout << "\n Please select from the numbers mentioned above";
    }

    goto menu;

    return 0;
}
