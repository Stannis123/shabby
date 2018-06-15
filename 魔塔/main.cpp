#define _CRT_SECURE_NO_WARNINGS
#include <graphics.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <conio.h>
#include <stdio.h>
#include "header.h"
HWND hwnd;
char str[20] = "";
char *intToWchar(int Number)
{

	sprintf(str, "%d", Number);
	return str;
}

void loadpicture()
{
	loadimage(&WAL, "WAL.jpg", 60, 60);
	loadimage(&FLOO, "FLOO.jpg", 60, 60);
	loadimage(&GREENSL, "GREENSL.jpg", 60, 60);
	loadimage(&REDSL, "REDSL.jpg", 60, 60);
	loadimage(&BLUECRYSTA, "BLUECRYSTA.jpg", 60, 60);
	loadimage(&REDCRYSTA, "REDCRYSTA.jpg", 60, 60);
	loadimage(&BLUEKE, "BLUEKE.jpg", 60, 60);
	loadimage(&YELLOWKE, "YELLOWKE.jpg", 60, 60);
	loadimage(&REDME, "REDME.jpg", 60, 60);
	loadimage(&U, "U.jpg", 60, 60);
	loadimage(&DOW, "DOW.jpg", 60, 60);
	loadimage(&BA, "BA.jpg", 60, 60);
	loadimage(&WIZZAR,"WIZZAR.jpg", 60, 60);
	loadimage(&KULO, "KULO.jpg", 60, 60);
	loadimage(&BIGKULO, "BIGKULO.jpg", 60, 60);
	loadimage(&BLUEME, "BLUEME.jpg", 60, 60);
	loadimage(&BLUEDOO, "BLUEDOO.jpg", 60, 60);
	loadimage(&YELLOWDOO, "YELLOWDOO.jpg", 60, 60);
	loadimage(&MA, "MA.jpg", 60, 60);
	loadimage(&INF, "INF.jpg");
	loadimage(&REDDOO, "REDDOO.jpg", 60, 60);
	loadimage(&REDKE, "REDKE.jpg", 60, 60);
	loadimage(&SWOR, "SWOR.jpg", 60, 60);
	loadimage(&STA, "STA.jpg", 60, 60);
	loadimage(&MAGM, "MAGM.jpg", 60, 60);
	loadimage(&SHIE, "SHIE.jpg", 60, 60);
	loadimage(&SOLDIE ,"SOLDIE.jpg", 60, 60);
	loadimage(&BLACKSOLDIE, "BLACKSOLDIE.jpg", 60, 60);
	loadimage(&BOO, "BOO.jpg", 60, 60);	
	loadimage(&SHO, "SHO.jpg", 60, 60); 
	loadimage(&KEY_SHO, "KEY_SHO.jpg", 60, 60); 
	loadimage(&UR, "UR.jpg", 60, 60); 
	loadimage(&UM, "UM.jpg", 60, 60);
	loadimage(&UL, "UL.jpg", 60, 60);
	loadimage(&MR, "MR.jpg", 60, 60);
	loadimage(&MM, "MM.jpg", 60, 60);
	loadimage(&ML, "ML.jpg", 60, 60);	
	loadimage(&DL, "DL.jpg", 60, 60);
	loadimage(&DM, "DM.jpg", 60, 60);
	loadimage(&DR, "DR.jpg", 60, 60);
}
void loadpic()
{
	int a, b;
	for (a = 0; a < 13; a++)
		for (b = 0; b < 13; b++)
		{
			map[a][b][0] = map1[a][b];
			map[a][b][1] = map2[a][b];
			map[a][b][2] = map3[a][b];
			map[a][b][3] = map4[a][b];
			map[a][b][4] = map5[a][b];
			map[a][b][5] = map6[a][b];
			map[a][b][6] = map7[a][b];
			map[a][b][7] = map8[a][b];
			map[a][b][8] = map9[a][b];
			map[a][b][9] = map10[a][b];
			map[a][b][10] = map11[a][b];
			map[a][b][11] = map12[a][b];
			map[a][b][12] = map13[a][b];
		}
}
void LOADIMAGE(int k)//加载图片
{
	int i, j;
	for (i = 0; i < 13; i++)
	{
		for (j = 0; j < 13; j++)
		{
			switch (map[i][j][k])
			{
			case 0:
				putimage(j * 60, i * 60, &WAL);
				break;
			case 1:
				putimage(j * 60, i * 60, &FLOO);
				break;
			case 2:
				putimage(j * 60, i * 60, &GREENSL);
				break;
			case 3:
				putimage(j * 60, i * 60, &REDSL);
				break;
			case 4:
				putimage(j * 60, i * 60, &BLUECRYSTA);
				break;
			case 5:
				putimage(j * 60, i * 60, &REDCRYSTA);
				break;
			case 6:
				putimage(j * 60, i * 60, &BLUEKE);
				break;
			case 7:
				putimage(j * 60, i * 60, &YELLOWKE);
				break;
			case 8:
				putimage(j * 60, i * 60, &REDME);
				break;
			case 9:
				putimage(j * 60, i * 60, &U);
				break;
			case 10:
				putimage(j * 60, i * 60, &BA);
				break;
			case 11:
				putimage(j * 60, i * 60, &WIZZAR);
				break;
			case 12:
				putimage(j * 60, i * 60, &KULO);
				break;
			case 13:
				putimage(j * 60, i * 60, &BIGKULO);
				break;
			case 14:
				putimage(j * 60, i * 60, &BLUEME);
				break;
			case 15:
				putimage(j * 60, i * 60, &DOW);
				break;
			case 16:
				putimage(j * 60, i * 60, &BLUEDOO);
				break;
			case 17:
				putimage(j * 60, i * 60, &YELLOWDOO);
				break;
			case 18:
				putimage(j * 60, i * 60, &MA);
				break;
			case 19:
				putimage(j * 60, i * 60, &SWOR);
				break;
			case 20:
				putimage(j * 60, i * 60, &SHIE);
				break;
			case 21:
				putimage(j * 60, i * 60, &BOO);
				break;
			case 22:
				putimage(j * 60, i * 60, &INF);
				break;
			case 23:
				putimage(j * 60, i * 60, &REDDOO);
				break;
			case 24:
				putimage(j * 60, i * 60, &REDKE);
				break;
			case 25:
				putimage(j * 60, i * 60, &STA);
				break;
			case 26:
				putimage(j * 60, i * 60, &MAGM);
				break;
			case 27:
				putimage(j * 60, i * 60, &SOLDIE);
				break;
			case 28:
				putimage(j * 60, i * 60, &BLACKSOLDIE);
				break;
			case 29:
				putimage(j * 60, i * 60, &KEY_SHO);
				break;
			case 30:
				putimage(j * 60, i * 60, &SHO);
				break;
			case 31:
				putimage(j * 60, i * 60, &UL);
				break;
			case 32:
				putimage(j * 60, i * 60, &UM);
				break;
			case 33:
				putimage(j * 60, i * 60, &UR);
				break;
			case 34:
				putimage(j * 60, i * 60, &ML);
				break;
			case 35:
				putimage(j * 60, i * 60, &MM);
				break;
			case 36:
				putimage(j * 60, i * 60, &MR);
				break;
			case 37:
				putimage(j * 60, i * 60, &DL);
				break;
			case 38:
				putimage(j * 60, i * 60, &DM);
				break;
			case 39:
				putimage(j * 60, i * 60, &DR);
				break;
			case 40:
				putimage(j * 60, i * 60, &PRINCES);
				break;

			}
		}
	}

	//显示信息
	putimage(60 * 13, 0, &INF);
	setbkmode(TRANSPARENT);
	outtextxy(60 * 13 + 17, 180, player.name);
	outtextxy(60 * 13 + 12, 235, intToWchar(hp));
	outtextxy(60 * 13 + 22, 362, intToWchar(attack));
	outtextxy(60 * 13 + 22, 425, intToWchar(defend));
	outtextxy(60 * 13 + 12, 517, intToWchar(money));
	outtextxy(60 * 13 + 22, 567, intToWchar(zz+1));
	outtextxy(60 * 13 + 22, 639, intToWchar(key_r));
	outtextxy(60 * 13 + 22, 689, intToWchar(key_y));
	outtextxy(60 * 13 + 22, 759, intToWchar(key_b));
}

