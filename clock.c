#include <stdio.h>
#include <stdlib.h>

#define MAX_PROCESSES 10
#define MAX_EVENTS 10

void update_clock(int *local_clock, int received_clock) {
    *local_clock = (*local_clock > received_clock ? *local_clock : received_clock) + 1;
}

int main() {
    int processes, events[MAX_PROCESSES], clocks[MAX_PROCESSES] = {0};
    int send_process, send_event, receive_process, receive_event;

    printf("Enter the number of processes: ");
    scanf("%d", &processes);

    if (processes > MAX_PROCESSES) {
        printf("Maximum number of processes is %d\n", MAX_PROCESSES);
        return 1;
    }

    for (int i = 0; i < processes; i++) {
        printf("Enter the number of events in process %d: ", i + 1);
        scanf("%d", &events[i]);
        if (events[i] > MAX_EVENTS) {
            printf("Maximum events per process is %d\n", MAX_EVENTS);
            return 1;
        }
    }

    printf("\nSimulating events...\n");
    for (int i = 0; i < processes; i++) {
        for (int j = 0; j < events[i]; j++) {
            clocks[i]++;
            printf("Process %d, Event %d: Logical Clock = %d\n", i + 1, j + 1, clocks[i]);
        }
    }

    while (1) {
        printf("\nEnter the send and receive details for a message (format: sender_process sender_event receiver_process receiver_event), or -1 to stop: ");
        scanf("%d", &send_process);
        if (send_process == -1) break;
        scanf("%d %d %d", &send_event, &receive_process, &receive_event);

        send_process--;
        receive_process--;

        if (send_process < 0 || send_process >= processes || 
            receive_process < 0 || receive_process >= processes || 
            send_event < 1 || send_event > events[send_process] || 
            receive_event < 1 || receive_event > events[receive_process]) {
            printf("Invalid input! Try again.\n");
            continue;
        }

        update_clock(&clocks[receive_process], clocks[send_process]);
        printf("Message sent from Process %d, Event %d to Process %d, Event %d\n", 
                send_process + 1, send_event, receive_process + 1, receive_event);

        printf("Updated Logical Clock of Process %d: %d\n", receive_process + 1, clocks[receive_process]);
    }

    printf("\nFinal Logical Clocks:\n");
    for (int i = 0; i < processes; i++) {
        printf("Process %d: %d\n", i + 1, clocks[i]);
    }

    return 0;
}
