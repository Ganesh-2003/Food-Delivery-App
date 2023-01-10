#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct first
{
    char username[20];
    char password[20];
    char email[20];
} signup;
struct second
{
    char username2[20];
    char password2[20];
} login;
struct third
{
    char firstname[20];
    char lastname[20];
} Name;

struct fourth
{
    char area[50];
    char city[10];
    int pincode;
} addr;
int clear_input_buffer(void)
{
    int ch;
    while (((ch = getchar()) != EOF) && (ch != '\n'))
        ;
    return ch;
}
struct VegHotel
{
    int veg_Briyani = 0;
    int Veg_Briyani_Count = 0;
    int Veg_Fried_Rice = 0;
    int Veg_Fried_Rice_Count = 0;
    int Veg_Pulao = 0;
    int Veg_Pulao_Count = 0;
    int Roti = 0;
    int Roti_Count = 0;
    int Naan = 0;
    int Naan_Count = 0;
    int Tandoori_Roti = 0;
    int Tandoori_Roti_Count = 0;
    int Paneer_Butter_Masala = 0;
    int Paneer_Butter_Masala_Count = 0;
    int Palak_Paneer = 0;
    int Palak_Paneer_Count = 0;
    int Veg_Meals = 0;
    int Veg_Meals_Count = 0;
    int Fresh_Juice_Seasonal = 0;
    int Fresh_Juice_Seasonal_Count = 0;
    int Fresh_Juice_Mix = 0;
    int Fresh_Juice_mix_Count = 0;
    int Falooda = 0;
    int Falooda_Count = 0;
} Veg;
struct NonVegHotel
{
    int Chicken_Briyani = 0;
    int Chicken_Briyani_Count = 0;
    int Chicken_Dum_Briyani = 0;
    int Chicken_Dum_Briyani_Count = 0;
    int Mutton_Briyani = 0;

