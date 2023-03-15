#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel{
public:
    string Name;
    string OwnersName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;
};

int main(){
    YouTubeChannel ytChannel;
    ytChannel.Name = "C++";
    ytChannel.OwnersName = "Stoyan";
    ytChannel.SubscribersCount = 1500;
    ytChannel.PublishedVideoTitles = {"OOP with C++","Functions","Recursive functions","Classes"};

    cout<<"Name: "<<ytChannel.Name<<&endl;
    cout<<"Owners Name: "<<ytChannel.OwnersName<<&endl;
    cout<<"Subscribers: "<<ytChannel.SubscribersCount<<&endl;
    cout<<"Videos: ";
    for(string VideoTitle : ytChannel.PublishedVideoTitles){
        cout<<VideoTitle<<" ";
    }
    
}