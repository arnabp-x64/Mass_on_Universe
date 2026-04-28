#include <iostream>
#include <iomanip>
#include <chrono>
#include <thread>

using namespace std;
using namespace std::chrono;
using namespace std::this_thread;

void tprt(const string& text,int delay=30){
    for (char c : text) {
        cout << c << flush;
        sleep_for(milliseconds(delay));
    }
}



int run_counter = 0;
int runned_times = 0;



int main(){
    runned_times++;
    if (run_counter == 0) {
        
    tprt("Welcome to the Mass_On_Universe, a CUI based calulator for calculating your weight on different planets and moons in our solar system.\n");
    cout<<endl;
    tprt("Before you start please tell us your name or nickname\n");
    string name="Human";
    string surname="";
    cout<<endl;
    tprt("I am ");

    cin>>name;
    cin.ignore();
    cin.clear(); // Clear the input buffer

    cout<<endl;
    tprt("Nice to meet you, "+name+"! Let's get started.\n");
    cout<<endl;
    run_counter++;
    }
    else{
        tprt("loding......\n");
        sleep_for(seconds(2));
    }
    tprt("Please enter your weight on Earth (in kg): ");
    double weight;
    cin >> weight;
    cin.ignore();
    cin.clear(); // Clear the input buffer

    cout<<endl;
    tprt("Calculating your weight on different planets and moons");
    tprt("........................................",50);

    cout<<endl;
    tprt("Your weight on different planets and moons in our solar system:\n");
    cout<<endl;
    cout << left << setw(20) << "Planet/Moon" << setw(15) << "Weight (kg)" << endl;
    sleep_for(milliseconds(500));
    cout << left << setw(20) << "Mercury" << setw(15) << fixed << setprecision(2) << weight * 0.38 << endl;
    sleep_for(milliseconds(400));
    cout << left << setw(20) << "Venus" << setw(15) << fixed << setprecision(2) << weight * 0.91 << endl;
    sleep_for(milliseconds(300));
    cout << left << setw(20) << "Mars" << setw(15) << fixed << setprecision(2) << weight * 0.38 << endl;
    sleep_for(milliseconds(600));
    cout << left << setw(20) << "Jupiter" << setw(15) << fixed << setprecision(2) << weight * 2.34 << endl;
    sleep_for(milliseconds(200));
    cout << left << setw(20) << "Saturn" << setw(15) << fixed << setprecision(2) << weight * 1.06 << endl;
    sleep_for(milliseconds(400));
    cout << left << setw(20) << "Uranus" << setw(15) << fixed << setprecision(2) << weight * 0.92 << endl;
    sleep_for(milliseconds(100));
    cout << left << setw(20) << "Neptune" << setw(15) << fixed << setprecision(2) << weight * 1.19 << endl;
    sleep_for(milliseconds(500));
    cout << left << setw(20) << "Moon" << setw(15) << fixed << setprecision(2) << weight * 0.16 << endl;



    sleep_for(seconds(3));

    tprt("would you like to calculate your weight on other planets and moons? (y/n): ");
    char choice;
    cin >> choice;
    if (choice == 'y' || choice == 'Y') {
        main(); // Restart the program
    } else {
        tprt("Thank you for using Mass_On_Universe. You ran this program "+to_string(runned_times)+" times. Goodbye!");
        sleep_for(seconds(3));
    }
    return 0;
}