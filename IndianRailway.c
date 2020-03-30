#include <pthread.h>
#include "IndianRailway.h"


/**
  Initializes all the mutexes and condition-variables.
*/
void
station_init(struct station *station)
{
  station->out_passengers = 0;
  station->in_passengers = 0;
  pthread_mutex_init(&(station->lock), NULL);
  pthread_cond_init(&(station->train_arrived_cond), NULL);
  pthread_cond_init(&(station->passengers_seated_cond), NULL);
  pthread_cond_init(&(station->train_is_full_cond), NULL);
}

