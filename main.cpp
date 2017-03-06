#include <iostream>
#include "src/Profile.h"
#include "src/ProfileFromArguments.h"

using namespace std;

int main(int argc, char *argv[])
{
	ProfileFromArguments *profileFromArguments = new ProfileFromArguments(argc, argv);

	Profile *profile = profileFromArguments->getProfile();


	cout << "profileName    = " << profile->profileName << endl;
	cout << "branch         = " << profile->branch << endl;
	cout << "directory      = " << profile->directory << endl;
	cout << "logFile        = " << profile->logFile << endl;
	cout << "user           = " << profile->user << endl;

	return 0;
}
