#include <stdio.h>
#include <stdlib.h>

#define n 8

int count = 0;
int in = 0;
int out = 0;
int buffer[n];

void Produce_item(int *itemP) {
    (*itemP)++;
}

int Consume_item() {
    return buffer[out];
}

void Consume(int itemC) {
    printf("Consumed: %d\n", itemC);
    out = (out + 1) % n;
    count--;
}

void Produce(int itemP) {
    buffer[in] = itemP;
    in = (in + 1) % n;
    count++;
}

void producer() {
    int itemP = 0;

    while (1) {
        Produce_item(&itemP);

        while (count == n)
            ; // Busy-wait until a slot is available

        Produce(itemP);
    }
}

void consumer() {
    int itemC;

    while (1) {
        while (count == 0)
            ; // Busy-wait until an item is available

        itemC = Consume_item();
        Consume(itemC);
    }
}

int main() {
    producer();
    consumer();

    return 0;
}
