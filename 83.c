//求0—7所能组成的奇数个数。

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int n = 0;
	int sum = 4; //sum的初始值为4表示，只有一位数字组成的奇数个数为4个
	for (n = 1; n <= 8; n++) {
		if (n == 1) { // 1 3 5 7
			printf("一共有%d位数，奇数个数为%d\n", n, 4);
		}
		else if (n == 2) {// 个位4种可能  十位：除去首位不能取0，剩下7个数都可取
			sum += 7 * 4;
			printf("一共有%d位数，奇数个数为%d\n", n, 7 * 4);
		}
		else {
			sum += 7 * (int)pow(8, n - 2) * 4;
			// pow(8,n-2)表示一共有n-2种，每种8个可能性 然后转成int类型
			printf("一共有%d位数，奇数个数为%d\n", n, 7 * (int)pow(8, n - 2) * 4);
		}
	}

	printf("奇数总数为：%d\n", sum);
	

	return 0;
}

                                                                                                         