    int Mutton_Briyani_Count = 0;
    int Egg_Fried_Rice = 0;
    int Egg_Fried_Rice_Count = 0;
    int Tandoori_Full = 0;
    int Tandoori_Full_Count = 0;
    int Grill_Chicken = 0;
    int Grill_Chicken_Count = 0;
    int Barbeque = 0;
    int Barbeque_Count = 0;
    int Fish_Fry = 0;
    int Fish_Fry_Count = 0;
    int Prawns_Fry = 0;
    int Prawns_Fry_Count = 0;
    int Falooda = 0;
    int Falooda_Count = 0;
    int Fruit_Juice = 0;
    int Fruit_Juice_Count = 0;
    int ice_cream_any_flavour = 0;
    int ice_cream_Count = 0;
} NonVeg;
int main()
{
    char ch;
    cout << "***********Welcome To Food Panda*************" << '\n'
         << '\n';
    cout << "Looks like you have not registered yet..." << '\n'
         << '\n';
    cout << "Pls ensure that you enter your username without space and password below"
         << '\n'
         << '\n';
    cout << "************Signup*************" << '\n'
         << '\n'
         << "username max(20):::::";
    cin >> signup.username;
    cout << "Password(20):::::::";
    cin >> signup.password;
    cout << "Enter Your mail ID::::::";
    cin >> signup.email;
    cout << "*************Registration successfull******************" << '\n';
    cout << "********************************************************" << '\n';
    cout << "You will now be redirected to the login page " << '\n'
         << '\n';
    do
    {
        cout << "*************Login*************" << '\n'
             << '\n';
        cout << "Enter your user name and password once again" << '\n'
             << '\n';
        cout << "username:::::";
        cin >> login.username2;
        cout << "password:::::";
        cin >> login.password2;

        if ((strcmp(login.password2, signup.password) == 0) &&
            (strcmp(login.username2, signup.username) == 0))
        {
            cout << "You have successfully logged in" << '\n';
            cout << "You just have one more step to go with" << '\n'
                 << '\n';
            cout << "********************Name Registration*******************"
                 << '\n'
                 << '\n';
            cout << "Enter your first and last name" << '\n';
            cout << "First Name:::::";
            cin >> Name.firstname;
            cout << "Last Name::::::::";
            cin >> Name.lastname;
            cout << "******************Thank You for Creating Your Food Panda Account********************" << '\n'
                 << '\n';
            cout << "*******************Exclusive Offers coming up your Way*************" << '\n';
        }
        else
        {
            cout << "**************The username or Password that you have entered is wrong*****************" << '\n'
                 << '\n';
        }
        cout << "**************Do you want to return to Login Page(Y/N)**************" << '\n';
        cin >> ch;
        if (ch == 'Y' || ch == 'y')
            ;
    } while (ch == 'Y' || ch == 'y');
    {
        cout << "********Your Location********" << '\n'
             << '\n';
        cout << "Please Enter Your Area below::::" << '\n'
             << '\n';
        cout << "Address::::";
        clear_input_buffer();
        gets(addr.area);
        cout << "Please Enter Your City:::::::";
        cin >> addr.city;
        cout << "Please Enter Your Pincode:::::::";
        cin >> addr.pincode;
        cout << "*****Thank You for filling up your Address Details*****" << '\n'
             << '\n';
    }
    cout << "***********List of Restaurant available**********" << '\n'
         << '\n'
         << '\n';
    cout << "Adyar Ananda Bhavan (Veg)-Code(AB)" << '\n'
         << '\n';
    cout << "JR Jana Catering (Veg,A/c)-Code(JR)" << '\n'
         << '\n';
    cout << "Sarvana Bhavan (Veg,A/c)-Code(SB)" << '\n'
         << '\n';
    cout << "Faruzi (Non Veg)-Code(FZ)" << '\n'
         << '\n';
    cout << "Buhari (Non Veg)-Code(BU)" << '\n'
         << '\n';

    cout << "Taj Hotel (Non Veg)-Code(TH)" << '\n'
         << '\n';
    cout << "Enter Code of the Restaurant You would Like to Choose:::::::";
    char ch1[2];
    cin >> ch1;
    char *restaurentName;
    if (strcmp(ch1, "FZ") == 0 || strcmp(ch1, "BU") == 0 || strcmp(ch1, "TH") == 0)
    {
        if (strcmp(ch1, "FZ") == 0)
        {
            restaurentName = "Faruzzi Restaurant";
        }
        else if ((strcmp(ch1, "BU") == 0))
        {
            restaurentName = "Buhari Restaurant";
        }
        else
        {
            restaurentName = "Taj Hotel";
        }
        char ch3;
        do
        {
            cout << "***********Menu Details (Non Veg)*************" << '\n'
                 << '\n';
            cout << "Chicken Briyani(A)"
                 << "Cost(Rs):" << 160 << '\n'
                 << '\n';
            cout << "Chicken Dum Briyani(B)"
                 << "Cost(Rs):" << 180 << '\n'
                 << '\n';
            cout << "Mutton Briyani(C)"
                 << "Cost(Rs):" << 210 << '\n'
                 << '\n';
            cout << "Egg Fried Rice(D)"
                 << "Cost(Rs):" << 120 << '\n'
                 << '\n';
            cout << "Tandoori Full(E) "
                 << "Cost(Rs):" << 325 << '\n'
                 << '\n';
            cout << "Grill Chicken(F)"
                 << "Cost(Rs):" << 350 << '\n'
                 << '\n';
            cout << "Barbeque(G)"
                 << "Cost(Rs):" << 350 << '\n'
                 << '\n';
            cout << "Fish Fry (H)"
                 << "Cost(Rs):" << 400 << '\n'
                 << '\n';
            cout << "Prawns Fry(I)"
                 << "Cost(Rs):" << 400 << '\n'
                 << '\n';
            cout << "Falooda (J)"
                 << "Cost(Rs):" << 80 << '\n'
                 << '\n';
            cout << "Fruit Juice (K)"
                 << "Cost(Rs):" << 80 << '\n'
                 << '\n';
            cout << "ice cream any flavour (L)"
                 << "Cost(Rs):" << 60 << '\n'
                 << '\n';
            cout << "Enter The Code Of Restaurant you Want to Choose (A/B/C/D/E/F/G/H/I/J/K/L) or (z for exit):::::::::::";
            cin >> ch3;
            int quantity = 0;
            switch (ch3)
            {
            case 'A':
                cout << "Enter Quantity of Chicken Briyani You Would Like to have:::: ";
                cin >> quantity;
                NonVeg.Chicken_Briyani = NonVeg.Chicken_Briyani + (160 * quantity);
                NonVeg.Chicken_Briyani_Count = NonVeg.Chicken_Briyani_Count + quantity;
                break;
            case 'B':
                cout << "Enter Quantity of Chicken Dum Briyani You Would Like to have::::: ";
                cin >> quantity;

                NonVeg.Chicken_Dum_Briyani = NonVeg.Chicken_Dum_Briyani +

                                             (180 * quantity);

                NonVeg.Chicken_Dum_Briyani_Count = NonVeg.Chicken_Briyani_Count +

                                                   quantity;
                break;
            case 'C':
                cout << "Enter Quantity Of Mutton Briyani ...You would Like to have:::::::";
                cin >> quantity;
                NonVeg.Mutton_Briyani = NonVeg.Mutton_Briyani + (210 * quantity);
                NonVeg.Mutton_Briyani_Count = NonVeg.Mutton_Briyani_Count + quantity;
                break;
            case 'D':
                cout << "Enter Quantity Of Egg Fried Rice ...You would Like to have::::::";
                cin >> quantity;
                NonVeg.Egg_Fried_Rice = NonVeg.Egg_Fried_Rice + (120 * quantity);
                NonVeg.Egg_Fried_Rice_Count = NonVeg.Egg_Fried_Rice_Count + quantity;
                break;
            case 'E':
                cout << "Enter Quantity Of Tandoori(Full) ...You would Like to have:::::::";
                cin >> quantity;
                NonVeg.Tandoori_Full = NonVeg.Tandoori_Full + (325 * quantity);
                NonVeg.Tandoori_Full_Count = NonVeg.Tandoori_Full_Count + quantity;
                break;
            case 'F':
                cout << "Enter Quantity Of Grill Chicken...You would Like to have::::::::";
                cin >> quantity;
                NonVeg.Grill_Chicken = NonVeg.Grill_Chicken + (350 * quantity);
                NonVeg.Grill_Chicken_Count = NonVeg.Grill_Chicken_Count + quantity;
                break;
            case 'G':
                cout << "Enter Quantity Of Barbeque..You would Like to have:::::::";
                cin >> quantity;
                NonVeg.Barbeque = NonVeg.Barbeque + (350 * quantity);
                NonVeg.Barbeque_Count = NonVeg.Barbeque_Count + quantity;
                break;
            case 'H':

                cout << "Enter Quantity Of Fish Fry ...You would Like to have:::::::";
                cin >> quantity;
                NonVeg.Fish_Fry = NonVeg.Fish_Fry + (400 * quantity);
                NonVeg.Fish_Fry_Count = NonVeg.Fish_Fry_Count + quantity;
                break;
            case 'I':
                cout << "Enter Quantity Of Prawns Fry ...You would Like to have:::::::::";
                cin >> quantity;
                NonVeg.Prawns_Fry = NonVeg.Prawns_Fry + (400 * quantity);
                NonVeg.Prawns_Fry_Count = NonVeg.Prawns_Fry_Count + quantity;
                break;
            case 'J':
                cout << "Enter Quantity Of Falooda ...You would Like to have::::::::::";
                cin >> quantity;
                NonVeg.Falooda = NonVeg.Falooda + (80 * quantity);
                NonVeg.Falooda_Count = NonVeg.Falooda_Count + quantity;
                break;
            case 'K':
                cout << "Enter Quantity Of Fruit Juice ...You would Like to have::::::::";
                cin >> quantity;
                NonVeg.Fruit_Juice = NonVeg.Fruit_Juice + (80 * quantity);
                NonVeg.Fruit_Juice_Count = NonVeg.Fruit_Juice_Count + quantity;
                break;
            case 'L':
                cout << "Enter Quantity Of Ice Cream ...You would Like to have:::::::::";
                cin >> quantity;
                NonVeg.ice_cream_any_flavour = NonVeg.ice_cream_any_flavour +

                                               (60 * quantity);

                NonVeg.ice_cream_Count = NonVeg.ice_cream_Count + quantity;
                break;
            case 'z':
                break;
            default:
                cout << "******************Enter correct code*****************" << '\n';
                break;
            }
        } while (ch3 != 'z');

        int TotalAmount = 0;
        cout << "******* Welcome To " << restaurentName << " *******\n";
        cout << "*************** Order Details **************** \n";
        if (NonVeg.Chicken_Briyani != 0)
        {
            cout << "Chicken Briyani That you have ordered: "
                 << "Quantity="
                 << NonVeg.Chicken_Briyani_Count << " "
                 << "Cost(Rs):"
                 << NonVeg.Chicken_Briyani << '\n'
                 << '\n';
            TotalAmount = TotalAmount + NonVeg.Chicken_Briyani;
        }
        if (NonVeg.Chicken_Dum_Briyani != 0)
        {
            cout << "Chicken Dum Briyani That you have ordered: "
                 << "Quantity="
                 << NonVeg.Chicken_Dum_Briyani_Count << " "
                 << "Cost(Rs):"
                 << NonVeg.Chicken_Dum_Briyani << '\n'
                 << '\n';
            TotalAmount = TotalAmount + NonVeg.Chicken_Dum_Briyani;
        }
        if (NonVeg.Mutton_Briyani != 0)
        {
            cout << "Mutton Briyani That you have ordered: "
                 << "Quantity="
                 << NonVeg.Mutton_Briyani_Count << " "
                 << "Cost(Rs):"
                 << NonVeg.Mutton_Briyani << '\n'
                 << '\n';
            TotalAmount = TotalAmount + NonVeg.Mutton_Briyani;
        }
        if (NonVeg.Egg_Fried_Rice != 0)
        {
            cout << "Egg Fried Rice That you have ordered: "
                 << "Quantity="
                 << NonVeg.Egg_Fried_Rice_Count << " "
                 << "Cost(Rs):"
                 << NonVeg.Egg_Fried_Rice << '\n'
                 << '\n';
            TotalAmount = TotalAmount + NonVeg.Egg_Fried_Rice;
        }
        if (NonVeg.Tandoori_Full != 0)
        {
            cout << "Tandoori(Full) That you have ordered: "
                 << "Quantity="
                 << NonVeg.Tandoori_Full_Count << " "
                 << "Cost(Rs):"
                 << NonVeg.Tandoori_Full << '\n'
                 << '\n';
            TotalAmount = TotalAmount + NonVeg.Tandoori_Full;
        }
        if (NonVeg.Grill_Chicken != 0)
        {
            cout << "Grill Chicken That you have ordered: "
                 << "Quantity="
                 << NonVeg.Grill_Chicken_Count << " "
                 << "Cost(Rs):"
                 << NonVeg.Grill_Chicken << '\n'
                 << '\n';
            TotalAmount = TotalAmount + NonVeg.Grill_Chicken;
        }
        if (NonVeg.Barbeque != 0)

        {
            cout << "Barbeque that You ahve Ordered:"
                 << "Quantity="
                 << NonVeg.Barbeque_Count << " "
                 << "Cost(Rs):" << NonVeg.Barbeque << '\n'
                 << '\n';
            TotalAmount = TotalAmount + NonVeg.Barbeque;
        }
        if (NonVeg.Fish_Fry != 0)
        {
            cout << "Fish Fry that You Have Ordered:"
                 << "Quantity="
                 << NonVeg.Fish_Fry_Count << " "
                 << "Cost(Rs):" << NonVeg.Fish_Fry << '\n'
                 << '\n';
            TotalAmount = TotalAmount + NonVeg.Fish_Fry;
        }
        if (NonVeg.Prawns_Fry != 0)
        {
            cout << " Prawn Fry that You Have Ordered:"
                 << "Quantity="
                 << NonVeg.Prawns_Fry_Count << " "
                 << "Cost(Rs):" << NonVeg.Fish_Fry << '\n'
                 << '\n';
            TotalAmount = TotalAmount + NonVeg.Prawns_Fry;
        }
        if (NonVeg.Falooda != 0)
        {
            cout << "Falooda That needs to be ordered:"
                 << "Quantity="
                 << NonVeg.Falooda_Count << " "
                 << "Cost(Rs):" << NonVeg.Falooda << '\n'
                 << '\n';
            TotalAmount = TotalAmount + NonVeg.Falooda;
        }
        if (NonVeg.Fruit_Juice != 0)
        {
            cout << "Fruit that you have ordered:"
                 << "Quantity="
                 << NonVeg.Fruit_Juice_Count << " "
                 << "Cost(Rs):"
                 << NonVeg.Fruit_Juice << '\n'
                 << '\n';
            TotalAmount = TotalAmount + NonVeg.Fruit_Juice;
        }
        if (NonVeg.ice_cream_any_flavour != 0)
        {
            cout << "Ice Cream that you have ordered:"
                 << "Quantity="
                 << NonVeg.ice_cream_Count << " "
                 << "Cost(Rs):"
                 << NonVeg.ice_cream_any_flavour << '\n'
                 << '\n';
            TotalAmount = TotalAmount + NonVeg.ice_cream_any_flavour;
        }
        cout << "\n*******TOTAL AMOUNT*******:"
             << " " << TotalAmount << '\n';
        cout << "*******TAX DETAILS******\n";
        int CGST = 0;
        int SGST = 0;
        CGST = TotalAmount + (TotalAmount / 100) * 9;
        SGST = CGST + (CGST / 100) * 9;
        cout << "SGST -- (0%)\n";

        cout << "CGST -- (9%)\n";
        cout << "SGST -- (9%)\n";
        cout << "\n********GRAND TOTAL********"
             << " " << SGST << '\n'
             << '\n';
        cout << "************Your Order Shall Be successfully Delivered*******" << '\n';
        cout << "An E-Mail Has been sent to Mail ID regarding The successfull Order"
             << '\n'
             << '\n';
        cout << "\n*******THANK YOU FOR Choosing FOOD PANDA********\n";
    }
    else if (strcmp(ch1, "AB") == 0 || strcmp(ch1, "JR") == 0 || strcmp(ch1, "SB") == 0)
    {
        if (strcmp(ch1, "AB") == 0)
        {
            restaurentName = "Adyar Anandha Bhavan";
        }
        else if ((strcmp(ch1, "JR") == 0))
        {
            restaurentName = "JR Jana Catering";
        }
        else
        {
            restaurentName = "Saravana Bhavan";
        }
        char ch3;
        do
        {
            cout << " Menu Details (Veg)::::" << '\n'
                 << '\n'
                 << '\n';
            cout << "Veg Briyani(A)"
                 << "Cost(Rs):" << 100 << '\n'
                 << '\n';
            cout << "Veg Fried Rice(B)"
                 << "Cost(Rs):" << 80 << '\n'
                 << '\n';
            cout << "Veg_Pulao(C)"
                 << "Cost(Rs):" << 110 << '\n'
                 << '\n';
            cout << "Roti (4)(D)"
                 << "Cost(Rs):" << 25 << '\n'
                 << '\n';
            cout << "Naan (4)(E)"
                 << "Cost(Rs):" << 25 << '\n'
                 << '\n';
            cout << "Tandoori Roti(F)"
                 << "Cost(Rs):" << 30 << '\n'
                 << '\n';
            cout << "Paneer Butter Masala(G)"
                 << "Cost(Rs):" << 100 << '\n'
                 << '\n';
            cout << "Palak Paneer(H)"
                 << "Cost(Rs):" << 90 << '\n'
                 << '\n';
            cout << "Veg Meals(I)"
                 << "Cost(Rs):" << 120 << '\n'
                 << '\n';
            cout << " Fresh Juice(J)"
                 << "Cost(Rs):" << 80 << '\n'
                 << '\n';
            cout << "Fresh Juice Mix(K) "
                 << "Cost(Rs):" << 70 << '\n'
                 << '\n';
            cout << "Falooda(L)"
                 << "Cost(Rs):" << 75 << '\n'
                 << '\n';
            cout << "Enter The Code Of Restaurant you Want to Choose (A/B/C/D/E/F/G/H/I/J/K/L) or (z for exit):::::::::::";
            cin >> ch3;
            int quantity = 0;
            switch (ch3)
            {
            case 'A':
                cout << "Enter Quantity of Veg Briyani You W{ould Like to have:::: ";
                cin >> quantity;
                Veg.veg_Briyani = Veg.veg_Briyani + (100 * quantity);
                Veg.Veg_Briyani_Count = Veg.Veg_Briyani_Count + quantity;
                break;

            case 'B':
                cout << "Enter Quantity of Veg Fried Rice You Would Like to have::::: ";
                cin >> quantity;
                Veg.Veg_Fried_Rice = Veg.Veg_Fried_Rice + (80 * quantity);
                Veg.Veg_Fried_Rice_Count = Veg.Veg_Fried_Rice_Count + quantity;
                break;
            case 'C':
                cout << "Enter Quantity Of Veg Pulao ...You would Like to have:::::::";
                cin >> quantity;
                Veg.Veg_Pulao = Veg.Veg_Pulao + (110 * quantity);
                Veg.Veg_Pulao_Count = Veg.Veg_Pulao_Count + quantity;
                break;
            case 'D':
                cout << "Enter Quantity Of Roti(4) ...You would Like to have::::::";
                cin >> quantity;
                Veg.Roti = Veg.Roti + (25 * quantity);
                Veg.Roti_Count = Veg.Roti_Count + quantity;
                break;
            case 'E':
                cout << "Enter Quantity Of Naan(4) ...You would Like to have:::::::";
                cin >> quantity;
                Veg.Naan = Veg.Naan + (25 * quantity);
                Veg.Naan_Count = Veg.Naan_Count + quantity;
                break;
            case 'F':
                cout << "Enter Quantity Of Tandoori Roti...You would Like to have::::::::";
                cin >> quantity;
                Veg.Tandoori_Roti = Veg.Tandoori_Roti + (30 * quantity);
                Veg.Tandoori_Roti_Count = Veg.Tandoori_Roti_Count + quantity;
                break;
            case 'G':
                cout << "Enter Quantity Of Paneer Butter Masala..You would Like to have:::::::";
                cin >> quantity;
                Veg.Paneer_Butter_Masala = Veg.Paneer_Butter_Masala + (100 * quantity);
                Veg.Paneer_Butter_Masala_Count = Veg.Paneer_Butter_Masala_Count +

                                                 quantity;

                break;
            case 'H':
                cout << "Enter Quantity Of Palak Paneer ...You would Like to have:::::::";
                cin >> quantity;
                Veg.Palak_Paneer = Veg.Palak_Paneer + (90 * quantity);
                Veg.Palak_Paneer_Count = Veg.Palak_Paneer_Count + quantity;
                break;
            case 'I':
                cout << "Enter Quantity Of Veg Meals ...You would Like to have:::::::::";
                cin >> quantity;
                Veg.Veg_Meals = Veg.Veg_Meals + (120 * quantity);
                Veg.Veg_Meals_Count = Veg.Veg_Meals_Count + quantity;
                break;
            case 'J':
                cout << "Enter Quantity Of Fresh Juice ...You would Like to have::::::::::";
                cin >> quantity;
                Veg.Fresh_Juice_Seasonal = Veg.Fresh_Juice_Seasonal + (80 * quantity);
                Veg.Fresh_Juice_mix_Count = Veg.Fresh_Juice_mix_Count + quantity;
                break;
            case 'K':
                cout << "Enter Quantity Of Fruit Juice Mix ...You would Like to have::::::::";
                cin >> quantity;
                Veg.Fresh_Juice_Mix = Veg.Fresh_Juice_Mix + (70 * quantity);
                Veg.Fresh_Juice_mix_Count = Veg.Fresh_Juice_mix_Count + quantity;
                break;
            case 'L':
                cout << "Enter Quantity Of Falooda ...You would Like to have:::::::::";
                cin >> quantity;
                Veg.Falooda = Veg.Falooda + (75 * quantity);
                Veg.Falooda_Count = Veg.Falooda_Count + quantity;
                break;
            case 'z':
                break;
            default:
                cout << "******************Enter correct code*****************" << '\n';
                break;
            }

        } while (ch3 != 'z');
        int TotalAmount = 0;
        cout << "******* Welcome To " << restaurentName << " *******\n";
        cout << "*************** Order Details **************** \n";
        if (Veg.veg_Briyani != 0)
        {
            cout << "Veg Briyani That you have ordered: "
                 << "Quantity="
                 << Veg.Veg_Briyani_Count << " "
                 << "Cost(Rs):" << Veg.veg_Briyani << '\n'
                 << '\n';
            TotalAmount = TotalAmount + Veg.veg_Briyani;
        }
        if (Veg.Veg_Fried_Rice != 0)
        {
            cout << "Veg Fried Rice That you have ordered: "
                 << "Quantity="
                 << Veg.Veg_Fried_Rice_Count << " "
                 << "Cost(Rs):" << Veg.Veg_Fried_Rice << '\n'
                 << '\n';
            TotalAmount = TotalAmount + Veg.Veg_Fried_Rice;
        }
        if (Veg.Veg_Pulao != 0)
        {
            cout << "Veg Pulao That you have ordered: "
                 << "Quantity="
                 << Veg.Veg_Pulao_Count << " "
                 << "Cost(Rs):" << Veg.Veg_Pulao << '\n'
                 << '\n';
            TotalAmount = TotalAmount + Veg.Veg_Pulao;
        }
        if (Veg.Roti != 0)
        {
            cout << " Roti That you have ordered: "
                 << "Quantity=" << Veg.Roti_Count << " "
                 << "Cost(Rs):" << Veg.Roti << '\n'
                 << '\n';
            TotalAmount = TotalAmount + Veg.Roti;
        }
        if (Veg.Naan != 0)
        {
            cout << "Naan That you have ordered: "
                 << "Quantity=" << Veg.Naan_Count << " "
                 << "Cost(Rs):" << Veg.Naan << '\n'
                 << '\n';
            TotalAmount = TotalAmount + Veg.Naan;
        }
        if (Veg.Tandoori_Roti != 0)
        {
            cout << "Tandoori Roti That you have ordered: "
                 << "Quantity="
                 << Veg.Tandoori_Roti_Count << " "
                 << "Cost(Rs):" << Veg.Tandoori_Roti << '\n'
                 << '\n';
            TotalAmount = TotalAmount + Veg.Tandoori_Roti;
        }
        if (Veg.Paneer_Butter_Masala != 0)
        {
            cout << "Paneer Butter Masala that You Have Ordered:"
                 << "Quantity="
                 << Veg.Paneer_Butter_Masala_Count << " "
                 << "Cost(Rs):"
                 << Veg.Paneer_Butter_Masala << '\n'
                 << '\n';

            TotalAmount = TotalAmount + Veg.Paneer_Butter_Masala;
        }
        if (Veg.Palak_Paneer != 0)
        {
            cout << "Palak Paneer that You Have Ordered:"
                 << "Quantity="
                 << Veg.Palak_Paneer_Count << " "
                 << "Cost(Rs):" << Veg.Palak_Paneer << '\n'
                 << '\n';
            TotalAmount = TotalAmount + Veg.Palak_Paneer;
        }
        if (Veg.Veg_Meals != 0)
        {
            cout << " Veg Meals that You Have Ordered:"
                 << "Quantity="
                 << Veg.Veg_Meals_Count << " "
                 << "Cost(Rs):" << Veg.Veg_Meals << '\n'
                 << '\n';
            TotalAmount = TotalAmount + Veg.Veg_Meals;
        }
        if (Veg.Fresh_Juice_Mix != 0)
        {
            cout << "Fresh Juice That needs to be ordered:"
                 << "Quantity="
                 << Veg.Fresh_Juice_mix_Count << " "
                 << "Cost(Rs):"
                 << Veg.Fresh_Juice_Mix << '\n'
                 << '\n';
            TotalAmount = TotalAmount + Veg.Fresh_Juice_Mix;
        }
        if (Veg.Fresh_Juice_Seasonal != 0)
        {
            cout << "Fruit Juice Seasonal that you have ordered:"
                 << "Quantity="
                 << Veg.Fresh_Juice_Seasonal_Count << " "
                 << "Cost(Rs):"
                 << Veg.Fresh_Juice_Seasonal << '\n'
                 << '\n';
            TotalAmount = TotalAmount + Veg.Fresh_Juice_Seasonal;
        }
        if (Veg.Falooda != 0)
        {
            cout << "Falooda that you have ordered:"
                 << "Quantity="
                 << Veg.Falooda_Count << " "
                 << "Cost(Rs):" << Veg.Falooda << '\n'
                 << '\n';
            TotalAmount = TotalAmount + Veg.Falooda;
        }
        cout << "\n*******TOTAL AMOUNT*******:"
             << " " << TotalAmount << '\n';
        cout << "*******TAX DETAILS******\n";
        int CGST = 0;
        int SGST = 0;
        CGST = TotalAmount + (TotalAmount / 100) * 9;
        SGST = CGST + (CGST / 100) * 9;
        cout << "SGST -- (0%)\n";
        cout << "CGST -- (9%)\n";
        cout << "SGST -- (9%)\n";

        cout << "\n********GRAND TOTAL********"
             << " " << SGST << '\n'
             << '\n';
        cout << "************Your Order Shall Be successfully Delivered*******" << '\n\n';
        cout << "An E-Mail Has been sent to Mail ID regarding The successfull Order"
             << '\n'
             << '\n';
        ;

        cout << "\n*******THANK YOU FOR CHOOSING FOOD PANDA********\n";
    }
    else
    {
        cout << "Wrong code selected No hotel found with entered code";
    }
    exit(0);
}