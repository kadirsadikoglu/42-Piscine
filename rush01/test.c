#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	table(int (*sudokutable)[4])
{
	int	x;
	int	y;
	int	n;

	n = 4;
	x = 0;
	y = 0;

	while (x < n)
	{
		y = 0;
		while (y < n)
		{
			sudokutable[x][y] = 0;
			y++;
		}
		x++;
	}
}

void	sudoku_shape(int (*sudokutable)[4])
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	write(1, " \n - - - - - - - - -\n", 21);
	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			write(1, " | ", 3);
			ft_putchar(sudokutable[x][y] + 48);
			y++;
		}
		write(1, " |\n - - - - - - - - -\n", 22);
		x++;
	}
	write(1, "\n", 1);
}


int	main(void)
{
	int	sudokutab[4][4];
	int numbers[] = {4, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};

	table(sudokutab);
	sudoku_shape(sudokutab);

	return (0);
}
