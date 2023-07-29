   /* Title : Gym and Physical Fitness Management
    Group Memebers             ID NO

    Amanuel Tewodros           UGR/9013/13
    Franol Fekadu              UGR/6108/13
    Dibora Berhanu             UGR/8969/13
    Beimnet Worku              UGR/7285/13
    Alexander Kiros            UGR/5158/13
    Birehanu Asmamaw           UGR/2160/13

    - The password for the admin is "admin".
    - When the user selects to use "user mode" the program asks for the id because it want to verify that the user is a member of the gym."
    - Please use only integers and strings where intended(don't use strings when asked for integers). */

#include<fstream>
#include<iomanip>
#include<iostream>
#include<cstdlib>
#include<string.h>
#include <string>
#include<iomanip>
#include<windows.h>
#include<cstring>
#include<conio.h>
#include "entrance.h"
#include "mainmenu.h"
#include "get_information.h"
#include "feedback.h"
#include "set_workout_schedule.h"
#include "set_own_diet.h"
#include "view_workout_schedule.h"
#include "expert_diet.h"

using namespace std;

struct contact{
 int phone;
 string email;


};
struct user{

	char mno[10], gender;
	double weight,height;
	int age;
}info;

struct execise{

         float plank = 1;
         int bsp=4;
         int lte=3;
         int bp=5;
         int bc=2;
         int freq=1;
         string ex[5][6]{{"shoulder ","plank","barbell standing press","lying tricep extension","bench press","barbell curl"}
         ,{"chest ","cobra stretch","inclined press","Dumbbell pull over","wide push ups","chest press"}
         ,{"abdomen ","side plank","mountain climber","leg raise","russian twist","sit-ups"},
         {"lower body ","jumping jacks","barbell squats","calf raise","leg raise","leg extension"}};



    }exr;
void f(string);
void i(string);
void s(string);
void strength();
void q(char);
void weight_loss();
void cardio();


struct member{
    int id;
    float fee;
    string fname;
    string m_plan;
    contact cont;
    string lname;




};
int chooseMode();
int login_admin();

void create();
int validID();
void display1();
int match(string);
void sear();
void edit();
void del();
void _user(int);
int validateUser();
void user_input();
void weighttell(double b);
void workout();



template <class d>
d bmi(d a, d b){
	d v= a/(b*b);
	return v;
}
double bodym;

int validateUser(){
cout << "\nEnter your ID: ";
int id,a = 0 ;
cin >> id;
string line;
bool state = false;
ifstream in("member_list");

while(getline(in, line )){
    if(a>0){
        if(match(line) == id){
        cout << "\nUser has logged in successfully\n";
        return 2;}



    }
    a++;




}

cout << "\nYou are not registered.\n";
system("pause");
return 0;


}





void _user(int mode){
if (mode == 1){
        cout<<"What do you want to do?\n";
        cout<<"\t***********************************************";
    	cout<<"\n\tPress 1 to CREATE A MEMBER";
    	cout<<"\n\tPress 2 to DISPLAY EXSISTING RECORDS";
    	cout<<"\n\tPress 3 to SEARCH FOR A PARTICULAR RECORD ";
    	cout<<"\n\tPress 4 to EDIT A MEMBER'S DETAILS";
    	cout<<"\n\tPress 5 to DELETE A MEMBER'S RECORD";
    	cout<<"\n\tPress any other key to EXIT";
    	cout<<"\n\t**********************************************\n";

        int opt;
        cin >> opt;
        switch(opt){
            case 1: create();
                    break;
            case 2: display1();
                    break;
            case 3: sear();
                    break;
            case 4: edit();
                    break;
            case 5: del();
                    break;
            default: _user(chooseMode());
        }

}

else if(mode == 2){
        cout << "\n What do you want me to do?\n 1. Calculate your Body-mass index\n 2. Recommend you a work-out plan\n 3. Go back\n";
        int oo;
        cin >> oo;
        switch(oo){
             case 1: user_input();
                    break;
             case 2: workout();
                    break;
             default: _user(chooseMode())
             ;




               }

}
else if(mode == 0){
   _user(chooseMode());

}



}




