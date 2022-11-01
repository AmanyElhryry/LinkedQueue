#define MAXQUEUE 100
#define QueueEntry int
#define NULL 0

typedef struct  queuenode{
QueueEntry entry;
struct queuenode *next;
}QueueNode;

typedef struct  queue{
QueueNode *front ;
QueueNode *rear ;
int size;
}Queue ;

void CraetQueue(Queue *pq);
int AppendQueue(QueueEntry e,Queue *pq);
void ServeQueue(QueueEntry *pe,Queue *pq);
int queueEmpty(Queue *pq);

int QueueFull(Queue *pq);
int QueueSize(Queue *pq);
void ClearQueue(Queue *pq);
void TraversaQueue(Queue *pq , void (*pf)(QueueEntry));
