#include "common.h"

#define MAX   256

struct data_t{
  char data[1024];
  // Your data structure here
};
typedef struct data_t data_t;

struct queue_t{
  data_t data_array[MAX];
  int front;
  int rear;
  int ncount;
};
typedef struct queue_t queue_t;

data_t queue_peek(queue_t* queue);

bool queue_isempty(queue_t* queue);

bool queue_isfull(queue_t* queue);

int queue_size(queue_t* queue);

void queue_insert(queue_t* queue, data_t data);

int queue_init(queue_t* queue);

int queue_free(queue_t* queue);

data_t queue_removedata(queue_t* queue);
