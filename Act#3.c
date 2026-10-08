#include <stdio.h>

int main()
{
    char seats[4][5] = {
        {'O', 'O', 'O', 'X', 'O'},
        {'O', 'O', 'X', 'O', 'O'},
        {'O', 'O', 'O', 'X', 'O'},
        {'O', 'X', 'O', 'O', 'O'}
    };

    int choice;
    int row, col;
    char letter;

    do
    {
        printf("\n====== AIRPORT SEAT RESERVATION ======\n");
        printf("1. Book a Seat\n");
        printf("2. Cancel Booking\n");
        printf("3. View Seats\n");
        printf("4. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nEnter row (A-D): ");
                scanf(" %c", &letter);

                printf("Enter seat number (1-5): ");
                scanf("%d", &col);

                row = letter - 'A';
                col = col - 1;

                switch(seats[row][col])
                {
                    case 'O':
                        seats[row][col] = 'X';
                        printf("\nSeat successfully booked!\n");
                        break;

                    case 'X':
                        printf("\nSeat is already reserved!\n");
                        break;
                }
                break;

            case 2:
                printf("\nEnter row (A-D): ");
                scanf(" %c", &letter);

                printf("Enter seat number (1-5): ");
                scanf("%d", &col);

                row = letter - 'A';
                col = col - 1;

                switch(seats[row][col])
                {
                    case 'X':
                        seats[row][col] = 'O';
                        printf("\nBooking successfully cancelled!\n");
                        break;

                    case 'O':
                        printf("\nSeat is not reserved!\n");
                        break;
                }
                break;

            case 3:
                printf("\n   1   2   3   4   5\n\n");

                printf("A  [%c] [%c] [%c] [%c] [%c]\n\n",
                       seats[0][0], seats[0][1], seats[0][2],
                       seats[0][3], seats[0][4]);

                printf("B  [%c] [%c] [%c] [%c] [%c]\n\n",
                       seats[1][0], seats[1][1], seats[1][2],
                       seats[1][3], seats[1][4]);

                printf("C  [%c] [%c] [%c] [%c] [%c]\n\n",
                       seats[2][0], seats[2][1], seats[2][2],
                       seats[2][3], seats[2][4]);

                printf("D  [%c] [%c] [%c] [%c] [%c]\n\n",
                       seats[3][0], seats[3][1], seats[3][2],
                       seats[3][3], seats[3][4]);
                break;

            case 4:
                printf("\nThank you!\n");
                break;

            default:
                printf("\nInvalid choice!\n");
        }

    } while(choice != 4);

    return 0;
}