void gotoxy(int x, int y)
{
	moverel(x - getx(), y - gety());
}//包装gotoxy
void save()
{
	int x, y, z;
	fp=fopen("mtw"," w +" );
	fwrite(&player.name, sizeof(player.name), 1, fp);
	fwrite(&xx, sizeof(xx), 1, fp);
	fwrite(&yy, sizeof(yy), 1, fp);
	fwrite(&zz, sizeof(zz), 1, fp);
	fwrite(&hp, sizeof(hp), 1, fp);
	fwrite(&hpmax, sizeof(hpmax), 1, fp);
	fwrite(&attack, sizeof(attack), 1, fp);	
	fwrite(&defend, sizeof(defend), 1, fp);
	fwrite(&key_y, sizeof(key_y), 1, fp);
	fwrite(&key_b, sizeof(key_b), 1, fp);
	fwrite(&key_r, sizeof(key_r), 1, fp);
	fwrite(&money, sizeof(money), 1, fp);
	for (z = 0; z<13; z++)
		for (x = 0; x<13; x++)
			for (y = 0; y<13; y++)
				fwrite(&map[x][y][z],sizeof(map[x][y][z]),1,fp);
	for (x = 0; x<8; x++)
		fwrite(&monster_[x],sizeof(monster_[x]),1,fp);
	for (x = 0; x < 2; x++)
		for (y = 0; y < 12; y++)
			fwrite(&station[x][y],sizeof(station[x][y]),1,fp);
	fclose(fp);
}
void load()
{
	int x, y, z;
	fp = fopen("mtw", "r");
	fread(&player.name, sizeof(player.name), 1, fp);
	fread(&xx, sizeof(xx), 1, fp);
	fread(&yy, sizeof(yy), 1, fp);
	fread(&zz, sizeof(zz), 1, fp);
	fread(&hp, sizeof(hp), 1, fp);
	fread(&hpmax, sizeof(hpmax), 1, fp);
	fread(&attack, sizeof(attack), 1, fp);
	fread(&defend, sizeof(defend), 1, fp);
	fread(&key_y, sizeof(key_y), 1, fp);
	fread(&key_b, sizeof(key_b), 1, fp);
	fread(&key_r, sizeof(key_r), 1, fp);
	fread(&money, sizeof(money), 1, fp);
	for (z = 0; z<13; z++)
		for (x = 0; x<13; x++)
			for (y = 0; y<13; y++)
				fread(&map[x][y][z], sizeof(map[x][y][z]), 1, fp);
	for (x = 0; x<8; x++)
		fread(&monster_[x], sizeof(monster_[x]), 1, fp);
	for (x = 0; x < 2; x++)
		for (y = 0; y < 12; y++)
			fread(&station[x][y], sizeof(station[x][y]), 1, fp);
	fclose(fp);
}
void startp()//设置人物初始属性
{
	xx = 11;
	yy = 6;
	zz = 0;
	hp = 3000;
	hpmax = hp;
	attack = 20;
	defend = 10;
	money = 200;
	key_y = 0;
	key_b = 0;
	key_r = 0;
	key_y_price = 50;
	key_b_price = 200;
	key_r_price = 1000;
}
void setmonster()//设置怪物属性   
{
	int i;
	for (i = 0; i<8; i++)
	{
		monster_[i].hp = 50 * (i + 1);
		monster_[i].attack = 15 * (i + 1);
		monster_[i].defend = 5 * (i + 1);
		monster_[i].money = 50 + 5 * (i + 1);
	}
	strcpy(monster_[0].name,"史莱姆");
	strcpy(monster_[1].name,"蝙蝠侠");
	strcpy(monster_[2].name ,"骷髅");
	strcpy(monster_[3].name , "骷髅队长");
	strcpy(monster_[4].name,"小巫师");
	strcpy(monster_[5].name, "山丘之王");
	strcpy(monster_[6].name, "暗影武士");
	strcpy(monster_[7].name , "数学分析");
	monster_[7].hp *= 5;
	monster_[7].defend *= 2;
	monster_[7].attack *= 2;
}
//设置怪物属性   
int damage(int kind)//计算伤害函数
{
	int a;
	if ((attack - monster_[kind].defend)>0)
	     a = (monster_[kind].hp / (attack - monster_[kind].defend))*(monster_[kind].attack - defend);
	else
		a = 999999;
	return a;
}
void fight(int kind)
{
	if (damage(kind) > 0)
		hp -= damage(kind);
	money = money += monster_[kind].money;
};
void key_shop()
{
	gotoxy(100, 100);
	outtext("钥匙商人：出售钥匙  黄钥匙50一把");
	gotoxy(100, 150);
	outtext("蓝钥匙200一把  红钥匙1000一把是否购买~？");
	gotoxy(100, 200);
	outtext("1购买黄钥匙  2购买蓝钥匙 3购买红钥匙 else退出");
	switch (_getch())
	{
	case '1':
	{
		if (money >= key_y_price)
		{
			money -= key_y_price;
			key_y++;
			loadpicture();

		}
		else
		{
			gotoxy(400, 400);
			outtext("人穷就好好学习！！");
			system("pause");
		}
		break;
	}
	case '2':
	{
		if (money >= key_b_price)
		{
			money -= key_b_price;
			key_b++;
			loadpicture();

		}
		else
		{
			gotoxy(400, 400);
			outtext("人穷就好好学习！！");
			system("pause");
		}
		break;
	}
	case '3':
	{
		if (money >= key_r_price)
		{
			money -= key_r_price;
			key_r++;
			loadpicture();

		}
		else
		{
			gotoxy(400, 400);
			outtext("人穷就好好学习！！");
			system("pause");
		}
		break;
	}
	default:
	{
		gotoxy(300,300);
		outtext("滚吧！！！");

	}

	}
}
void shop()
{
	gotoxy(60, 100);
	outtext("舞圣：你可以通过锻炼强健体魄");
	gotoxy(100, 150);
	outtext("100块跳一次大舞 加hp500");
	gotoxy(100, 200);
	outtext("100块打一次长拳 加攻击力5");
	gotoxy(100, 250);
	outtext("100块打一次太极 加防御5");
	gotoxy(100, 300);
	outtext("1跳大舞  2打长拳 3打太极 else退出");
	switch (_getch())
	{
	case '1':
	{
		if (money >= 100)
		{
			money -= 100;
			hp += 500;
			hpmax += 500;
			loadpicture();
		}
		else
		{
			gotoxy(400, 400);
			outtext("人穷就好好学习！！");
			system("pause");
		}
		break;
	}
	case '2':
	{
		if (money >= 100)
		{
			money -= 100;
			attack += 5;
			loadpicture();

		}
		else
		{
			gotoxy(400, 400);
			outtext("人穷就好好学习！！");
			system("pause");
		}
		break;
	}
	case '3':
	{
		if (money >= 100)
		{
			money -= 100;
			defend += 5;
			loadpicture();

		}
		else
		{
			gotoxy(400, 400);
			outtext("人穷就好好学习！！");
			system("pause");
		}
		break;
	}
	default:
	{
		gotoxy(60, 12);
		outtext("滚吧！！！");

	}

	}
}

