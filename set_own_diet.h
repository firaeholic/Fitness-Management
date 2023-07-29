#include<iostream>
#include<fstream>
#include<string>
#include<string.h>
#include<Windows.h>
#include<cstring>
#include<conio.h>

using namespace std;
string mon_break , mon_lunch, mon_dinner,tue_break , tue_lunch, tue_dinner,wed_break , wed_lunch, wed_dinner, thurs_break , thurs_lunch, thurs_dinner,fri_break , fri_lunch, fri_dinner, satur_break , satur_lunch, satur_dinner,sun_break , sun_lunch, sun_dinner;

int get_diet()
{
    system("cls");
    cout << "\n\n\n\n\t\t\t\tEnter 0 at any point to go back     ";

    cout << "\n\n\n\n\t\t\t\tEnter Monday's Breakfast:     ";
    cin >> mon_break;
    cout << endl << endl;

    if (mon_break == "0")
    {
      return 0;
    }
    
    cout << "\t\t\t\tEnter Monday's Lunch:     ";
    cin >> mon_lunch;
    cout << endl << endl;

        if (mon_lunch == "0")
    {
      return 0;
    }
    

     cout << "\t\t\t\tEnter Monday's Dinner:     ";
    cin >> mon_dinner;
    cout << endl << endl;
     if (mon_break == "0")
    {
      return 0;
    }
    

    system("cls");

     cout << "\n\n\n\n\t\t\t\tEnter 0 at any point to go back     ";
     cout << "\n\n\n\n\t\t\t\tEnter Tuesday's Breakfast:     ";
    cin >> tue_break;
    cout << endl << endl;

     if (tue_break == "0")
    {
      return 0;
    }
    

    cout << "\t\t\t\tEnter Tuesday's Lunch:     ";
    cin >> tue_lunch;
    cout << endl << endl;

     if (tue_lunch== "0")
    {
      return 0;
    }
    

     cout << "\t\t\t\tEnter Tuesday's Dinner:     ";
    cin >> tue_dinner;
    cout << endl << endl;

     if (tue_dinner == "0")
    {
      return 0;
    }
    

    system("cls");

cout << "\n\n\n\n\t\t\t\tEnter 0 at any point to go back     ";
     cout << "\n\n\n\n\t\t\t\tEnter Wednesday's Breakfast:     ";
    cin >> wed_break;
    cout << endl << endl;

     if (wed_break =="0")
    {
      return 0;
    }
    

    cout << "\t\t\t\tEnter Wednesday's Lunch:     ";
    cin >> wed_lunch;
    cout << endl << endl;

     if (wed_lunch == "0")
    {
      return 0;
    }
    

     cout << "\t\t\t\tEnter Wednesday's Dinner:     ";
    cin >> wed_dinner;
    cout << endl << endl;

     if (wed_dinner == "0")
    {
      return 0;
    }
    

    system("cls");

cout << "\n\n\n\n\t\t\t\tEnter 0 at any point to go back     ";
     cout << "\n\n\n\n\t\t\t\tEnter Thursday's Breakfast:     ";
    cin >> thurs_break;
    cout << endl << endl;

     if (thurs_break == "0")
    {
      return 0;
    }
    

    cout << "\t\t\t\tEnter Thursday's Lunch:     ";
    cin >> thurs_lunch;
    cout << endl << endl;

     if (thurs_lunch== "0")
    {
      return 0;
    }
    

     cout << "\t\t\t\tEnter Thursday's Dinner:     ";
    cin >> thurs_dinner;
    cout << endl << endl;

     if (thurs_dinner == "0")
    {
      return 0;
    }
    

    system("cls");


cout << "\n\n\n\n\t\t\t\tEnter 0 at any point to go back     ";
     cout << "\n\n\n\n\t\t\t\tEnter Friday's Breakfast:     ";
    cin >> fri_break;
    cout << endl << endl;

     if (fri_break == "0")
    {
      return 0;
    }
    

    cout << "\t\t\t\tEnter Friday's Lunch:     ";
    cin >> fri_lunch;
    cout << endl << endl;

     if (fri_lunch == "0")
    {
      return 0;
    }
    

     cout << "\t\t\t\tEnter Friday's Dinner:     ";
    cin >> fri_dinner;
    cout << endl << endl;

 if (fri_dinner =="0")
    {
      return 0;
    }
    
    system("cls");

cout << "\n\n\n\n\t\t\t\tEnter 0 at any point to go back     ";
     cout << "\n\n\n\n\t\t\t\tEnter Saturday's Breakfast:     ";
    cin >> satur_break;
    cout << endl << endl;
     if (satur_break == "0")
    {
      return 0;
    }
    

    cout << "\t\t\t\tEnter Saturday's Lunch:     ";
    cin >> satur_lunch;
    cout << endl << endl;

     cout << "\t\t\t\tEnter Saturday's Dinner:     ";
    cin >> satur_dinner;
    cout << endl << endl;
     if (satur_dinner == "0")
    {
      return 0;
    }
    

    system("cls");


cout << "\n\n\n\n\t\t\t\tEnter 0 at any point to go back     ";
     cout << "\n\n\n\n\t\t\t\tEnter Sunday's Breakfast:     ";
    cin >> sun_break;
    cout << endl << endl;

     if (sun_break == "0")
    {
      return 0;
    }
    

    cout << "\t\t\t\tEnter Sunday's Lunch:     ";
    cin >> sun_lunch;
    cout << endl << endl;

     if (sun_lunch == "0")
    {
      return 0;
    }
    

     cout << "\t\t\t\tEnter Sunday's Dinner:     ";
    cin >> sun_dinner;
    cout << endl << endl;

     if (sun_dinner == "0")
    {
      return 0;
    }
    
  
    else
    {
    return 0;

    }

}



