#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void draw()
{
	int max_digits = DBL_MAX_10_EXP + 2;
	int w = 1;
	for (int a = 1; a <= 49; a++)
	{
		for (int b = 1; b <= 49; b++)
		{
			if (a == b)
				continue;
			for (int c = 1; c <= 49; c++)
			{
				if ((c == b) || (c == a))
					continue;
				for (int d = 1; d <= 49; d++)
				{

					if ((c == b) || (c == a) || (d == a) || (d == c) || (d == b))
						continue;
					for (int e = 1; e <= 49; e++)
					{

						if ((c == b) || (c == a) || (d == a) || (d == c) || (d == b) || (e == a) || (e == b) || (e == c) || (e == d))
							continue;
						for (int f = 1; f <= 49; f++)
						{

							if ((c == b) || (c == a) || (d == a) || (d == c) || (d == b) || (e == a) || (e == b) || (e == c) || (e == d) || (f == a) || (f == b) || (f == c) || (f == d) || (f == e))
								continue;
							//cout << a << ", " << b << ", " << c << ", " << d << ", " << e << ", " << f << endl;

							w++;






						}


					}


				}

			}

		}



	}
	cout << w << endl;

}

int main()
{
	srand(time(NULL));
	draw();

}