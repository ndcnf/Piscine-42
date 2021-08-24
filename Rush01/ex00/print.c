#include <stdio.h>
#include <unistd.h>

void    ft_printboard(int **board)
{
    int	x;
	int	y;

	x = 0;
	y = 0;
    while (y < 4)
	{
		while (x < 4)
		{
			printf("%d", board[y][x]);
            if (x <= 2)
                //write(1, " ", 1);
                printf(" ");
			if (x == 3)
				//write(1, "\n", 1);
                printf("\n");
			x++;
		}
		x = 0;
		y++;
	}
}