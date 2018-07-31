#include <ctime> // chrono is C++11 and above
#include "FPSTracker.h"

FPSTracker::FPSTracker()
{
  framesProcessed = 0;
}

void FPSTracker::start()
{
  time(&startTime);
}

void FPSTracker::registerFrame()
{
  framesProcessed += 1;
}

double FPSTracker::getFps()
{
  time_t currentTime;
  time(&currentTime);
  double elapsedSeconds = difftime(currentTime, startTime);
  double fps = framesProcessed / elapsedSeconds;
  return fps;
}
