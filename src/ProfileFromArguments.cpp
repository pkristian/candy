#include <string>
#include "ProfileFromArguments.h"
#include <iostream>
#include <algorithm>

using namespace std;



ProfileFromArguments::ProfileFromArguments(int argumentCount, char *argumentArray[])
{
	this->cliArguments = new vector<string>;

	string currentArgument;
	for (
			unsigned i = 1;
			argumentCount > i;
			i++
			)
	{
		currentArgument = argumentArray[i];
		this->cliArguments->push_back(currentArgument);
	}

	this->createProfile();
}


Profile *ProfileFromArguments::getProfile()
{
	return this->profile;
}


void ProfileFromArguments::createProfile()
{
	this->profile = new Profile();


	for (
			unsigned i = 0;
			i < this->cliArguments->size();
			i++
			)
	{
		string argument = (this->cliArguments->at(i));
		bool argumentValid = false;

		string variableName = "";

		//is in list of parameters?
		for (
				unsigned j = 0;
				j < Profile::getVariableNames()->size();
				j++
				)
		{
			string variableWeCheckAgainst = (Profile::getVariableNames()->at(j));
			if (argument == ("--" + Profile::getVariableNames()->at(j)))
			{
				variableName = variableWeCheckAgainst;
				argumentValid = true;
				break;
			}
		}

		if (!argumentValid)
		{
			cout << "ERROR: Invalid parameter \"" << argument << "\", exiting...";
			exit(1);
		}
		else
		{
			if (++i == this->cliArguments->size())
			{
				cout << "ERROR: Expecting value, but none given, exiting..." << endl;
				exit(2);
			}
			string variableValue = (this->cliArguments->at(i));
			profile->setVariable(variableName, variableValue);
		}
	}

}
