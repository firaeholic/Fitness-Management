#include<iostream>
#include<fstream>
#include<string>
#include<string.h>
#include<Windows.h>
#include<cstring>
#include<conio.h>
using namespace std;

void show_time()
{
         
          system("cls");
        cout << "\t\t\t\t\t\tGym Schedule" << endl << endl;
          cout << "\t\t\tDays                  " << "Workouts" << "\t\t\t     Duration" << endl << endl;
          cout << "\t\t\t----------------------------------------------------------------" << endl << endl;
          cout << "\t\t\tMonday               :" << mon << "\t\t\t" <<t1 << endl << endl;
          cout << "\t\t\tTuesday              :" << tue << "\t\t\t" <<t2 << endl << endl;
          cout << "\t\t\tWednesday            :" << wed << "\t\t\t" <<t3<< endl << endl;
          cout << "\t\t\tThursday             :" << thurs << "\t\t\t" <<t4 << endl << endl;
          cout << "\t\t\tFriday is offday  " << endl << endl;
          cout << "\t\t\tSaturday             :" << satur << "\t\t\t" <<t5 << endl << endl;
          cout << "\t\t\tSunday               :" << sun << "\t\t\t" <<t6 << endl << endl;
          cout << "\t\t\t-----------------------------------------------------------------" << endl << endl;
          cout << "\t\t\tPress any key to choose another option ..." << endl << endl;
          getch();
                  
      }
