#include <iostream>

using namespace std;

int main(){
    int maximumCapacity;
    int numPeople;

    //Read the maximum people in the room

    cout << "What is the maximum amount capacity?"<< endl;
    cin >> maximumCapacity;

    //Read the number of people attending the meeting
    
    cout << "How many people are attending the meeting?"<<endl;
    cin >> numPeople;

    //If number <= the max the meeting is legal tells how many people can legally be added

    if(numPeople<=maximumCapacity){
        cout<<"This meeting is legal."<<endl;
        cout<<maximumCapacity-numPeople<<" people can be legally added to this meeting."<<endl;
    }

    //If number > max the meeting is illegal tells how many people needs to be excluded

    else{
        cout<<"This meeting is illegal."<<endl;
        cout<<numPeople-maximumCapacity<<" people need to be excluded to this meeting to make this meeting legal."<<endl;
    }

    return 0;
}