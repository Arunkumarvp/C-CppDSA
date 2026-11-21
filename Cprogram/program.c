#include <stdio.h>

int main(void)
{
    int ipddr[4];

    printf("Enter the IP address (4 octets): ");
    for (int i = 0; i < 4; i++) {
        if (scanf("%d", &ipddr[i]) != 1) {
            fprintf(stderr, "Invalid IP address.\n");
            return 1;
        }
    }

    printf("IP address: %d.%d.%d.%d\n",
           ipddr[0], ipddr[1], ipddr[2], ipddr[3]);
    return 0;
}Unable to load your organization's managed settings. Please try again. Request managedSettings.resolve failed with message: Failed to fetch Copilot user info: 401 Unauthorized: {"message":"Bad credentials"}