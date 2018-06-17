#pragma once
#ifndef HEADER_H
#define HEADER_H
#define WALL 0//ǽ
#define KONG 1//�ذ�
#define GREENSLM 2//��ʷ��ķ
#define REDSLM 3//��ʷ��ķ
#define BLUECRYSTAL 4//��ˮ��
#define REDCRYSTAL 5//��ˮ��
#define BLUEKEY 6//��Կ��
#define YELLOWKEY 7//��Կ��
#define REDMED 8// С��ҩˮ
#define UP 9//��¥����
#define BAT 10//С����
#define WIZZARD 11//С��ʦ
#define KULOU 12//���ñ�
#define BIGKULOU 13//�����ñ�
#define BLUEMED 14//С��ҩˮ
#define DOWN 15//��¥����
#define BLUEDOOR 16//����
#define YELLOWDOOR 17//����
#define MAN 18//����
#define SWORD 19//����
#define SHIELD 20//��
#define BOOK 21//ͼ��
#define INFO 22//��Ϣ
#define REDDOOR 23//����
#define REDKEY 24//��Կ��
#define STAR 25//����
#define MAGMA 26//�ҽ�
#define SOLDIER 27//�� 
#define BLACKSOLDIER 28//�ڱ�
#define KEY_SHOP 29//Կ���̵�
#define SHOP 30//�����̵�
#define UPLEFT 31//����
#define UPMID 32//����
#define UPRIGHT 33//����
#define MIDLEFT 34//����
#define MIDMID 35//����
#define MIDRIGHT 36//����
#define DOWNLEFT 37//����
#define DOWNMID 38//����
#define DOWNRIGHT 39//����
#define PRINCESS 40//����


IMAGE WAL, FLOO,GREENSL , REDSL,
BLUECRYSTA, REDCRYSTA, BLUEKE, YELLOWKE, REDME, U, DOW,INF,
BA, WIZZAR, KULO, BIGKULO, PRINCES, SHIE, SWOR, REDDOO,REDKE, BOO,
BLUEME,BLUEDOO,YELLOWDOO, MA, SOLDIE,BLACKSOLDIE,KEY_SHO,SHO,MAGM,STA,
UL, UR, UM, ML, MM, MR, DL, DM, DR;

int xx, yy, zz;//���ǵ�ǰ����
int hp, attack, defend,hpmax;//���ǵ�ǰ����
int key_y , key_b,key_r;//Կ������
int money;//Ǯ
int key_y_price , key_b_price , key_r_price ;
int map[13][13][13];
int station[2][12] = { {11,11,2,10,11,10,2,2,2,10,10,11},{6,6,1,11,2,11,6,6,1,6,6,2}};
FILE *fp;//�浵�ļ�ָ��
errno_t err;

