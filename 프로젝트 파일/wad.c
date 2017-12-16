#include <stdio.h>
typedef struct STATION
{
	char name[20];
	struct STATION *next;
	struct STATION *prev;
}station;

station *first; //출발역
station *last; //종착역
void init() //초기화
{


	first = (station*)malloc(sizeof(station));
	last = (station*)malloc(sizeof(station));
	strcpy(first->name, "출발역");
	strcpy(last->name, "종착역");
	first->next = last;
	last->prev = first;
	first->prev = NULL;
	last->next = NULL;


}
void insert_station(station *add) //추가
{
	add = (station*)malloc(sizeof(station));
	printf("추가할 역의 이름을 입력하세요 : ");
	scanf("%s", &add->name);
	last->prev->next = add;
	add->prev = last->prev;
	add->next = last;
	last->prev = add;


}
void del_station (char *name) // 삭제
{
	
	station *del;
	del = first;
	while (del != NULL)
	{
		if (strcmp(name, del->name) == 0)
		{
			free(del);
			printf("삭제완료\n");
		}
		del = del->next;
	}
}
void search_station() // 검색
{

}
void print() //입력
{

}

