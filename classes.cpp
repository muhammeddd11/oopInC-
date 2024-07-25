
#include <iostream>
#include <list>
using namespace std;

class youtubeChannel{
public:	
	string name;
	string ownerName;
	int subscribeCount;
	list<string> publishedVideos;
};

int main() {
	youtubeChannel ytChanne1;
	ytChanne1.name = "code beauty";
	ytChanne1.ownerName = "salidna";
	ytChanne1.subscribeCount = 1800;
	ytChanne1.publishedVideos = {"oop in c++","css and html"};
	cout <<ytChanne1.ownerName<<endl;
	cout <<ytChanne1.name<<endl;
	cout <<ytChanne1.subscribeCount<<endl;
	for(string title: ytChanne1.publishedVideos){
	    cout<<title<<endl;
	}
	return 0;
}