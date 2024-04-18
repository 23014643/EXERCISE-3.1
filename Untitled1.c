#include <iostream>
#include <String>
using namespace std;

int main (){
    int Age,SourceOfIncome,BirthOrder;
    String SkinTone,Gender,Course,Belief,SenseOfHumour,HealthCondition,playful;


    cout << "Enter your age: "<<endl;
    cin >> Age;

    cout << "Source of income:"<<endl;
    cin >> SourceOfIncome;

    cout << "Are you first, second, third or last ";
    cin >> BirthOrder;

    cout << "What is your skin tone ";
    cin >> SkinTone;

    cout << " which course are you doing";
    cin >> Course;

    cout << "do u belief in Christ ";
    cin >> Belief;

    cout << "do you have some sense of humour";
    cin >> SenseOfHumour;


     cout << "ca u be playful with your patner ";
    cin >> playful;

    if (Age >= 18 && Age <= 25) {
        if (Gender == "M" && SourceOfincome >= 15000&& Skintone >="lightskin" && BirthOrder != "last") {

            cout << " Congratulation,you can be my patner" <<endl;

        }} else if (Gender == "M" && income >= 10000 && Skintone >= dark && BirthOrder!="second") {
            cout << "Congratulations, you can be my partner." <<endl;
        } else {
            cout << "My bad you dont qualify" <<endl;
        }
     else {
        cout << "Askies you are too old or young my dear" <<endl;
    }

    return 0;


}
