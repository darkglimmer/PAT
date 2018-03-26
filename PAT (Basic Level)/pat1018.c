#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    char m, n;
    int a = 0, b = 0, c = 0;
    int m_C_win = 0, m_J_win = 0, m_B_win = 0;
    int n_C_win = 0, n_J_win = 0, n_B_win = 0;
    while (N--) {
        getchar();
        scanf("%c %c", &m, &n);
        if (m == n) {
            b++;
        }
        if (m == 'C' && n == 'J') {
            a++;
            m_C_win++;
        }
        if (m == 'J' && n == 'B') {
            a++;
            m_J_win++;
        }
        if (m == 'B' && n == 'C') {
            a++;
            m_B_win++;
        }
        if (n == 'B' && m == 'C') {
            c++;
            n_B_win++;
        }
        if (n == 'C' && m == 'J') {
            c++;
            n_C_win++;
        }
        if (n == 'J' && m == 'B') {
            c++;
            n_J_win++;
        }
    }
    printf("%d %d %d\n", a, b, c);
    printf("%d %d %d\n", c, b, a);
    char m_max = 'B';
    char n_max = 'B';
    if(m_C_win >= m_J_win && m_C_win > m_B_win){
        m_max = 'C';
    }
    if(m_J_win > m_C_win && m_J_win > m_B_win) {
        m_max = 'J';
    }
    if(n_C_win >= n_J_win && n_C_win > n_B_win) {
        n_max = 'C';
    }
    if(n_J_win >= n_C_win && n_J_win > n_B_win){
        n_max= 'J';
    }
    printf("%c %c",m_max,n_max);
    return 0;
}

