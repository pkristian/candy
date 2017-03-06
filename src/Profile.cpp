#include "Profile.h"

vector<string> Profile::variableNames = {"profileName", "branch", "user", "directory", "logFile"};

vector<string> *Profile::getVariableNames()
{
return &(Profile::variableNames);
}

void Profile::setVariable(string name, string value)
{
	if (name == "profileName")
		this->profileName = value;
	if (name == "branch")
		this->branch = value;
	if (name == "user")
		this->user = value;
	if (name == "directory")
		this->directory = value;
	if (name == "logFile")
		this->logFile = value;
}
