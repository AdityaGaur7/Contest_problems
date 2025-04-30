#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

#define MAX_PROCESSES 10

typedef struct {
    int id;
    int timestamp;
    bool requesting;
    bool in_critical_section;
} Process;

int process_count;
Process processes[MAX_PROCESSES];

void send_request(int sender_id) {
    printf("\nProcess %d is requesting to enter the Critical Section.\n", sender_id);
    processes[sender_id].requesting = true;

    for (int i = 0; i < process_count; i++) {
        if (i != sender_id) {
            printf("Process %d sends request to Process %d.\n", sender_id, i);
        }
    }
}

void receive_reply(int receiver_id) {
    printf("Process %d receives reply and can now enter the Critical Section.\n", receiver_id);
}

void enter_critical_section(int id) {
    processes[id].in_critical_section = true;
    printf("\nProcess %d enters the Critical Section.\n", id);
    sleep(2); // Simulate critical section work
    printf("Process %d exits the Critical Section.\n", id);
    processes[id].in_critical_section = false;
    processes[id].requesting = false;
}

void simulate_distributed_mutex() {
    for (int i = 0; i < process_count; i++) {
        send_request(i);

        // Reply to all processes
        for (int j = 0; j < process_count; j++) {
            if (i != j) {
                receive_reply(i);
            }
        }

        enter_critical_section(i);
    }
}

int main() {
    printf("Enter the number of processes (max %d): ", MAX_PROCESSES);
    scanf("%d", &process_count);

    if (process_count > MAX_PROCESSES) {
        printf("Maximum number of processes is %d.\n", MAX_PROCESSES);
        return 1;
    }

    // Initialize processes
    for (int i = 0; i < process_count; i++) {
        processes[i].id = i;
        processes[i].timestamp = 0;
        processes[i].requesting = false;
        processes[i].in_critical_section = false;
    }

    // Simulate Distributed Mutual Exclusion
    simulate_distributed_mutex();

    return 0;
}
