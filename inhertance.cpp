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
};

class cookingYTChannel : public youtubeChannel{
public:   
    cookingYTChannel(string name ,string ownerName):youtubeChannel(name,ownerName){
        
    }
    void practicing(){
        cout<<ownerName<<"you should practicing every day"<<endl;
    }
};
int main() {
   cookingYTChannel cookytChannel("muhammmed cooking","muhaammed");
   cookytChannel.GetInfo();
   cookytChannel.practicing();
   return 0;
}