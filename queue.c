#include "queue.h"

data_t queue_peek(queue_t* queue)
{
  return queue->data_array[queue->front];
}

bool queue_isempty(queue_t* queue)
{
  return queue->ncount == 0;
}

bool queue_isfull(queue_t* queue)
{
  return queue->ncount == MAX;
}

int queue_size(queue_t* queue)
{
  return queue->ncount;
}

void queue_insert(queue_t* queue, data_t data)
{
   if(!queue_isfull(queue)) {
      if(queue->rear == MAX-1) {
         queue->rear = -1;
      }
      queue->data_array[++queue->rear] = data;
      queue->ncount++;
   }
}

data_t queue_removedata(queue_t* queue)
{
  data_t data = queue->data_array[queue->front++];
  if(queue->front == MAX) {
    queue->front = 0;
  }
  queue->ncount--;
  return data;
}

int queue_init(queue_t* queue)
{
  if (queue == NULL) return -1;
  memset(queue, 0, sizeof(queue_t));
  queue->rear = -1;
  queue->front = 0;
  queue->ncount = 0;
  return 0;
}

int queue_free(queue_t* queue)
{
  if (queue == NULL) return -1;
  memset(queue, 0, sizeof(queue_t));
  return 0;
}