void nextroom(char f)//对获得的方向键进行判断并执行下一格中的相应内容
{
	int dx = xx;
	int dy = yy;
	switch (f)
	{
		case 'a':dy--; break;
		case 's':dx++; break;
		case 'w':dx--; break;
		case 'd':dy++; break;
	}
	if (dx >= 0 && dx<13 && dy >= 0 && dy<13)       
	{
		switch (map[dx][dy][zz])
		{
		case KONG:map[xx][yy][zz] = KONG; map[dx][dy][zz] = MAN; xx = dx; yy = dy; break;
		case MAN:map[xx][yy][zz] = KONG;  map[dx][dy][zz] = MAN; xx = dx; yy = dy; break;
		case WALL:map[xx][yy][zz] = MAN; map[dx][dy][zz] = WALL; xx = xx; yy = yy; break;
		case YELLOWKEY:map[xx][yy][zz] = KONG; map[dx][dy][zz] = MAN; xx = dx; yy = dy; key_y++; break;
		case BLUEKEY:map[xx][yy][zz] = KONG; map[dx][dy][zz] = MAN; xx = dx; yy = dy; key_b++; break;
		case YELLOWDOOR:if (key_y>0) {map[xx][yy][zz] = KONG; map[dx][dy][zz] = MAN; key_y--; xx = dx; yy = dy; }; break;
		case BLUEDOOR:if (key_b>0) { map[xx][yy][zz] = KONG;  map[dx][dy][zz] = MAN; key_b--; xx = dx; yy = dy; }; break;
		case REDSLM:fight(0); map[xx][yy][zz] = KONG; map[dx][dy][zz] = MAN; xx = dx; yy = dy; break;
		case GREENSLM:fight(0); map[xx][yy][zz] = KONG;  map[dx][dy][zz] = MAN; xx = dx; yy = dy; break;
		case BAT:fight(1); map[xx][yy][zz] = KONG;  map[dx][dy][zz] = MAN; xx = dx; yy = dy; break;
		case KEY_SHOP:key_shop(); break;
		case UP: station[0][zz] = xx; station[1][zz] = yy; zz++; xx = station[0][zz]; yy = station[1][zz]; break;
		case DOWN:station[0][zz] = xx; station[1][zz] = yy; zz--; xx = station[0][zz]; yy = station[1][zz]; break;
		case REDMED:map[xx][yy][zz] = KONG;  map[dx][dy][zz] = MAN; xx = dx; yy = dy; if (hp + 200 <= hpmax)hp = hp + 200; else  hp = hpmax;break;
		case BLUEMED:map[xx][yy][zz] = KONG;  map[dx][dy][zz] = MAN; xx = dx; yy = dy; hp = hpmax; break;
		case KULOU:fight(2); map[xx][yy][zz] = KONG; map[dx][dy][zz] = MAN; xx = dx; yy = dy; break;
		case BIGKULOU:fight(3);   map[xx][yy][zz] = KONG; map[dx][dy][zz] = MAN; xx = dx; yy = dy; break;
		case WIZZARD:fight(4);   map[xx][yy][zz] = KONG; map[dx][dy][zz] = MAN; xx = dx; yy = dy; break;
		case SHOP:shop(); break;
		case SWORD:attack += 20; map[xx][yy][zz] = KONG; map[dx][dy][zz] = MAN; xx = dx; yy = dy; break;
		case SHIELD:defend += 20; map[xx][yy][zz] = KONG; map[dx][dy][zz] = MAN; xx = dx; yy = dy; break;
		case REDCRYSTAL: hp += 100; hpmax += 100; map[xx][yy][zz] = KONG; map[dx][dy][zz] = MAN; xx = dx; yy = dy; break;
		case BLUECRYSTAL: hp += 200; hpmax += 200; map[xx][yy][zz] = KONG; map[dx][dy][zz] = MAN; xx = dx; yy = dy; break;
		case REDDOOR:if (key_r > 0) { map[xx][yy][zz] = KONG; map[dx][dy][zz] = MAN; key_r--; xx = dx; yy = dy; }break;
		case REDKEY:map[xx][yy][zz] = KONG; map[dx][dy][zz] = MAN; xx = dx; yy = dy; key_r++; break;
		case STAR:map[xx][yy][zz] = MAN; map[dx][dy][zz] = STAR; xx = xx; yy = yy; break;
		case MAGMA:map[xx][yy][zz] = MAGMA; map[dx][dy][zz] = MAN; xx = dx; yy = dy; hp = hp - 100; break;
		case SOLDIER:fight(5); map[xx][yy][zz] = KONG;  map[dx][dy][zz] = MAN; xx = dx; yy = dy; break;
		case BLACKSOLDIER:fight(6); map[xx][yy][zz] = KONG;  map[dx][dy][zz] = MAN; xx = dx; yy = dy; break;
		case DOWNLEFT:fight(7); map[5][5][zz] = KONG; map[5][6][zz] = KONG; map[5][7][zz] = KONG; map[6][5][zz] = REDKEY; map[6][6][zz] = REDKEY; map[6][7][zz] = REDKEY; map[7][5][zz] = KONG; map[7][6][zz] = KONG; map[7][8][zz] = KONG;
		case DOWNMID:fight(7); map[5][5][zz] = KONG; map[5][6][zz] = KONG; map[5][7][zz] = KONG; map[6][5][zz] = REDKEY; map[6][6][zz] = REDKEY; map[6][7][zz] = REDKEY; map[7][5][zz] = KONG; map[7][6][zz] = KONG; map[7][8][zz] = KONG;
		case DOWNRIGHT:fight(7); map[5][5][zz] = KONG; map[5][6][zz] = KONG; map[5][7][zz] = KONG; map[6][5][zz] = REDKEY; map[6][6][zz] = REDKEY; map[6][7][zz] = REDKEY; map[7][5][zz] = KONG; map[7][6][zz] = KONG; map[7][8][zz] = KONG;
		case PRINCESS:zz++; break;
		} 
	}
}

