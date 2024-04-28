#include <iostream>
using namespace std;

int main()
{
    int quant;  // Quantity
    int choice;

    int Qrooms=0,Qpasta=0,Qburger=0,Qnoodles=0,Qshake=0,Qchicken=0; //Hold the quantity of the item
    int Srooms=0,Spasta=0,Sburger=0,Snoodles=0,Sshake=0,Schicken=0;// hold no. of items that have been sold
    int Total_rooms=0,Total_pasta=0,Total_burger=0,Total_noodles=0,Total_shake=0,Total_chicken=0; // stores the total pric of items
    

    cout<<"\n\t Quantity of items we have";
    cout<<"\n Rooms available: ";
    cin>>Qrooms;
    cout<<"\n Quantity of pasta: ";
    cin>>Qpasta;
    cout<<"\n Quantity of burger: ";
    cin>>Qburger;
    cout<<"\n Quantity of noodles: ";
    cin>>Qnoodles;
    cout<<"\n Quantity of shake: ";
    cin>>Qshake;
    cout<<"\n Quantity of chicken-Roll: ";
    cin>>Qchicken;

    // menu
    menu:
    cout<<"\n\n\n\t\t\t  Please select from the menu option";
    cout<<"\n\n 1. Rooms";
    cout<<"\n 2. Pasta";
    cout<<"\n 3. Burger";
    cout<<"\n 4. Noodles";
    cout<<"\n 5. Shake";
    cout<<"\n 6. Chiken-Roll";
    cout<<"\n 7. Information regarding sales and collection"; // check by owner to see collection
    cout<<"\n 8. Exit";

    cout<<"\n\n Please Enter your Choice: ";
    cin>>choice;
    
    switch(choice)
    {
             case 1: 
             cout<<"\n\n Enter the number of rooms you want: ";
             cin>>quant;
             if(Qrooms-Srooms >= quant)
             {
                Srooms = Srooms+quant;
                Total_rooms = Total_rooms + quant * 1200;
                cout<<"\n\n\t\t"<<quant<<" room(s) have been alloted to you";
             }
             else
             
                cout<<"\n\tOnly"<<Qrooms-Srooms<<" Room(s) remaining in hotel";
                break;
             


             case 2: 
             cout<<"\n\n Enter Pasta Quantity: ";
             cin>>quant;
             if(Qpasta-Spasta >= quant)
             {
                Spasta = Spasta+quant;
                Total_pasta = Total_pasta + quant * 250;
                cout<<"\n\n\t\t"<<quant<<" pasta is the order";
             }
             else
             
                cout<<"\n\tOnly"<<Qpasta-Spasta<<" Pasta remaining in hotel";
                break;
             


             case 3: 
             cout<<"\n\n Enter Burger Quantity: ";
             cin>>quant;
             if(Qburger-Sburger >= quant)
             {
                Sburger = Sburger+quant;
                Total_burger = Total_burger + quant * 150;
                cout<<"\n\n\t\t"<<quant<<" Burger you ordered";
             }
             else
             
                cout<<"\n\tOnly"<<Qnoodles-Snoodles<<" Burges remaining in hotel";
                break;
             


             case 4: 
             cout<<"\n\n Enter Noodles Quantity: ";
             cin>>quant;
             if(Qshake-Sshake >= quant)
             {
                Snoodles = Snoodles+quant;
                Total_noodles = Total_noodles + quant * 150;
                cout<<"\n\n\t\t"<<quant<<" Noodles you ordered";
             }
             else
             
                cout<<"\n\tOnly"<<Qnoodles-Snoodles<<" Noodles remaining in hotel";
                break;
             


             case 5: 
             cout<<"\n\n Enter Shakes Quantity: ";
             cin>>quant;
             if(Qshake-Sshake >= quant)
             {
                Sshake = Sshake+quant;
                Total_shake = Total_shake + quant * 120;
                cout<<"\n\n\t\t"<<quant<<" Shakes you ordered";
             }
             else
             
                cout<<"\n\tOnly"<<Qnoodles-Snoodles<<" Shakes remaining in hotel";
                break;
             


             case 6: 
             cout<<"\n\n Enter Chiken-Roll Quantity: ";
             cin>>quant;
             if(Qchicken-Schicken >= quant)
             {
                Schicken = Schicken+quant;
                Total_chicken = Total_chicken + quant * 120;
                cout<<"\n\n\t\t"<<quant<<" Chiken-Roll you ordered";
             }
             else
              
                cout<<"\n\tOnly"<<Qchicken-Schicken<<" Chiken-Roll remaining in hotel";
                break;
             


             case 7: 
             cout<<"\n Details of Sales and Collection: ";
             cout<<"\n\n -------------ROOMS------------------------------";
             cout<<"\n\n\t Number of rooms we had: "<<Qrooms;
             cout<<"\n\t Number of of Rooms we gave rent: "<<Srooms;
             cout<<"\n\t Remaining Rooms: "<<Qrooms-Srooms;
             cout<<"\n\t Total romms collection of the day: "<<Total_rooms;
             
             cout<<"\n\n -------------PASTA------------------------------";
             cout<<"\n\n\t Quantity of Pasta we had: "<<Qpasta;
             cout<<"\n\t Quantity  of Pasta Consumed: "<<Spasta;
             cout<<"\n\t Remaining Pasta: "<<Qpasta-Spasta;
             cout<<"\n\t Total Pasta collection of the day: "<<Total_pasta;
             
             cout<<"\n\n -------------Burger------------------------------";
             cout<<"\n\n\t Quantity of Burger we had: "<<Qburger;
             cout<<"\n\t Quantity  of Burger Consumed: "<<Sburger;
             cout<<"\n\t Remaining Burger: "<<Qburger-Sburger;
             cout<<"\n\t Total Burger collection of the day: "<<Total_burger;

             cout<<"\n\n -------------NOODLES------------------------------";
             cout<<"\n\n\t Quantity of Noodles we had: "<<Qnoodles;
             cout<<"\n\t Quantity  of Noodles Consumed: "<<Snoodles;
             cout<<"\n\t Remaining Noodles: "<<Qnoodles-Snoodles;
             cout<<"\n\t Total Noodles collection of the day: "<<Total_noodles;

             cout<<"\n\n -------------SHAKES------------------------------";
             cout<<"\n\n\t Quantity of Shakes we had: "<<Qshake;
             cout<<"\n\t Quantity  of Shakes Consumed: "<<Sshake;
             cout<<"\n\t Remaining Shakes: "<<Qshake-Sshake;
             cout<<"\n\t Total Shakes collection of the day: "<<Total_shake;

             cout<<"\n\n -------------CHICKEN-ROLL------------------------------";
             cout<<"\n\n\t Quantity of Chicken-Roll we had: "<<Qchicken;
             cout<<"\n\t Quantity  of Chicken-Roll Consumed: "<<Schicken;
             cout<<"\n\t Remaining Chicken-Roll: "<<Qchicken-Schicken;
             cout<<"\n\t Total Chicken-Roll collection of the day: "<<Total_chicken;

             cout<<"\n\n\n Total collection for the day: "<<Total_rooms+Total_pasta+Total_burger+Total_noodles+Total_shake+Total_chicken;
             break;
             
             case 8:
                exit(0);

                default:
                    cout<<"\n Please select the Number mentionned above!";

    }
   goto menu;
}