int main(){
    int mode = chooseMode();
    _user(mode);

return 0;
}

void create(){
    member new_member;
    new_member.id = validID();
    cout << "\nEnter the new member's full name : ";
    cin >> new_member.fname >> new_member.lname;
    cout<<"\nEnter the new member's phone number: (Please use only numbers)";
    cin>> new_member.cont.phone;
    cout<<"\nEnter the new member's email: ";
    cin>> new_member.cont.email;
    cout<<"\nMembership type \n 1. Gold class\n 2. Silver class\n";
    int k;
    cin>>k;
		switch (k)
		{
			case 1:
			    new_member.m_plan = "Gold";
				new_member.fee = 2500.00;
				cout<<"The monthly fee would be: $"<<2500.00<<endl;


				break;
			case 2:
			    new_member.m_plan = "Silver";
				new_member.fee = 2000.00;
				cout<<"The monthly fee would be: $"<<2000.00<<endl;

				break;
            default: cout<<"Error occured; Try again! \n";


		}
		ofstream in("member_list", ios::app);


    in << new_member.id << '\t' <<new_member.fname << '\t' << new_member.lname << '\t' << new_member.cont.phone<< '\t'<< new_member.cont.email<< '\t' <<new_member.m_plan << '\t' << new_member.fee << endl;

    in.close();
    system("pause");
    system("cls");

    _user(1);


}
void display1(){
string line;
ifstream in;
in. open("member_list", ios::in);
if(in.fail()) cout << "\n Error occured while opening file\n";
else{
    while (getline(in, line))
        cout << line << endl;
        system("pause");
        system("cls");
}
in.close();
    _user(1);
}
void sear(){



        cout << "\n 1. Search by ID\n 2. Search by name\n";
        int opt;
        cin >> opt;
        switch (opt){
        case 1:{ int id, test, a;
        a=0;
        test = 1;
        string str;
        cout << "\nEnter the id of the member to be searched: ";
        cin >> id;
        fstream fp;
    	fp.open("member_list",ios::in);
    	fp.seekg(0,ios::beg);
    	while(getline(fp, str))
    	{

        if(a>0){
    		if(match(str)==id)
    		{   cout << "\n The information about the member you searched for is: ";
    			cout << endl<< "ID \t first name \t last name \t phone \t email \t membership type \t fee" << endl;
    			cout << str << endl;
    			system("pause");
                test= 0;
                system("cls");
    		}

    	}
    	a++;
    	}
    	fp.close();
    	if(test)
    	cout<<"\n No record found with such ID\n";
    	system("pause");
    	system("cls");
        break;


    	}

    	case 2: { int countt= 0;
                cout << "\nEnter the first name of the member: ";
                string sub, sub2;
                string name;
                string line;
                cin >> name;
                ifstream in("member_list");
                in.seekg(0,ios::beg);
                while(getline(in, line)){
                    sub = line.c_str();
                    if (strlen(line.c_str())>10){
                    sub2 = sub.substr(5, strlen(name.c_str()));}
                    else sub2 = sub;
                    //cout << line << '\t'<< sub2<< endl;
                    if(name == sub2){
                        cout<< line << endl;
                        countt++;
                        }
                    }

               cout << endl << countt <<  " related results found.\n";
               in.close();

               system("pause");
               system("cls");
                break;}
        }

    _user(1);


}
void del(){
{
    	int num, a;
        a=0;
        int test = 1;
    	string line;
    	cout<<"Enter the member id: ";
    	cin>>num;
    	//cout << endl << num;
    	fstream fp("member_list",ios::in|ios::out);
    	fstream fp2("temp",ios::out);
    	//cout << fp2.fail()<<endl;
    	fp.seekg(0,ios::beg);

    	while(getline(fp, line))
    	{


            if(a == 0){fp2 << line <<endl;}

            if(a>0){
    		if(match(line)!= num)
    		{
    			fp2 << line <<endl ;

    		}
    		else test = 0;}

    	a++;

    	}

    	fp2.close();
    	fp.close();
    	remove("member_list");
    	rename("temp","member_list");
    	if(test) cout << "\n No record with id " << num << " found\n";
        else {cout<<"\nRecord Deleted.\n";
        fstream lis("idlist", ios::app);
        lis.seekp(0, ios::end);
        lis <<endl << num ;
        lis.close();}
        system("pause");
                system("cls");
            _user(1);

    }


}

