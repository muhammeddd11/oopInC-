
#include <iostream>
#include <list>
using namespace std;

class youtubeChannel{
public:	
    //class properties
	string name;
	string ownerName;
	int subscribeCount;
	list<string> publishedVideos;
    // constructor
    youtubeChannel(string name,string ownerName){

        this->name = name;
        this->ownerName = ownerName;
        subscribeCount = 0;
        }
    // class methods
    void GetInfo(){
	    cout <<name<<endl;
	    cout <<subscribeCount<<endl;
	    for(string title: publishedVideos){
	        cout<<title<<endl;
	    }
    }
};

int main() {
	youtubeChannel ytChanne1("dailyCoding","muhammed abdelsamea");
    ytChanne1.GetInfo();
	return 0;
}