int nextchar(char b)//判断获得的字符是方向键，或是其他操作指令
{
	if (b == 'w' || b == 's' || b == 'a' || b == 'd')
		nextroom(b);
	if (b == 'p')
	{
		system("pause");
	}
	if (b == 'i')
	{
		save();
	}
	if (b == 'o')
		return 0;
	return 1;
}//获得下一个命令并进行判断

int main(void)//主函数
{
	int a;
	int c;
	initgraph(1200, 602);
	setlinecolor(BLUE);
	setlinestyle(0);
	rectangle(400, 100, 700, 400);
	setlinecolor(YELLOW);
	setlinestyle(3);
	rectangle(390, 90, 710, 410);
	gotoxy(525, 200);
	outtext("1.Start");
	gotoxy(525, 250);
	outtext("2.Load");
	gotoxy(525, 300);
	outtext("3.Exit");
	gotoxy(100, 500);
	outtext("第8组魔塔");
	loadpicture();
	setmonster();
	c = _getch()-48;
	if (c == 2)
	{
		load();
		closegraph();
	}
	if (c == 1)
	{
		closegraph();
		loadpic();
		printf("PLEASE ENTER YOUR NAME:");
		scanf("%s", &player.name);
		startp();//初始化人物资料
	}
	else if(c == 3)
		return 0;
	hwnd = initgraph(60 * 14, 60 * 13);

	LOADIMAGE(zz);	
	for (; ;)
	{
		nextchar(_getch());
		LOADIMAGE(zz);
		if (zz == 12) {
			gotoxy(500, 200);
			outtext("Congratulation!!");
			gotoxy(500, 250);
			outtext("Congratulation!!");
			gotoxy(500, 300);
			outtext("Congratulation!!");
			if (_getch())
			{
				break;
			}
		}
		if (hp<0)
			break;
	}
	system("cls");
	system("pause");
	closegraph();
	for (a = 0; a<100; a++)
		printf("game over!!\n");
	system("pause");
	return 0;
}