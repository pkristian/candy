#include <string>
#include <vector>
#include "Profile.h"

#ifndef CANDY_PROFILEFROMARGUMENTS_H
#define CANDY_PROFILEFROMARGUMENTS_H
using namespace std;

class ProfileFromArguments
{
public:
	ProfileFromArguments(int argumentCount, char *argumentArray[]);
	Profile *getProfile();

private:
	vector<string> *cliArguments;
	Profile *profile;
	void createProfile();
};


#endif //CANDY_PROFILEFROMARGUMENTS_H
