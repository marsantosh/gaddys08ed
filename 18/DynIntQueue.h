// DynIntQueue.h
#ifndef DYNINTQUEUE_H
#define DYNINTQUEUE_H


class DynIntQueue {
    private:
        class QueueNode {
            friend class DynIntQueue;
            int value;
            QueueNode *next;
            QueueNode(int value1, QueueNode *next1 = NULL) {
                value = value1;
                next = next1;
            }
        };
        // these track the front and rear of the queue
        QueueNode *front;
        QueueNode *rear;
    public:
        // constructor and destructor
        DynIntQueue();
        ~DynIntQueue();

        // member functions
        void enqueue(int);
        void dequeue(int &);
        bool isEmpty() const;
        void clear();
};
#endif

