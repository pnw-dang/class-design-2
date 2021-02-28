#include <iostream>
#include <string>
#include "URL.h"

string scheme, authority, path;
int colon, slash, doubleSlash, authorityCh;

URL::URL(string link)
    : myLink{ link } {}

string URL::getLink() {
    return myLink;
}

string getIndex(string link) {
    colon = link.find(":");
    for (int i = 0; i < link.size(); i++) {
        if (link[i] == '/' && link[i + 1] == '/') {
            doubleSlash = i;
            i++;
        }
        else if (link[i] == '/' && link[i + 1] != '/') {
            slash = i;
            break;
        }
    }
    return link;
}
string URL::getScheme() {
    getIndex(myLink);
    scheme = myLink.substr(0, colon + 1);
    return scheme;
}

string URL::getAuthority() {
    getIndex(myLink);
    authorityCh = ((myLink.size() - colon) - (myLink.size() - slash)) - 1;
    authority = myLink.substr(doubleSlash, authorityCh);
    return authority;
}

string URL::getPath() {
    getIndex(myLink);
    path = myLink.substr(slash);
    return path;
}

void printURL(URL param) {
    std::cout << "URL: " << param.getLink() << "Scheme: " << param.getScheme() << "\n" << "Authority: " << param.getAuthority()
        << "\n" << "Path: " << param.getPath() << "\n";
}