void edit(){

int id, test, a;
member old_member;
cout << "\nEnter the id of the member: ";
cin>> id;
cout << "\nEnter the member's (new) full name : ";
    cin >> old_member.fname >> old_member.lname;
    cout<<"\nEnter member's (new) phone number: ";
    cin>> old_member.cont.phone;
    cout<<"\nEnter the member's (new) email: ";
    cin>> old_member.cont.email;
    cout<<"\nMembership type \n 1. Gold class\n 2. Silver class\n";
    int k;
    cin>>k;
		switch(k)
		{
			case 1:
			    old_member.m_plan = "Gold";
				old_member.fee = 2500.00;
				cout<<"The monthly fee would be: $"<<2500.00<<endl;
                system("pause");
                system("cls");

				break;
			case 2:
			    old_member.m_plan = "Silver";
				old_member.fee = 2000.00;
				cout<<"The monthly fee would be: $"<<2000.00<<endl;
                system("pause");
                system("cls");
				break;
            default: cout<<"Error occured; Try again! \n";
            system("pause");
                system("cls");


		}



        a=0;
        test = 1;
        string str;
        fstream fp;
    	fp.open("member_list", ios::in|ios::out);
    	ofstream fp2;
    	fp2.open("temp");
    	//cout<< fp2.fail()<<endl;
    	while(getline(fp, str))
    	{
        if(a == 0) fp2 << str <<endl;
        if(a>0){
    		if(match(str)!=id)
    		{
                fp2 << str <<endl;

    		}
    		else test = 0;

    	}
    	a++;
    	}
    	fp.close();

    	if(test){
    	cout<<"\n No record found with id" << id;}
    	else{
            fp2 << id << '\t' <<old_member.fname <<  '\t' << old_member.lname << '\t' << old_member.cont.phone<< '\t'<< old_member.cont.email<< '\t' <<old_member.m_plan << '\t' << old_member.fee << endl;
        }
        fp2.close();
        remove("member_list");
    	rename("temp","member_list");

    _user(1);


}



int chooseMode(){
system("cls");
cout << "Select the mode you wish to enter: "<< endl << "\t 1. Admin mode\n \t 2. User mode \n \t 3. Exit Program \n";

int mode;
cin >> mode;

switch(mode){
case 1:return login_admin();
        break;
case 2: return validateUser();
        break;
case 3: exit(0);
default: cout << "Invalid input, try again\n";
          system("pause");
         _user(chooseMode());
}
}
int login_admin(){
    string pw;
 cout << "Enter admin password: ";
 cin >> pw;
 if(pw == "admin"){
    cout << "\n Login successful: you are now in admin mode.\n";
    return 1;

 }
 else {
    cout << "\n Login failed: incorrect password\n";
    system("pause");
    return 0;
    }



}
int validID(){
    int id;
    char m1;
    fstream fp;
    fp.open("idlist",ios::in|ios::out);
    fstream fp2;
    	fp2.open("temp",ios::out);
    	fp.seekg(0,ios::beg);
    	fp >> id;
    	while(fp.read((char*)&m1,sizeof(m1)))
    	{
            fp2.write((char*)&m1,sizeof(m1));
    	}

    	fp2.close();
    	fp.close();
    	remove("idlist");
    	rename("temp","idlist");
    return id;



}
int match(string str){
string sub = str.substr(0,4);
//cout << str;
int INT = std::stoi(sub);
return INT;

}

