#include <stdio.h>

void towerOfHanoi(int n, char source_rod, char destination_rod, char temp_rod) {
    if (n == 1) {
        printf("Move disk 1 from rod %c to rod %c\n", source_rod, destination_rod);
        return;
    }
    towerOfHanoi(n - 1, source_rod, temp_rod, destination_rod);
    printf("Move disk %d from rod %c to rod %c\n", n, source_rod, destination_rod);
    towerOfHanoi(n - 1, temp_rod, destination_rod, source_rod);
}

int main() {
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);
    printf("The sequence of moves involved in the Tower of Hanoi are:\n");
    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}
