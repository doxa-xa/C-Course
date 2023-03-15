#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel{
    string Name;
    int SubscribersCount;
    list<string> PublishedVideoTitles;
protected:
    string OwnersName;
    int ContentQuality;
public:
    YouTubeChannel(string name, string ownersName){
        Name = name;
        OwnersName = ownersName;
        SubscribersCount = 0;
        ContentQuality = 0;
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
            SubscribersCount++;
    }
    void Unsubscribe(){
        if(SubscribersCount>0)
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
    void CheckAnalytics(){
        if(ContentQuality<5){
            cout<<Name<<" has bad quality content."<< &endl;
        }
        else
            cout<<Name<<" has great quality content."<< &endl;
    }
};

class CoockingYTChannel:public YouTubeChannel {
public:
    CoockingYTChannel(string name, string ownerName):YouTubeChannel(name, ownerName){

    }
    void Practice(){
        string name = GetOwnersName();
        cout<<name<<" is practicing coocking, learning new recepies, experimenting with spices..."<<&endl;
        ContentQuality++;
    }
};
class SingersYTChannel:public YouTubeChannel {
public:
    SingersYTChannel(string name, string ownerName):YouTubeChannel(name, ownerName){

    }
    void Practice(){
        string name = GetOwnersName();
        cout<<name<<" is taking singing classes, learning new songs, lerning how to dance..."<<&endl;
        ContentQuality++;
    }
};

int main(){
    // YouTubeChannel ytChannel("C++","Stoyan");
    // ytChannel.PublishVideo("OOP with C++");
    // ytChannel.PublishVideo("Functions");
    // ytChannel.PublishVideo("Recursive functions");
    // ytChannel.PublishVideo("Classes");
    // ytChannel.getInfo();    

    CoockingYTChannel ytChannel("Katy Pasteries","Sibila");
    // ytChannel.PublishVideo("Chocolate Cake");
    // ytChannel.PublishVideo("Cheese Cake");
    // ytChannel.Subscribe();
    // ytChannel.Subscribe();
    // ytChannel.Subscribe();
    // ytChannel.Subscribe();
    // ytChannel.getInfo();
    ytChannel.Practice();

    SingersYTChannel singerYTChannel("John Sings","John");
    singerYTChannel.Practice();
    singerYTChannel.Practice();
    singerYTChannel.Practice();
    singerYTChannel.Practice();
    singerYTChannel.Practice();

    YouTubeChannel* yt1 = &ytChannel;
    YouTubeChannel* yt2 = &singerYTChannel;

    yt1->CheckAnalytics();
    yt2->CheckAnalytics();

}