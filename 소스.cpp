#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

int main() {
	int x, y, w, h;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	int min = 1000;
	if (min > x) {
		min = x;;
	}
	if (min > y) {
		min = y;
	}
	if (min > (w-x)) {
		min = w - x;
	}
	if (min > (h-y)) {
		min = h - y;
	}
	printf("%d", min);
}

/*int main() 
{	

	char input[100];
	scanf("%s", input);
	for (int i = 0;i < strlen(input);i++) {
		if (int(input[i] - 3) >= int('A'))
			printf("%c", input[i] -	 3);
		else
		{
			printf("%c", input[i] + 26 - 3);
		}
	}
}*/

/*struct Person
{
	char name[20];
	int age;
	char address[100];
} ;

int main()
{
	struct Person p1;     // 구조체 변수 선언

	// 점으로 구조체 멤버에 접근하여 값 할당
	strcpy(p1.name, "홍길동");
	p1.age = 30;
	strcpy(p1.address, "서울시 용산구 한남동");

	// 점으로 구조체 멤버에 접근하여 값 출력
	printf("이름: %s\n", p1.name);       // 이름: 홍길동
	printf("나이: %d\n", p1.age);        // 나이: 30
	printf("주소: %s\n", p1.address);    // 주소: 서울시 용산구 한남동

	return 0;
}*/

/*int main()
{
	int pre;
	char mid[30];
	int back;
	scanf("%d", &pre);
	scanf("%s", mid);
	scanf("%d", &back);
	if (!strcmp(mid, "더하기")) {
		printf("%d", pre + back);
	}
	else if (!strcmp(mid, "빼기")) {
		printf("%d",pre - back);
	}
	else if (!strcmp(mid, "곱하기")) {
		printf("%d", pre * back);
	}
	else if (!strcmp(mid, "나누기")) {
		printf("%d\n", pre / back);
		printf("%s %d", "나머지", pre % back);
	}
	return 0;

}*/

/*int main() 
{
	char s1[30] = "The Little Prince";
	char arr[100][100];
	char* ptr = strtok(s1, " ");
	int count = 0;
	while (ptr != NULL)
	{
		printf("%s\n", ptr);
		ptr = strtok(NULL, " ");
		count++;
	}
	for (int i = 0;i < 3;i++) {
		printf("%s\n", arr[i]);
	}

	return 0;

}*/

/*int main(){
int result[3][3] = { {0,0},{0,0} };
int num1[3][3] = { {1,2},{3,4} };
int num2[3][3] = { {0,1},{1,0} };

for (int i = 0;i < 2;i++) {
	for (int j = 0;j < 2;j++) {
		for (int k = 0;k < 2;k++) {
			result[i][j] += num1[i][k] * num2[k][j];
		}
	}
}
for (int i = 0;i < 2;i++) {
	for (int j = 0;j < 2;j++) {
		printf("%d", result[i][j]);

	}
	printf("\n");
}
	
}



/*int f(int n) {
	if (n == 1) {
		return 1;
	}
	
	return f(n - 1)*n;
}

int main() {
	int num = 5;

	printf("%d", f(num));
}*/

/*int main()
{
	int num = 6;
	int arr[10000] = { 0,1 };
	for (int i = 0;i < num;i++) {
		if (i == 0 || i == 1) {
			arr[i] = 1;
		}
		else
		{
			arr[i] = arr[i - 1] + arr[i - 2];
		}

	}
	printf("%d", arr[num - 1]);
}*/

/*void hello(int count) {
	if (count == 0)
		return;
	
	printf("Hello, word! %d\n", count);

	hello(--count);

}

int main() {
	hello(5);

	return 0;
}*/

/*#define swap(x,y,t) ((t)=(x)),(x)=(y),(y)=(t))

void print_list(int list[], int n) {

	int i;
	for (i = 0;i < n;i++) {
		printf("%d ", list[i]);
	}
	printf("\n");
}


void selection_sort(int list[], int n)
{
	int i, j, least, temp;
	for (i = 0;i < n - 1;i++) {
		least = i;
		for (j = i + 1;j < n;j++)
		{
			if (list[j] < list[least])
			{
				least = j;
			}
		}
		temp = list[i];
		list[i] = list[least];
		list[least] = temp;
		print_list(list, n);
	}
}

int list[100] = {2,5,1,4,5,2};
int n = 6;

int main() {
	selection_sort(list, n);
}*/

/*int main() {
	int list[1000] = { 100,30,6,25,4 };
	int n = 5;
	for (int i = 0;i < n;i++) 
	{
		for (int j = 0;j < n;j++) {
			if (list[i] > list[j] && (i <= j)) {
				int temp = list[i];
				list[i] = list[j];
				list[j] = temp;
			}
		}
		for (int k = 0;k < n;k++) 
		{
			printf("%d ",list[k]);

		}
		printf("\n");
	}
}*/