struct warrior {
	char name[20];
	int hp;
	int defend;
	int attack;
	int money;
}player;
struct warrior monster_[8];
int map1[13][13] = {
	{ 1,1,1,1,1,1,1,1,1,1,1,1,1 },
{ 1,1,1,1,1,1,1,1,1,1,1,1,1 },
{ 25,25,25,1,1,25,1,1,1,25,25,25,1 },
{ 1,25,1,1,25,25,25,1,1,25,1,25,1 },
{ 1,25,1,1,25,25,25,1,1,25,1,25,1 },
{ 1,25,1,25,1,1,1,25,1,25,1,25,1 },
{ 1,25,1,25,1,1,1,25,1,25,25,25,1 },
{ 1,25,1,25,25,25,25,25,1,25,25,25,1 },
{ 1,25,1,25,1,1,1,25,1,1,1,1,25 },
{ 1,25,1,25,1,1,1,25,1,1,1,1,25 },
{ 1,1,1,1,1,1,1,1,1,1,1,1,1 },
{ 1,1,1,1,1,1,18,1,1,1,1,1,1 },
{ 1,1,1,1,1,1,9,1,1,1,1,1,1 }
};//11   6   
int map2[13][13] = {
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
{ 0, 9, 1, 2, 3, 2, 1, 1, 1, 1, 1, 1, 0 },
{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 },
{ 0, 8, 1, 1, 17, 1, 0, 5, 7, 1, 0, 1, 0 },
{ 0, 1, 12, 1, 0, 1, 0, 4, 8, 1, 0, 1, 0 },
{ 0, 0, 17, 0, 0, 1, 0, 0, 0, 17, 0, 1, 0 },
{ 0, 6, 1, 1, 0, 1, 17, 10, 11, 10, 0, 1, 0 },
{ 0, 1, 13, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0 },
{ 0, 0, 17, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0 },
{ 0, 1, 1, 1, 0, 0, 17, 0, 0, 0, 17, 0, 0 },
{ 0, 8, 1, 7, 0, 7, 1, 7, 0, 1, 10, 1, 0 },
{ 0, 8, 1, 7, 0, 7, 18, 7, 0, 2, 14, 2, 0 },
{ 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0 }
};//11  6  1   2
int map3[13][13] = {
	{ 0,0,0,0,0,0,0,0,0,0,0,0,0 },
{ 0,15,0,7,7,0,1,11,1,7,2,1,0 },
{ 0,18,0,7,7,0,1,0,0,0,0,17,0 },
{ 0,10,0,0,3,0,1,0,8,1,12,1,0 },
{ 0,1,17,17,1,17,1,0,29,1,1,10,0 },
{ 0,1,0,0,0,0,1,0,0,0,0,0,0 },
{ 0,1,1,3,11,1,7,1,12,13,1,1,0 },
{ 0,0,0,0,0,0,1,0,0,0,0,1,0 },
{ 0,11,1,1,30,0,1,17,17,1,17,1,0 },
{ 0,1,10,1,6,0,1,0,0,3,0,3,0 },
{ 0,17,0,0,0,0,1,0,1,1,0,1,0 },
{ 0,1,2,1,1,12,1,0,8,8,0,9,0 },
{ 0,0,0,0,0,0,0,0,0,0,0,0,0 }
};//2  1   10   11
int map4[13][13] = {
	{ 0,0,0,0,0,0,0,0,0,0,0,0,0 },
{ 0,9,0,5,0,1,29,1,0,7,0,2,0 },
{ 0,1,0,8,0,1,1,1,0,7,0,3,0 },
{ 0,1,0,10,0,3,0,13,0,8,0,2,0 },
{ 0,1,0,1,0,1,0,1,0,1,0,1,0 },
{ 0,17,0,17,0,16,0,17,0,12,0,17,0 },
{ 0,13,1,1,11,1,1,1,1,1,1,1,0 },
{ 0,17,0,17,0,17,0,17,0,13,0,17,0 },
{ 0,1,0,1,0,1,0,1,0,1,0,1,0 },
{ 0,1,0,1,0,10,0,3,0,14,0,1,0 },
{ 0,2,0,2,0,7,0,11,0,7,0,18,0 },
{ 0,1,3,1,0,7,0,14,0,7,0,15,0 },
{ 0,0,0,0,0,0,0,0,0,0,0,0,0 }
};//  10  11     2  1
int map5[13][13] = {
	{ 0,0,0,0,0,0,0,0,0,0,0,0,0 },
{ 0,26,26,26,26,26,26,26,26,26,26,26,0 },
{ 0,26,26,26,26,26,26,26,26,26,26,26,0 },
{ 0,26,26,26,26,0,0,0,26,26,26,26,0 },
{ 0,26,26,26,0,0,0,0,0,26,26,26,0 },
{ 0,26,26,26,0,0,19,0,0,26,26,26,0 },
{ 0,26,26,26,0,0,26,0,0,26,26,26,0 },
{ 0,26,26,26,26,0,26,0,26,26,26,26,0 },
{ 0,26,26,26,26,26,26,26,26,26,26,26,0 },
{ 0,26,26,26,26,26,26,26,26,26,26,26,0 },
{ 0,0,0,0,0,0,17,0,0,0,0,0,0 },
{ 0,15,18,1,1,1,1,1,1,1,1,9,0 },
{ 0,0,0,0,0,0,0,0,0,0,0,0,0 }
};// 11  2   11  10
int map6[13][13] = {
	{ 0,0,0,0,0,0,0,0,0,0,0,0,0 },
{ 0,13,0,13,0,4,7,8,0,7,7,7,0 },
{ 0,1,13,1,0,3,0,13,0,1,1,7,0 },
{ 0,0,1,1,0,1,0,1,0,0,17,0,0 },
{ 0,0,16,0,0,16,0,17,0,1,13,1,0 },
{ 0,8,1,1,10,1,27,1,10,1,1,1,0 },
{ 0,1,3,1,0,0,17,0,0,8,1,12,0 },
{ 0,17,0,17,0,1,1,1,0,0,0,17,0 },
{ 0,1,0,1,12,1,17,0,3,1,3,1,0 },
{ 0,11,0,11,0,0,0,0,0,17,0,0,0 },
{ 0,1,0,1,0,8,1,1,0,1,1,18,0 },
{ 0,6,0,1,17,1,9,1,0,1,1,15,0 },
{ 0,0,0,0,0,0,0,0,0,0,0,0,0 }
};// 10  11    11  5
int map7[13][13] = {
{ 0,0,0,0,0,0,0,0,0,0,0,0,0 },
{ 0,7,10,1,0,1,15,1,0,1,1,10,0 },
{ 0,7,11,1,17,1,18,1,17,3,1,1,0 },
{ 0,7,10,1,0,12,1,7,0,1,1,8,0 },
{ 0,0,0,0,0,0,16,0,0,0,17,0,0 },
{ 0,5,7,1,0,1,8,1,0,1,12,1,0 },
{ 0,8,1,27,17,1,13,1,0,1,1,1,0 },
{ 0,4,7,1,0,1,1,7,0,10,1,6,0 },
{ 0,0,0,0,0,0,17,0,0,0,17,0,0 },
{ 0,1,3,1,0,10,1,10,0,1,11,1,0 },
{ 0,1,1,1,17,1,1,1,17,1,0,0,0 },
{ 0,30,1,1,0,1,9,1,0,28,0,0,0 },
{ 0,0,0,0,0,0,0,0,0,0,0,0,0 }
};//2   6 11 5
int map8[13][13] = {
{ 0,0,0,0,0,0,0,0,0,0,0,0,0 },
{ 0,9,1,1,16,1,15,1,17,11,1,7,0 },
{ 0,1,1,30,0,1,18,1,0,1,3,7,0 },
{ 0,17,0,0,0,0,0,0,0,1,1,6,0 },
{ 0,1,8,1,17,13,1,13,17,12,1,7,0 },
{ 0,27,1,27,0,1,1,1,0,1,10,7,0 },
{ 0,0,0,0,0,0,16,0,0,0,0,0,0 },
{ 0,1,12,1,1,1,1,1,1,1,27,1,0 },
{ 0,17,0,0,17,0,0,0,17,0,0,17,0 },
{ 0,11,1,0,10,10,0,3,3,0,1,11,0 },
{ 0,1,7,0,10,10,0,3,3,0,7,1,0 },
{ 0,8,5,0,1,7,0,7,1,0,4,8,0 },
{ 0,0,0,0,0,0,0,0,0,0,0,0,0 }
};//  2   6  1   2
int map9[13][13] = {
	{ 0,0,0,0,0,0,0,0,0,0,0,0,0 },
{ 0,15,1,0,8,1,11,1,6,0,7,5,0 },
{ 0,18,1,0,1,1,0,1,1,0,10,1,0 },
{ 0,17,0,0,13,0,0,0,13,0,17,0,0 },
{ 0,10,1,0,1,1,0,1,1,0,1,1,0 },
{ 0,1,1,0,7,1,0,1,7,0,3,3,0 },
{ 0,17,0,0,1,27,1,27,1,0,1,1,0 },
{ 0,10,1,0,0,0,16,0,0,0,0,17,0 },
{ 0,1,1,3,1,1,1,1,13,1,1,12,0 },
{ 0,17,0,0,0,0,13,0,0,8,7,1,0 },
{ 0,1,0,1,17,7,1,7,0,0,0,10,0 },
{ 0,3,1,10,0,1,9,1,17,1,10,1,0 },
{ 0,0,0,0,0,0,0,0,0,0,0,0,0 }
};// 2   1   11    5
int map10[13][13] = {
	{ 0,0,0,0,0,0,0,0,0,0,0,0,0 },
{ 0,1,1,1,1,1,9,1,1,1,1,1,0 },
{ 0,0,0,0,0,1,1,1,0,0,0,0,0 },
{ 0,0,0,0,0,0,1,0,0,0,0,0,0 },
{ 0,5,4,0,1,1,1,1,1,0,8,14,0 },
{ 0,7,1,0,1,10,10,10,1,0,1,7,0 },
{ 0,0,16,0,1,10,1,10,1,0,16,0,0 },
{ 0,10,1,0,1,10,10,10,1,0,1,10,0 },
{ 0,1,10,0,1,10,10,10,1,0,10,1,0 },
{ 0,17,0,0,0,0,23,0,0,0,0,17,0 },
{ 0,1,27,1,0,1,18,1,0,1,27,1,0 },
{ 0,8,1,1,11,1,15,1,11,1,1,8,0 },
{ 0,0,0,0,0,0,0,0,0,0,0,0,0 }
};//10   6    1   5
int map11[13][13] = {
	{ 0,0,0,0,0,0,0,0,0,0,0,0,0 },
{ 0,0,0,0,0,1,1,1,1,1,1,9,0 },
{ 0,0,0,0,0,1,1,1,0,0,0,0,0 },
{ 0,0,0,0,0,0,1,0,0,0,0,0,0 },
{ 0,0,0,0,0,1,1,1,0,0,0,0,0 },
{ 0,0,0,0,0,31,32,33,0,0,0,0,0 },
{ 0,0,0,0,0,34,35,36,0,0,0,0,0 },
{ 0,0,0,0,0,37,38,39,0,0,0,0,0 },
{ 0,0,0,0,0,1,1,1,0,0,0,0,0 },
{ 0,0,0,0,0,1,1,1,0,0,0,0,0 },
{ 0,0,0,0,0,1,18,1,0,0,0,0,0 },
{ 0,0,0,0,0,1,15,1,0,0,0,0,0 },
{ 0,0,0,0,0,0,0,0,0,0,0,0,0 }
};//10   6     1   10
int map12[13][13] = {
	{ 0,0,0,0,0,0,0,0,0,0,0,0,0 },
{ 0,1,1,1,1,1,1,1,1,1,1,1,0 },
{ 0,1,1,1,0,0,0,0,0,1,1,1,0 },
{ 0,1,1,0,0,0,0,0,0,0,1,1,0 },
{ 0,1,0,0,0,26,26,26,0,0,0,1,0 },
{ 0,1,0,0,26,26,26,26,26,0,0,1,0 },
{ 0,1,0,0,26,26,40,26,26,0,0,1,0 },
{ 0,1,0,0,26,26,26,26,26,0,0,1,0 },
{ 0,1,0,0,0,26,23,26,0,0,0,1,0 },
{ 0,1,1,0,0,0,23,0,0,0,1,1,0 },
{ 0,1,1,1,0,0,23,0,0,1,1,1,0 },
{ 0,15,18,1,1,1,1,1,1,1,1,1,0 },
{ 0,0,0,0,0,0,0,0,0,0,0,0,0 }
};//11  2
int map13[13][13] = {
	{ 25,25,25,25,25,25,25,25,25,25,25,25,25 },
{ 25,25,25,25,25,25,25,25,25,25,25,25,25 },
{ 25,25,25,25,25,25,25,25,25,25,25,25,25 },
{ 25,25,25,25,25,25,25,25,25,25,25,25,25 },
{ 25,25,25,25,25,25,25,25,25,25,25,25,25 },
{ 25,25,25,25,25,25,25,25,25,25,25,25,25 },
{ 25,25,25,25,25,25,40,25,25,25,25,25,25 },
{ 25,25,25,25,25,25,18,25,25,25,25,25,25 },
{ 25,25,25,25,25,25,25,25,25,25,25,25,25 },
{ 25,25,25,25,25,25,25,25,25,25,25,25,25 },
{ 25,25,25,25,25,25,25,25,25,25,25,25,25 },
{ 25,25,25,25,25,25,25,25,25,25,25,25,25 },
{ 25,25,25,25,25,25,25,25,25,25,25,25,25 }
};
#endif
