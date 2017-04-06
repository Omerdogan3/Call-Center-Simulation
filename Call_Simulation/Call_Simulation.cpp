// Call_Simulation.cpp : Defines the entry point for the console application.
//
#pragma once
// Including SDKDDKVer.h defines the highest available Windows platform.

// If you wish to build your application for a previous Windows platform, include WinSDKVer.h and
// set the _WIN32_WINNT macro to the platform you wish to support before including SDKDDKVer.h.



#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <time.h>
#include <unistd.h>
#include "CallCenter.h"
using namespace std;

int main()
{
	CallCenter* sim = new CallCenter(100,100);
	int com_calls = 0;
	while (1) {
		srand(time(NULL));
		int an = rand() % 2;
		
		sim->simulation();
		if (an == 1) {
			if (sim->answer() == true)	com_calls++;
		}
		
		cout << "number of calls completed : " << com_calls << endl;
		sleep(300);
	}
    return 0;
}

