#include "queue.h"

int main(){
  queue_t queue;
  queue_init(&queue);

  data_t data;
  sprintf(data.data, "hello");

  queue_insert(&queue, data);

  printf("%d\n", queue_size(&queue));

  queue_peek(&queue);

  printf("%d\n", queue_size(&queue));

  queue_removedata(&queue);

  printf("%d\n", queue_size(&queue));

  return 0;
}
