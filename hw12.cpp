/*
 File: hw12.cpp
 Name: Joshua Yang
 Date: 4/15/2019
 CL: CS1C 
 */

#include <iostream>
#include <string>
#include "queue.h"
using namespace std;

int main(int argc, char* argv[])
{
    cout << "======= TEST WITH QUEUE INT ==============" << endl;
    Queue<int> intQueue;
    cout << "== Six addition:" << endl;
    intQueue.enqueue(1);
    cout << "Queue: " << intQueue << endl;
    intQueue.enqueue(2);
    cout << "Queue: " << intQueue << endl;
    intQueue.enqueue(3);
    cout << "Queue: " << intQueue << endl;
    intQueue.enqueue(4);
    cout << "Queue: " << intQueue << endl;
    intQueue.enqueue(5);
    cout << "Queue: " << intQueue << endl;
    intQueue.enqueue(6);
    cout << "Queue: " << intQueue << endl;
    cout << "== Four deletions:" << endl;
    cout << intQueue.dequeue() << endl;
    cout << "Queue: " << intQueue << endl;
    cout << intQueue.dequeue() << endl;
    cout << "Queue: " << intQueue << endl;
    cout << intQueue.dequeue() << endl;
    cout << "Queue: " << intQueue << endl;
    cout << intQueue.dequeue() << endl;
    cout << "Queue: " << intQueue << endl;
    cout << "== Five addition:" << endl;
    intQueue.enqueue(10);
    cout << "Queue: " << intQueue << endl;
    intQueue.enqueue(11);
    cout << "Queue: " << intQueue << endl;
    intQueue.enqueue(12);
    cout << "Queue: " << intQueue << endl;
    intQueue.enqueue(13);
    cout << "Queue: " << intQueue << endl;
    intQueue.enqueue(14);
    cout << "Queue: " << intQueue << endl;
    intQueue.enqueue(15);
    cout << "Queue: " << intQueue << endl;
    cout << "== Three deletions:" << endl;
    cout << intQueue.dequeue() << endl;
    cout << "Queue: " << intQueue << endl;
    cout << intQueue.dequeue() << endl;
    cout << "Queue: " << intQueue << endl;
    cout << intQueue.dequeue() << endl;
    cout << "Queue: " << intQueue << endl;
    cout << "============SUMMARY================" << endl;
    cout << "Front: " << intQueue.front() << endl;
    cout << "Is full: " << intQueue.isFull() << endl;
    cout << "Is empty: " << intQueue.isEmpty() << endl;
    cout << "Test constructor copy." << endl;
    Queue<int> intQueue2(intQueue);
    cout << "Queue copy: " << intQueue2 << endl;
    cout << "Test copy assign: " << endl;
    Queue<int> intQueue3 = intQueue;
    cout << "Queue assign:" << intQueue3 << endl;

    cout << "Filling Queue" << endl;
    int adder = 100;
    while (!intQueue.isFull())
    {
        intQueue.enqueue(adder++);
    }
    cout << "Is full: " << intQueue.isFull() << endl;
    cout << "Queue: " << intQueue << endl;
    cout << "Remove all queue" << endl;
    while (!intQueue.isEmpty())
    {
        intQueue.dequeue();
    }
    cout << "Is empty: " << intQueue.isEmpty() << endl;
    cout << "Is full: " << intQueue.isFull() << endl;
    cout << "Queue: " << intQueue << endl;

    cout << "============================================================" << endl;

    cout << "======= TEST WITH QUEUE DOUBLE ==============" << endl;
    Queue<double> doubleQueue;
    cout << "== Six addition:" << endl;
    doubleQueue.enqueue(1.5);
    cout << "Queue: " << doubleQueue << endl;
    doubleQueue.enqueue(2.5);
    cout << "Queue: " << doubleQueue << endl;
    doubleQueue.enqueue(3.5);
    cout << "Queue: " << doubleQueue << endl;
    doubleQueue.enqueue(4.5);
    cout << "Queue: " << doubleQueue << endl;
    doubleQueue.enqueue(5.5);
    cout << "Queue: " << doubleQueue << endl;
    doubleQueue.enqueue(6.5);
    cout << "Queue: " << doubleQueue << endl;
    cout << "== Four deletions:" << endl;
    cout << doubleQueue.dequeue() << endl;
    cout << "Queue: " << doubleQueue << endl;
    cout << doubleQueue.dequeue() << endl;
    cout << "Queue: " << doubleQueue << endl;
    cout << doubleQueue.dequeue() << endl;
    cout << "Queue: " << doubleQueue << endl;
    cout << doubleQueue.dequeue() << endl;
    cout << "Queue: " << doubleQueue << endl;
    cout << "== Five addition:" << endl;
    doubleQueue.enqueue(10.5);
    cout << "Queue: " << doubleQueue << endl;
    doubleQueue.enqueue(11.5);
    cout << "Queue: " << doubleQueue << endl;
    doubleQueue.enqueue(12.5);
    cout << "Queue: " << doubleQueue << endl;
    doubleQueue.enqueue(13.5);
    cout << "Queue: " << doubleQueue << endl;
    doubleQueue.enqueue(14.5);
    cout << "Queue: " << doubleQueue << endl;
    doubleQueue.enqueue(15.5);
    cout << "Queue: " << doubleQueue << endl;
    cout << "== Three deletions:" << endl;
    cout << doubleQueue.dequeue() << endl;
    cout << "Queue: " << doubleQueue << endl;
    cout << doubleQueue.dequeue() << endl;
    cout << "Queue: " << doubleQueue << endl;
    cout << doubleQueue.dequeue() << endl;
    cout << "Queue: " << doubleQueue << endl;
    cout << "============SUMMARY================" << endl;
    cout << "Front: " << doubleQueue.front() << endl;
    cout << "Is full: " << doubleQueue.isFull() << endl;
    cout << "Is empty: " << doubleQueue.isEmpty() << endl;
    cout << "Test constructor copy." << endl;
    Queue<double> doubleQueue2(doubleQueue);
    cout << "Queue copy: " << doubleQueue2 << endl;
    cout << "Test copy assign: " << endl;
    Queue<double> doubleQueue3 = doubleQueue;
    cout << "Queue assign:" << doubleQueue3 << endl;
    cout << "Filling Queue" << endl;
    double adderDouble = 100.5;
    while (!doubleQueue.isFull())
    {
        doubleQueue.enqueue(adderDouble++);
    }
    cout << "Is empty: " << doubleQueue.isEmpty() << endl;
    cout << "Is full: " << doubleQueue.isFull() << endl;
    cout << "Queue: " << doubleQueue << endl;
    cout << "Remove all queue" << endl;
    while (!doubleQueue.isEmpty())
    {
        doubleQueue.dequeue();
    }
    cout << "Is empty: " << doubleQueue.isEmpty() << endl;
    cout << "Is full: " << doubleQueue.isFull() << endl;
    cout << "Queue: " << doubleQueue << endl;
    cout << "============================================================" << endl;

    cout << "======= TEST WITH QUEUE STRING ==============" << endl;
    Queue<string> stringQueue(10);
    cout << "== Six addition:" << endl;
    stringQueue.enqueue("one");
    cout << "Queue: " << stringQueue << endl;
    stringQueue.enqueue("two");
    cout << "Queue: " << stringQueue << endl;
    stringQueue.enqueue("three");
    cout << "Queue: " << stringQueue << endl;
    stringQueue.enqueue("four");
    cout << "Queue: " << stringQueue << endl;
    stringQueue.enqueue("five");
    cout << "Queue: " << stringQueue << endl;
    stringQueue.enqueue("six");
    cout << "Queue: " << stringQueue << endl;
    cout << "== Four deletions:" << endl;
    cout << stringQueue.dequeue() << endl;
    cout << "Queue: " << stringQueue << endl;
    cout << stringQueue.dequeue() << endl;
    cout << "Queue: " << stringQueue << endl;
    cout << stringQueue.dequeue() << endl;
    cout << "Queue: " << stringQueue << endl;
    cout << stringQueue.dequeue() << endl;
    cout << "Queue: " << stringQueue << endl;
    cout << "============SUMMARY================" << endl;
    cout << "Front: " << stringQueue.front() << endl;
    cout << "Is full: " << stringQueue.isFull() << endl;
    cout << "Is empty: " << stringQueue.isEmpty() << endl;
    cout << "Test constructor copy." << endl;
    Queue<string> stringQueue2(stringQueue);
    cout << "Queue copy: " << stringQueue2 << endl;
    cout << "Test copy assign: " << endl;
    Queue<string> stringQueue3 = stringQueue;
    cout << "Queue assign:" << stringQueue3 << endl;
    cout << "Remove all queue" << endl;
    while (!stringQueue.isEmpty())
    {
        stringQueue.dequeue();
    }
    cout << "Is empty: " << stringQueue.isEmpty() << endl;
    cout << "Is full: " << stringQueue.isFull() << endl;
    cout << "Queue: " << stringQueue << endl;

    return 0;
}
