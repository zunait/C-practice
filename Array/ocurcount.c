#include <stdio.h>

int main() {
    int arr[50] = {
        12, 3, 7, 12, 19, 5, 3, 8, 14, 7,
        9, 5, 3, 14, 6, 17, 20, 8, 12, 10,
        1, 4, 6, 11, 3, 14, 9, 5, 12, 17,
        19, 2, 8, 3, 5, 6, 13, 18, 12, 9,
        3, 6, 14, 12, 5, 20, 1, 3, 6, 10
    };

    int visited[50] = {0}; // Keeps track of which elements are already counted

    for (int i = 0; i < 50; i++) {
        if (visited[i] == 1)
            continue;

        int count = 1;

        for (int j = i + 1; j < 50; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1;  // Mark as visited
            }
        }
        if(count>1){

            printf("%d occurs %d times\n", arr[i], count);
        }else{
            printf("%d occurs only %d time\n", arr[i], count);
        }
    }

    return 0;
}
