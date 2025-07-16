#include <stdio.h>

int main(){

int n, m, tmp, nums[1000], diff;

scanf(" %d %d", &n, &m);

for(int i = 0; i < m; i++){
	scanf(" %d", &nums[i]);
}

for(int i = 0; i < m - 1; i++){
	for(int j = 0; j < m - i - 1; j++ )
		if(nums[j] > nums[j + 1]){
			tmp = nums[j];
			nums[j] = nums[j + 1];
			nums[j + 1] = tmp;
		}
}

diff = nums[n - 1] - nums[0];

for(int i = 1; i <= m - n; i++){
    if(nums[i + n - 1] - nums[i] < diff)
        diff = nums[i + n - 1] - nums[i];
}

printf("%d", diff);

	return 0;
}