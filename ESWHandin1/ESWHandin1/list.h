#include <cstdint>


typedef enum {
	Ok
	,Empty
	,NOT_FOUND
	,NUL
	,ERROR

}linkedList_return_codes_t;


typedef struct linkedList *linkedList_t;
typedef struct linkedList_node* linkedList_iterator_t;



linkedList_t linkedList_create();
//void destroy(linkedList_t self);
linkedList_return_codes_t linkedListpush(linkedList_t list, void* item);
void *linkedList_pull(linkedList_t list);
void* linkedList_peekItemByIndex(linkedList_t list, uint16_t index);
linkedList_return_codes_t linkedList_containsItem(linkedList_t list, void* item);
int linkedList_length(linkedList_t list);
void linkedList_clear(linkedList_t list);
linkedList_return_codes_t linkedList_removeItem(linkedList_t list, void* item);
linkedList_iterator_t linkedList_getIterator(linkedList_t list);
void* linkedList_iteratorNext(linkedList_t list, linkedList_iterator_t* iterator);
