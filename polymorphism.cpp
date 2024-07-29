#include <iostream>
#include <list>
using namespace std;

class youtubeChannel {
private:
    // Class properties
    string name;
    int subscribeCount;
    list<string> publishedVideos;
protected:
    string ownerName;
    int contentQuality=0;
public:
    // Constructor
    youtubeChannel(string name, string ownerName) {
        this->name = name;
        this->ownerName = ownerName;
        subscribeCount = 0;
    }

    // Class methods
    void GetInfo() {
        cout << "Name: " << name << endl;
        cout << "Owner: " << ownerName << endl;
        cout << "Subscribers: " << subscribeCount << endl;
        cout << "Published Videos:" << endl;
        for (string title : publishedVideos) {
            cout << title << endl;
        }
    }

    void subscribe() {
        subscribeCount++;
    }

    void unsubscribe() {
        if (subscribeCount > 0)
            subscribeCount--;
    }

    void publishVideo(string title) {
        publishedVideos.push_back(title);
    }
    void checkAnalytics(){
        if(contentQuality>5)
            cout<<"the quality of your channel is pretty good"<<endl;
        else
            cout<<"the quality of your channel is pretty bad"<<endl;
    }
};

class cookingYTChannel : public youtubeChannel{
public:   
    cookingYTChannel(string name ,string ownerName):youtubeChannel(name,ownerName){
        
    }
    void practicing(){
        cout<<ownerName<<"you should practicing every day"<<endl;
        contentQuality++;
    }
};
class singerYtChannel : public youtubeChannel{
public:   
    singerYtChannel(string name ,string ownerName):youtubeChannel(name,ownerName){
        
    }
    void practicing(){
        cout<<ownerName<<"is singing right now and attend singing classes"<<endl;
        contentQuality++;
    }
};
int main() {
   cookingYTChannel cookytChannel("muhammmed cooking","muhaammed");
   singerYtChannel singingchannel("adams","jack adams");
   cookytChannel.practicing();
   singingchannel.practicing();
   singingchannel.practicing();
   singingchannel.practicing();
   singingchannel.practicing();
   singingchannel.practicing();
   singingchannel.practicing();
   // pointers base class pointer can point to child class

    youtubeChannel *yt1 = &cookytChannel;
    youtubeChannel *yt2 = &singingchannel;

    yt1->checkAnalytics();
    yt2->checkAnalytics();

   return 0;
}