void view_diet()
{
      cout << "\n\n\n\n\n\n\n\n\n\t\t\t Days" << "\t\t\t\t\t\t\t\tMeals\n";
          cout << "\t\t\t_______________________________________________________________________________\n";
          cout << "\t\t\t\t\t\t|Breakfast" << "\t\t\t|" << mon_break <<endl;
          cout << "\t\t\tMonday " <<  "\t\t\t|Lunch"<< "\t\t\t\t|" <<mon_lunch<<endl;
          cout << "\t\t\t\t\t\t|dinner" << "\t\t\t\t|" <<mon_dinner <<endl;
          cout << "\t\t\t_______________________________________________________________________________" <<endl<<endl;

          cout << "\t\t\t\t\t\t|Breakfast" << "\t\t\t|" << tue_break <<endl;
          cout << "\t\t\tTuesday " <<  "\t\t|Lunch"<< "\t\t\t\t|" << tue_lunch <<endl;
          cout << "\t\t\t\t\t\t|dinner" << "\t\t\t\t|" << tue_dinner <<endl;
          cout << "\t\t\t_______________________________________________________________________________" <<endl <<endl;

          cout << "\t\t\t\t\t\t|Breakfast" << "\t\t\t|" << wed_break <<endl;
          cout << "\t\t\tWednesday " <<  "\t\t|Lunch"<< "\t\t\t\t|"<< wed_lunch <<endl;
          cout << "\t\t\t\t\t\t|dinner" << "\t\t\t\t|"<< wed_dinner <<endl;
          cout << "\t\t\t_______________________________________________________________________________" <<endl <<endl;

          cout << "\t\t\t\t\t\t|Breakfast" << "\t\t\t|" << thurs_break <<endl;
          cout << "\t\t\tThursday " <<  "\t\t|Lunch"<< "\t\t\t\t|" << thurs_lunch <<endl;
          cout << "\t\t\t\t\t\t|dinner" << "\t\t\t\t|"<< thurs_dinner << endl;
          cout << "\t\t\t_______________________________________________________________________________" <<endl <<endl;

          cout << "\t\t\t\t\t\t|Breakfast" << "\t\t\t|" << fri_break <<endl;
          cout << "\t\t\tFriday " <<  "\t\t\t|Lunch"<< "\t\t\t\t|"<< fri_lunch<<endl;
          cout << "\t\t\t\t\t\t|dinner" << "\t\t\t\t|"<< fri_dinner <<endl;
          cout << "\t\t\t_______________________________________________________________________________" <<endl <<endl;

          cout << "\t\t\t\t\t\t|Breakfast" << "\t\t\t|" << satur_break <<endl;
          cout << "\t\t\tSaturday " <<  "\t\t|Lunch"<< "\t\t\t\t|" << satur_lunch <<endl;
          cout << "\t\t\t\t\t\t|dinner" << "\t\t\t\t|" << satur_dinner <<endl;
          cout << "\t\t\t_______________________________________________________________________________" <<endl <<endl;

          cout << "\t\t\t\t\t\t|Breakfast" << "\t\t\t|" << sun_break <<endl;
          cout << "\t\t\tSunday " <<  "\t\t\t|Lunch"<< "\t\t\t\t|" << sun_lunch <<endl;
          cout << "\t\t\t\t\t\t|dinner" << "\t\t\t\t|" << sun_dinner <<endl;
          cout << "\t\t\t_______________________________________________________________________________" <<endl <<endl;
}