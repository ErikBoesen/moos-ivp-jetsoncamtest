#ifndef FPSTRACKER_H
#define FPSTRACKER_H

#include <ctime>

class FPSTracker
{
	public:
		FPSTracker();
		void start();
		void registerFrame();
		double getFps();
	private:
		unsigned int framesProcessed;
		time_t startTime;
};

#endif
