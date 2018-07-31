#ifndef FPSTRACKER_H
#define FPSTRACKER_H

#include <ctime>

class FPSTracker
{
	public:
		FPSTracker();
		void registerFrame();
		double getFPS();
    private:
        void timekeep();
	private:
		unsigned int m_frames;
        unsigned int m_fps;
		time_t m_time;
};

#endif