void user_input()
{


	cout<<"\nEnter Gender(m for male/f for female): ";
	cin>>info.gender;
	while(info.gender != 102 && info.gender != 70 && info.gender != 109 && info.gender != 77 ){
		cout<<"\nInvalid input try again: ";
		cin>>info.gender;
	}
	cout<<"\nEnter Age: ";
	cin>>info.age;
	while(info.age < 0 || info.age > 1000){
		cout<<"\nInvalid input try again: ";
		cin>>info.age;
	}
	cout<<"\nEnter Weight(Should be in Kg): ";
	cin>>info.weight;
		while(info.weight < 0 || info.weight > 1000){
		cout<<"\nInvalid input try again: ";
		cin>>info.weight;
	}
	cout<<"\nEnter Height(Should be in mtrs like 182cm= 1.82m): ";
	cin>>info.height;
		while(info.height < 0 || info.height > 10){
		cout<<"\nInvalid input try again: ";
		cin>>info.height;
	}

bodym=bmi<double>(info.weight, info.height);
cout << "\nyour BMI is:    "<< bodym;
weighttell(bodym);

}
void weighttell(double bmi){
	if(bmi<18.5)
	{
		cout <<"\nUnderweight"<<endl;
cout<<"\n1. Eat More Often to Gain Weight \n2. Choose Low Volume Foods to Gain Weight \nExtracting different components from foods, like oils, proteins, and sugars from whole foods,  is an easy way to get concentrated macros that can provide a significant source of calories  without taking up too much space. \nWorkout plan Best compound exercises for muscle growth, Squats (Front and back),Deadlifts (Traditional, Romanian, Sumo etc) Bench press (incline, flat, decline), Push-ups (incline, flat, decline), Rows (seated, standing, bent-over) Military Press (standing or seated),Bulgarian Split squats and lunges, Pull-up\n";
	system("pause");
	system("cls");}
	else if(bmi>=18.5 && bmi<24.5)
	{
		cout <<"\nFit"<<endl;
cout<< " Eating Right \nAt least 2 cups of fruits and 2 and half cups of vegetables each day for vitamins, minerals, fiber and phytochemicals. Whole grains. Eat at least half of all grains as whole grains each day.  More than Meat Eat a variety of protein foods, including seafood and plant-based sources, like beans, peas and soy products. Cut down on saturated fat from high fat meats and full-fat dairy products and fried foods. Instead, opt for foods with unsaturated, heart-healthy fats such as olive oil, canola oil, nuts, seeds and avocados. \n1. Jumping Jacks \n2. Plank \n3. Cross Crunches \n4. Side Plank \n5. Squats \n6. Lunges \n7. Push-ups \n8. Russian twist \n9. High Knees\n10. Dead Bugs\n";
system("pause");
system("cls");}
	 else if(bmi>=24.5 && bmi<30)
	{
		cout <<"\nOverweight"<<endl;
cout << "\n 10 of the Best Weight Loss Eating Patterns"
"\nLosing excess fat and reaching a healthy body weight may benefit men’s health in numerous ways."
"\nFor example, a healthy body weight may reduce your risk of many health conditions, including heart disease, diabetes, certain cancers, and liver disease (1Trusted Source, 2Trusted Source)."
"\nSlow and steady"
"\nMost workout programmes fail because people do too much, too soon, hoping for drastic results."
"\nWhen they don’t come, it’s back to bad habits. “Start off slow,” says Jones. “Gradual introduction of movement"
 "\nChair squat stand-ups"
"\nMake it harder: Add in more sets as you progress, or hold two bottles of water to add resistance."
"\nModified press,Stair climb, Front lunge, Plank\n";
system("pause");
system("cls");}
else if(bmi >=30)
	{
		cout <<"\nObese" <<endl;
		cout << "\nInitial Doctor Consultation"
"\nObesity comes with risk, and monitoring your health alongside a professional is important. Consulting with a doctor before creating exercise plans is imperative to ensure you approach the new plan safely. The doctor will help determine how much stress your body can handle, while monitoring the condition of your heart and other important health metrics."
"\nStarting with an initial consultation, and stating your objective to engage in an obese workout plan, is extremely important. The doctor will likely want to test your blood pressure while taking blood samples on a weekly, bi-weekly or monthly basis, depending on the risk level and severity of obesity. Blood tests and strict weight and body fat monitoring are also very normal."
"\nShop around for the best doctor to help. A May, 2012 study conducted by the Journal of Obesity examined 500 physicians and their impact on obesity treatment in patients. The study found that doctors with a normal BMI are more effective at treating and prescribing treatment for obese patients. After the initial doctor consultation, begin the workout plan, but make sure to schedule follow up visits. Coordinate between your doctor and a personal trainer as well, if possible. When everyone is working towards the same goals together, the transition into a new lifestyle can run smoothly.\n";
}system("pause");
system("cls");
		_user(2);}


