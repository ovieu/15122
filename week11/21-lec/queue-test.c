#include <stdio.h>
#include <assert.h>
#include "queue.h"
#include "lib/contracts.h"
#include "lib/xalloc.h"


void test() {
  // tests for Queue_new();
  Queue q = Queue_new();
  printf("Queue_new() passes tests\n");

  // tests for Queue_insert()
  Queue_insert(q, "Hello");
  assert(q->len == 1);

  Queue_insert(q, "World");
  assert(q->len == 2);

  printf("Queue_insert() passes tests\n");

  //  size_t len = q->len;
  Queue_elem * elems = Queue_dealloc(q);
  free(elems);
  /*
  for (size_t i = 0; i < len; i++) {
    free(elems[i]);
  }
  */
  printf("Queue_dealloc() passes tests\n");

  return;
}

int main() {
  test();
  return 0;
}
