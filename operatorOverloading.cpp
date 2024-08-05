#include <iostream>
#include <string>
#include <list>
using namespace std;

/*struct YouTubeChannel
{
    string Name;
    int SubscribersCount;

    YouTubeChannel(string name, int subscribersCount)
    {
        Name = name;
        SubscribersCount = subscribersCount;
    }
    bool operator==(const YouTubeChannel &channel) const
    {
        return this->Name == channel.Name;
    }
};
ostream &operator<<(ostream &COUT, YouTubeChannel &ytChannel)
{
    COUT << "Name: " << ytChannel.Name << endl;
    COUT << "Subscribers: " << ytChannel.SubscribersCount << endl;
    return COUT;
}
struct MyCollection
{
    list<YouTubeChannel> myChannels;

    void operator+=(YouTubeChannel &channel)
    {
        this->myChannels.push_back(channel);
    }
    void operator-=(YouTubeChannel &channel)
    {
        this->myChannels.remove(channel);
    }
};
ostream &operator<<(ostream &COUT, MyCollection &myCollection)
{
    for (YouTubeChannel ytChannel : myCollection.myChannels)
        COUT << ytChannel << endl;
    return COUT;
}

int main()
{
    YouTubeChannel yt1 = YouTubeChannel("CodeBeauty", 75000);
    YouTubeChannel yt2 = YouTubeChannel("My second channel", 80000);

    MyCollection myCollection;
    myCollection += yt1;
    myCollection += yt2;
    myCollection -= yt2;

    cout << myCollection;

    cin.get();
}*/

class YoutubeChannel
{
private:
    string name;
    int subscriberCount = 0;
    friend ostream &operator<<(ostream &COUT, YoutubeChannel &yt);

public:
    void setName(string Name)
    {
        this->name = Name;
    }
    string getName(string Name)
    {
        return name;
    }
    void setSubscriberCount(int SubscriberCount)
    {
        this->subscriberCount = SubscriberCount;
    }
    int getName()
    {
        return subscriberCount;
    }
};
struct MyCollection
{
    list<YoutubeChannel> collection;

    void operator+=(YoutubeChannel &yt)
    {
        this->collection.push_back(yt);
    }
};
ostream &operator<<(ostream &COUT, YoutubeChannel &yt)
{
    COUT << "Name: " << yt.name << endl;
    COUT << "Subscribers: " << yt.subscriberCount << endl;
    return COUT;
}
int main()
{
    YoutubeChannel yt;
    yt.setName("muhammed abdelsamea");
    yt.setSubscriberCount(8000);

    cout << yt << endl;

    return 0;
}