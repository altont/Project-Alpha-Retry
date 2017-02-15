// ConsoleApplication11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <time.h>
#include <random>
#include <assert.h>
#include <string.h>
#include <algorithm>
#include <fstream>
#include <cstdlib>
#include <cmath>
#include <limits>

using namespace std;

#define ATRAND = (double)rand()/RAND_MAX

double generateGaussianNoise(double mu, double sigma)																					// taken from wikipedia box muller
{
	const double epsilon = std::numeric_limits<double>::min();
	const double two_pi = 2.0*3.14159265358979323846;

	static double z0, z1;
	static bool generate;
	generate = !generate;

	if (!generate)
		return z1 * sigma + mu;

	double u1, u2;
	do
	{
		u1 = rand() * (1.0 / RAND_MAX);
		u2 = rand() * (1.0 / RAND_MAX);
	} while (u1 <= epsilon);

	z0 = sqrt(-2.0 * log(u1)) * cos(two_pi * u2);
	z1 = sqrt(-2.0 * log(u1)) * sin(two_pi * u2);
	return z0 * sigma + mu;
}

class agent {
public:
	void init();
	void decide();
	void act();
	void react();
};

void agent::init() {
	double alpha = 0.1;																													// set as such because it's deemed as a good value for alpha
	double epsilon = 0.7;																												// set as such to encourage exploration at the start
};

void agent::decide() {
	if (epsilon >= ATRAND)																												// compares epsilon to a random number between [0,1]
		action = string random;																											// if greater or equal, random action taken
	else
		action = string greedy;																											// if lesser, greedy option taken
}

void agent::act() {
	if (action=="random")
		pull.arm
	else

}

void agent::react() {

}

class arm {
	void init();
	void pull();
};

void arm::init() {
	double mu = rand() % 100;
	double sigma = rand() % 5;
	double V_t = 0;
};

void arm::pull() {
	reward = generateGaussianNoise(mu, sigma)
}

class MAB {
	void init();
};


void MAB::init() {
	arm arm_a;
	arm arm_b;
	arm arm_c;
	arm_a.init;
	arm_b.init;
	arm_c.init;
};


int main()
{
	srand(time(NULL));

    return 0;
}

