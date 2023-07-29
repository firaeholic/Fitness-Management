#include<iostream>
#include<fstream>
#include<string>
#include<string.h>
#include<Windows.h>
#include<cstring>
#include<conio.h>
using namespace std;

int get_feedback()
{
 
    cout<< "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tPlease inform us of your feedback ... ";
    getch();
    int feed_back;
    feed:
    system("cls");
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
    cout << "\t\t\t\t\t\t\t<0> Go back         " << endl << endl;
    cout << "\t\t\t\t\t\t\t<1> I really loved your work   " << endl << endl;
    cout << "\t\t\t\t\t\t\t<2> I am satisfied with your work      " << endl << endl;
    cout << "\t\t\t\t\t\t\t<3> I am not satisfied with your work     " << endl << endl;
    cout << "\t\t\t\t\t\t\t<4> very poor work     " << endl << endl;
     cout << "\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;

    cout << "\t\t\t\t\t\t\t\tEnter your choice:     ";
    cin >> feed_back;

    if (feed_back == 0)
    {
         return 0;
    }
   if(feed_back == 1 ||feed_back == 2 ||feed_back == 3 ||feed_back == 4)
   {
        cout << "\n\n\n\n\n\t\t\t\t\t\t\tThanks! We value your feedback!";
        getch();
   }
   else
   {
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tWrong Input" << endl;
        cout << "\t\t\t\t\t\t\t\t\tPress any key to choose another option ...";
        getch();
        goto feed;
   }

    



}

