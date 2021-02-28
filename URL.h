#include <string>
using namespace std;

class URL {
public: 
	URL(string link);
	string getLink();
	string getScheme();
	string getAuthority();
	string getPath();

private:
	string myLink;
	string myScheme;
	string myAuthority;
	string myPath;
};

void printURL(URL param);