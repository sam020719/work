#include <stdio.h>
typedef struct STATION
{
	char name[20];
	struct STATION *next;
	struct STATION *prev;
}station;

station *first; //��߿�
station *last; //������
void init() //�ʱ�ȭ
{


	first = (station*)malloc(sizeof(station));
	last = (station*)malloc(sizeof(station));
	strcpy(first->name, "��߿�");
	strcpy(last->name, "������");
	first->next = last;
	last->prev = first;
	first->prev = NULL;
	last->next = NULL;


}
void insert_station(station *add) //�߰�
{
	add = (station*)malloc(sizeof(station));
	printf("�߰��� ���� �̸��� �Է��ϼ��� : ");
	scanf("%s", &add->name);
	last->prev->next = add;
	add->prev = last->prev;
	add->next = last;
	last->prev = add;


}
void del_station (char *name) // ����
{
	
	station *del;
	del = first;
	while (del != NULL)
	{
		if (strcmp(name, del->name) == 0)
		{
			free(del);
			printf("�����Ϸ�\n");
		}
		del = del->next;
	}
}
void search_station() // �˻�
{

}
void print() //�Է�
{

}