void workout(){

naruto:
    int luffy;
    char d;
    system("cls");
    cout << "PLEASE SELECT THE KIND OF WORKOUT PLAN?\n1 for Weight Loss : 2 for Strength Building : 3 for Cardiovascular : 4 to go back\n";
    cin >> luffy;
    system("cls");
    if(luffy == 1){
weight_loss();

            cout << "Would you like to continue?: 'Y' for Yes , 'N' for NO \n";
cin >> d;
cout << "\n\n";

    if(d == 'Y' || d == 'y'){
    goto naruto;
}

    }else if(luffy == 2){
    strength();

    goto naruto;

    }

    else if(luffy == 3){
        cardio();
        goto naruto;
    }
    else if(luffy == 4){
        _user(chooseMode());


    }









}
void i(string y){

        ifstream file1("help1.txt");

            while(file1){

                getline(file1, y);
                cout << y<< "\n";
}
}
void f(string x){
 ifstream file("help.txt");

        while(file){

                getline(file, x);
                cout << x<<"\n";
}
}
void s(string z){

 ifstream file2("help2.txt");


        while(file2){

                getline(file2, z);
                cout << z<<"\n";
}}
void q(char){
  cout << "\nYou should try avoiding foods with high fat content like 'FRENCH FRIES' 'SUGARY DRINKS' 'CANDY BARS'\n";
            cout<< "Workouts done during the morning are more ideal for losing weight but late workouts tend to give you more energy\n";
            cout << "You should never do a workout immediately after eating. It may cause cramping, bloating and nausea\n\n";

}
void weight_loss(){



    char a,b,c;
    string m;
    cout << "Do you want FAST, INTERMEDIATE or SLOW weight loss instructions? \n\n";
    cout << "F for Fast Weight Loss: I for Intermediate Weight Loss: S for Slow Weight Loss\n";

zoro:
    cin >> a;
    system("cls");
    if (a == 'i' || a == 'I'){
        i(m);
    }else if(a == 'f' || a == 'F'){
        f(m);
    }else if(a == 's' || a == 'S'){
        s(m);
    }else{
        cout << "PLEASE ENTER A VALID INPUT: ";
goto zoro;
    }
    cout << "Would you like more tips on dieting and timing?: 'Y' for Yes , 'N' for NO \n";
        cin >> b;
        system("cls");
        if(b == 'y' || b == 'Y'){
              q(c);
              cout << "Thank you for choosing us! ... ";
        }
        else{
            cout << "Thank you for choosing us! ... ";
        }




}
void strength(){
    beg:
fstream myfile("myfile.txt");
int num=1;
int type;
   system("cls");
  cout<<" Select the type of strength exercise you want to participate: \n 1. shoulder \n 2. arm \n 3. back \n 4. lower body \n 5. full body\n press 0 to exit from this work out plan"<<endl;

  cin>>type;
  if(type==0){

  }
  else{


           int co= type;
         for(int j=0;j<num;j++){
            system("cls");
        cout<<" Available strength exercises for "<<exr.ex[co-1][0]<< "\n\n"<<exr.ex[co-1][1]<<endl<<exr.ex[co-1][2]<<endl<<exr.ex[co-1][3]<<endl<<exr.ex[co-1][4]<<endl<<exr.ex[co-1][5]<<endl<<endl;
         co++;

         }
    for(int day=1; day<30; day++){

if(type==5){
    num=4;
    type=1;
    }
system("cls");
       for(int j= 0;j<num;j++){

    cout<<exr.ex[type-1][0]<<"strength exercises for day: "<<day<<endl<<endl;

    cout<<left<<setw(30)<<"Exercise number"<<left<<setw(30)<<"Name"<<left<<setw(40)<<"Repetition(duration in minutes)"<<left<<setw(30)<<"Frequency"<<endl;
    cout<<left<<setw(30)<<1<<left<<setw(30)<<exr.ex[type-1][1]<<left<<setw(40)<<exr.plank<<left<<setw(30)<<exr.freq<<setw(30)<<endl;
    cout<<left<<setw(30)<<2<<left<<setw(30)<<exr.ex[type-1][2]<<left<<setw(40)<<exr.bsp<<left<<setw(30)<<exr.freq<<setw(30)<<endl;
    cout<<left<<setw(30)<<3<<left<<setw(30)<<exr.ex[type-1][3]<<left<<setw(40)<<exr.lte<<left<<setw(30)<<exr.freq<<setw(30)<<endl;
    cout<<left<<setw(30)<<4<<left<<setw(30)<<exr.ex[type-1][4]<<left<<setw(40)<<exr.bp<<left<<setw(30)<<exr.freq<<setw(30)<<endl;
    cout<<left<<setw(30)<<5<<left<<setw(30)<<exr.ex[type-1][5]<<left<<setw(40)<<exr.bc<<left<<setw(30)<<exr.freq<<setw(30)<<endl<<endl;


    myfile<<exr.ex[type-1][0]<<"strength exercises for day: "<<day<<endl<<endl;

    myfile<<left<<setw(30)<<"Exercise number"<<left<<setw(30)<<"Name"<<left<<setw(40)<<"Repetition(duration in minutes)"<<left<<setw(30)<<"Frequency"<<endl;
    myfile<<left<<setw(30)<<1<<left<<setw(30)<<exr.ex[type-1][1]<<left<<setw(40)<<exr.plank<<left<<setw(30)<<exr.freq<<setw(30)<<endl;
    myfile<<left<<setw(30)<<2<<left<<setw(30)<<exr.ex[type-1][2]<<left<<setw(40)<<exr.bsp<<left<<setw(30)<<exr.freq<<setw(30)<<endl;
    myfile<<left<<setw(30)<<3<<left<<setw(30)<<exr.ex[type-1][3]<<left<<setw(40)<<exr.lte<<left<<setw(30)<<exr.freq<<setw(30)<<endl;
    myfile<<left<<setw(30)<<4<<left<<setw(30)<<exr.ex[type-1][4]<<left<<setw(40)<<exr.bp<<left<<setw(30)<<exr.freq<<setw(30)<<endl;
    myfile<<left<<setw(30)<<5<<left<<setw(30)<<exr.ex[type-1][5]<<left<<setw(40)<<exr.bc<<left<<setw(30)<<exr.freq<<setw(30)<<endl;



    if(num>1)
     type++;


       }
    int counter;

    cout << "\n\nif you want to increase the intensity of the exercise for the next day\n Enter \n1 for a low \n2 for a medium and \n3 for a high increase \n press 0 for no change "<<endl;
    cin>> counter;


     if(counter==1){
         exr.plank += 0.25;
         exr.bsp+=2;
         exr.lte+=2;
         exr.bp+=3;
         exr.bc+=1;
         if(exr.freq<10)
          exr.freq+=1;

    }
  else if(counter==2){
         exr.plank += 0.5;
         exr.bsp+=4;
         exr.lte+=3;
         exr.bp+=5;
         exr.bc+=2;
       if(exr.freq<10)
        exr.freq +=2;

    }

    else if(counter==3){
         exr.plank += 1;
         exr.bsp+=7;
         exr.lte+=6;
         exr.bp+=7;
         exr.bc+=5;
         if(exr.freq<10)
         exr.freq+=3;
    }
   int ter;
   system("cls");
 cout<< "if you want to terminate enter 0 to display the previous data enter 1 or press other key to continue"<<endl;

     cin>>ter;
     if(ter==0){
        goto beg;
    }
    if(ter==1){
        string y;
            while(myfile){

                getline(myfile,y);
                cout << y<< "\n";
    }
    }
    }}}

    void cardio(){
 display();

    int navigation ,x, y, personal_work = 0, personal_diet =0, expert_work = 0, expert_diet =0;
    mainentrance:
    navigation = menu();

if(navigation == 1)
   {
         system("cls");
         cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
         cout << "\t\t\t\t\t\t\t<0> Go back         " << endl << endl;
         cout << "\t\t\t\t\t\t\t<1> Set personal workout schedule " << endl << endl;
         cout << "\t\t\t\t\t\t\t<2> Set personal diet schedule      " << endl << endl;
         cout << "\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
         cout << "\t\t\t\t\t\t\t\tEnter your choice:     ";
         cin >> y;
         if(y == 0)
         {
             goto mainentrance;


         }

         else if(y==1)
         {
              ++personal_work;


             if(get_time()==0)
             {
                 goto mainentrance;
             }


         }

         else if(y==2)
         {
             ++personal_diet;

            int z=   get_diet();


               if (z== 0)
       {
           goto mainentrance;
       }

         }

         else
         {
             cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tWrong Input" << endl;
        cout << "\t\t\t\t\t\t\t\t\tPress any key to choose another option ...";
        getch();
        goto mainentrance;
         }








   }


   else if(navigation ==2)
   {


       system("cls");
         cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
         cout << "\t\t\t\t\t\t\t<0> Go back         " << endl << endl;
         cout << "\t\t\t\t\t\t\t<1> Set schedule to expert workout schedule " << endl << endl;
         cout << "\t\t\t\t\t\t\t<2> Set schedule to expert diet schedule      " << endl << endl;
         cout << "\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
         cout << "\t\t\t\t\t\t\t\tEnter your choice:     ";
         cin >> y;
         if(y == 0)
         {
             goto mainentrance;


         }

         else if(y==1)
         {
             expert_work++;
             system("cls");
              cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t Your workout schedule has been successfully set to expert mode      " << endl << endl;
              cout << "\t\t\t\t\t\t\t Press any key to continue      " << endl << endl;

              getch();
               goto mainentrance;

         }

         else if(y==2)
         {
             expert_diet++;

              system("cls");
              cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t Your diet schedule has been successfully set to expert mode      " << endl << endl;
                cout << "\t\t\t\t\t\t\t Press any key to continue      " << endl << endl;
              getch();

               goto mainentrance;


         }

         else
         {
             cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tWrong Input" << endl;
        cout << "\t\t\t\t\t\t\t\t\tPress any key to choose another option ...";
        getch();
        goto mainentrance;
         }










   }



    else if(navigation ==3)
   {


       if(personal_work==1 &&personal_diet==1)
       {
              show_time();
              view_diet();
              getch();
               goto mainentrance;

       }

       else if(personal_work==1 &&expert_diet==1)
       {
           show_time();
           expertdiet();
            getch();
               goto mainentrance;
       }
       else if(expert_work==1 &&expert_diet==1)

       {
           expert_workout();
           expertdiet();
            getch();
               goto mainentrance;
       }

       else{
        system("cls");
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tIncomplete Input" << endl;
        cout << "\t\t\t\t\t\t\t\t\tPress any key to go back and fill your schedules correctly ...";
        getch();
        goto mainentrance;

       }
   }
    else if(navigation ==4)
   {
        system("cls");
       x =  get_info();
       if (x == 0)
       {
           goto mainentrance;
       }
   }
    else if(navigation ==5)
   {
         system("cls");
       x =  get_feedback();
       if (x == 0)
       {
           goto mainentrance;
       }

   }
    else if(navigation ==6)
    {

    }
   else
   {
        system("cls");
        system("cls");
        cout << "\n\n\t\t\t\t\t\t\t\t\tWrong Input" << endl;
        system("cls");
        cout << "\t\t\t\tt\t\t\tPress any key to choose another option ...";
        getch();
        goto mainentrance;
   }




    }



