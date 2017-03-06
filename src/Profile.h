#ifndef CANDY_PROFILE_H
#define CANDY_PROFILE_H

#include <string>
#include <vector>
#include <array>

using namespace std;

class Profile
{
public:
	string profileName;
	string branch;
	string user;
	string directory;
	string logFile;

	static vector<string> *getVariableNames();

	void setVariable(string name, string value);

private:
	static vector<string> variableNames;
};


#endif //CANDY_PROFILE_H
