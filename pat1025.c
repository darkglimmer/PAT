#include <stdio.h>

int main() {
    int addr, data[100005], next[100005];
    int addr_list[100005], final_addr[100005];
    int firstAddr, N, k;
    int i, count = 0;
    scanf("%d%d%d", &firstAddr, &N, &k);
    for (i = 0; i < N; i++) {
        scanf("%d%d%d", &addr,&data[addr], &next[addr]);
    }
    while (firstAddr != -1) {
        addr_list[count] = firstAddr;
        final_addr[count] = firstAddr;
        firstAddr = next[firstAddr];
        count++;
    }
    for (i = 0; i < count - count % k; i++) {
        final_addr[i] = addr_list[(i / k) * k + k - i % k - 1];
    }
    for (i = 0; i < count - 1; i++)
        printf("%05d %d %05d\n", final_addr[i], data[final_addr[i]], final_addr[i + 1]);
    printf("%05d %d %d\n", final_addr[count - 1], data[final_addr[count - 1]], next[final_addr[count - 1]]);
    return 0;
}
