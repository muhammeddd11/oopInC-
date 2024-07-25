#include <iostream>
#include <list>
using namespace std;

class youtubeChannel {
private:
    // Class properties
    string name;
    string ownerName;
    int subscribeCount;
    list<string> publishedVideos;

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

int main() {
    youtubeChannel ytChannel1("dailyCoding", "muhammed abdelsamea");
    ytChannel1.GetInfo();
    ytChannel1.subscribe();
    return 0;
}