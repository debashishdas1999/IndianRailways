#include <pthread.h>

struct station {
  int out_passengers; // in station waiting passengers
  int in_passengers; // in train passengers 
  pthread_mutex_t lock;
  pthread_cond_t train_arrived_cond;
  pthread_cond_t passengers_seated_cond;
  pthread_cond_t train_is_full_cond;
};

void station_init(struct station *station);


