#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel{
    string Name;
    string OwnersName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;
public:
    YouTubeChannel(string name, string ownersName){
        Name = name;
        OwnersName = ownersName;
        SubscribersCount = 0;
    }
    void getInfo(){
        cout<<"Name: "<<Name<<&endl;
        cout<<"Owners Name: "<<OwnersName<<&endl;
        cout<<"Subscribers: "<<SubscribersCount<<&endl;
        cout<<"Videos: ";
        for(string VideoTitle : PublishedVideoTitles){
            cout<<VideoTitle<<" ";
        }
    }
    void Subscribe(){
        if(SubscribersCount>0)
            SubscribersCount++;
    }
    void Unsubscribe(){
        SubscribersCount--;
    }
    void PublishVideo(string title){
        PublishedVideoTitles.push_back(title);
    }
    void SetOwnersName(string name){
        OwnersName = name;
    }
    string GetOwnersName(){
        return OwnersName;
    }
    void SetYTChannelName(string name){
        Name = name;
    }
    string GetYTChannelName(){
        return Name;
    }
};

int main(){
    YouTubeChannel ytChannel("C++","Stoyan");
    ytChannel.PublishVideo("OOP with C++");
    ytChannel.PublishVideo("Functions");
    ytChannel.PublishVideo("Recursive functions");
    ytChannel.PublishVideo("Classes");
    ytChannel.getInfo();    
}